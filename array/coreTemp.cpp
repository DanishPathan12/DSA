#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

std::mutex printMutex; // Mutex to prevent mixed output

void printTable(int start, int end) {
    // Function to print tables for numbers in a given range
    for (int num = start; num <= end; ++num) {
        std::vector<int> table;
        for (int i = 1; i <= 10; ++i) {
            table.push_back(num * i);
        }
        {
            std::lock_guard<std::mutex> guard(printMutex); // Lock to synchronize printing
            std::cout << "Table for " << num << ": ";
            for (int val : table) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }
}

void divideWorkload(int start, int end, int numThreads) {
    // Divide the workload among threads
    int rangeSize = (end - start + 1) / numThreads;
    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        int rangeStart = start + i * rangeSize;
        int rangeEnd = (i != numThreads - 1) ? (start + (i + 1) * rangeSize - 1) : end;

        threads.emplace_back(printTable, rangeStart, rangeEnd);
    }

    // Wait for all threads to complete
    for (std::thread &t : threads) {
        if (t.joinable()) {
            t.join();
        }
    }
}

int main() {
    int start = 1;
    int end = 1000000; // Up to 1 million
    int numThreads = 10; // Number of threads

    divideWorkload(start, end, numThreads);

    return 0;
}
