#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>

// /proc/meminfo üzerinden RAM kullanımını okur (MB cinsinden)
void print_memory_usage() {
    std::ifstream meminfo("/proc/meminfo");
    std::string key;
    long total_mem = 0, free_mem = 0, available_mem = 0;

    while (meminfo >> key) {
        if (key == "MemTotal:") {
            meminfo >> total_mem;
        } else if (key == "MemAvailable:") {
            meminfo >> available_mem;
        }
    }

    if (total_mem > 0) {
        long used_mem = total_mem - available_mem;
        std::cout << "[baldic-cored] RAM Kullanimi: " 
                  << used_mem / 1024 << " MB / " 
                  << total_mem / 1024 << " MB" << std::endl;
    }
}

int main() {
    std::cout << "========================================" << std::endl;
    std::cout << "   Baldic Core Daemon (baldic-cored)   " << std::endl;
    std::cout << "   Status: Active & Resource Monitor   " << std::endl;
    std::cout << "========================================" << std::endl;

    while (true) {
        print_memory_usage();
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    return 0;
}
