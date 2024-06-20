int main() {
    constexpr int NUM_THREADS = 4;
    constexpr int NUM_TASKS = 10;

    ThreadPool pool(NUM_THREADS);

    // Enqueue tasks
    for (int i = 0; i < NUM_TASKS; ++i) {
        pool.enqueue([i] {
            processData(i);
        });
    }

    // Sleep to allow tasks to complete (in a real scenario, you would use synchronization mechanisms)
    std::this_thread::sleep_for(std::chrono::seconds(1));

    return 0;
}
