#include <iostream>
#include <vector>
#include <cstdlib>
#include <thread>
#include <chrono>

int main()
{
    const size_t target_memory = 16ULL * 1024 * 1024 * 1024; // 16GB in bytes
    const size_t chunk_size = 100 * 1024 * 1024;             // 100MB chunks
    size_t allocated = 0;

    std::vector<char *> memory_blocks;

    std::cout << "Attempting to allocate approximately 16GB of RAM..." << std::endl;
    std::cout << "Press Ctrl+C to stop the program early.\n"
              << std::endl;

    try
    {
        while (allocated < target_memory)
        {
            char *block = new char[chunk_size];
            if (!block)
            {
                std::cerr << "Memory allocation failed!" << std::endl;
                break;
            }

            // Touch each page to ensure it's actually allocated
            for (size_t i = 0; i < chunk_size; i += 4096)
            {
                block[i] = static_cast<char>(i % 256);
            }

            memory_blocks.push_back(block);
            allocated += chunk_size;

            double gb_allocated = static_cast<double>(allocated) / (1024 * 1024 * 1024);
            std::cout << "Allocated: " << gb_allocated << " GB" << std::endl;

            // Small delay to make the output readable
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
    catch (const std::bad_alloc &e)
    {
        std::cerr << "\nMemory allocation failed: " << e.what() << std::endl;
    }

    std::cout << "\nAllocation complete. Holding memory..." << std::endl;
    std::cout << "Press Enter to release memory and exit." << std::endl;
    std::cin.get();

    // Clean up
    for (char *block : memory_blocks)
    {
        delete[] block;
    }

    return 0;
}