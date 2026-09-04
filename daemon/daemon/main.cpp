#include <iostream>
#include <thread>
#include <chrono>

int main() {
    std::cout << "========================================" << std::endl;
    std::cout << "   Baldic Core Daemon (baldic-cored)   " << std::endl;
    std::cout << "   Status: Active & Monitoring          " << std::endl;
    std::cout << "========================================" << std::endl;

    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    return 0;
}
