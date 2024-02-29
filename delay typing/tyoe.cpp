#include <iostream>
#include <chrono> // เพื่อใช้ควบคุมการหน่วงเวลา
#include <thread> // เพื่อใช้ควบคุมการหน่วงเวลา

using namespace std;

int main() {
    string input_text;
    cout << "Enter text slowly: ";
    getline(cin, input_text); // รับข้อความจากผู้ใช้

    // พิมพ์ข้อความตัวอักษรทีละตัวโดยมีการหน่วงเวลา 300 มิลลิวินาที
    for (char c : input_text) {
        cout << c << std::flush;
        this_thread::sleep_for(std::chrono::milliseconds(150));
    }

    cout << endl; // พิมพ์ขึ้นบรรทัดใหม่หลังจากพิมพ์ข้อความเสร็จ

    return 0;
}