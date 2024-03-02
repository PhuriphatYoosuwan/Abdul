#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <iomanip>

void countdown(int seconds) {
    while (seconds > 0) {
        std::cout << "\rCountdown: " << seconds << " seconds left" << std::flush;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        --seconds;
    }
    std::cout << "\rCountdown: Time's up!" << std::endl;
}

int main() {
    int seconds;

    // รับเวลาที่ต้องการนับถอยหลัง
    std::cout << "Enter the number of seconds to countdown: ";
    std::cin >> seconds;

    // เรียกใช้ฟังก์ชันนับถอยหลัง
    countdown(seconds);

    return 0;
}
