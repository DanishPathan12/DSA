import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class BillionTable {

    // Number of threads to use
    private static final int NUM_THREADS = 10; // Adjust based on your system's capabilities
    private static final long START = 1;
    private static final long END = 1_000_000_000; // 1 billion

    public static void main(String[] args) {
        // Create a thread pool
        ExecutorService executor = Executors.newFixedThreadPool(NUM_THREADS);

        // Divide the range of numbers among threads
        long range = (END - START + 1) / NUM_THREADS;
        for (int i = 0; i < NUM_THREADS; i++) {
            long start = START + i * range;
            long end = (i == NUM_THREADS - 1) ? END : start + range - 1;

            // Submit tasks to the thread pool
            executor.submit(new TablePrinter(start, end));
        }

        // Shutdown the executor after all tasks are completed
        executor.shutdown();
    }

    // Task to print multiplication tables for a range of numbers
    static class TablePrinter implements Runnable {
        private final long start;
        private final long end;

        public TablePrinter(long start, long end) {
            this.start = start;
            this.end = end;
        }

        @Override
        public void run() {
            for (long i = start; i <= end; i++) {
                printTable(i);
            }
        }

        // Method to print the multiplication table for a single number
        private void printTable(long num) {
            System.out.println("Table of " + num + ":");
            for (int i = 1; i <= 10; i++) {
                System.out.println(num + " x " + i + " = " + (num * i));
            }
            System.out.println(); // Add a blank line after each table
        }
    }
}