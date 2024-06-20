#include <iostream>
#include <chrono>

void processData(int data) {
    // Simulate processing time
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Processed data: " << data << std::endl;
}
