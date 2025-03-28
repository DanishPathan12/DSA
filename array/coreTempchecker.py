import threading

def print_table(start, end):
    """Function to print tables for numbers in a given range."""
    for num in range(start, end + 1):
        table = [num * i for i in range(1, 11)]  # Generate table up to 10
        print(f"Table for {num}: {table}")

def divide_workload(start, end, num_threads):
    """Divide the workload among threads."""
    range_size = (end - start + 1) // num_threads
    threads = []

    for i in range(num_threads):
        range_start = start + i * range_size
        range_end = start + (i + 1) * range_size - 1 if i != num_threads - 1 else end

        thread = threading.Thread(target=print_table, args=(range_start, range_end))
        threads.append(thread)
        thread.start()

    # Wait for all threads to complete
    for thread in threads:
        thread.join()

if __name__ == "__main__":
    start = 1
    end = 1_000_000_000  # Up to 1 million
    num_threads = 8  # Number of threads

    divide_workload(start, end, num_threads)
