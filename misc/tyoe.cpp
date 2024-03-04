#include <iostream>
#include <chrono> // เพื่อใช้ควบคุมการหน่วงเวลา
#include <thread> // เพื่อใช้ควบคุมการหน่วงเวลา

using namespace std;

void type(const string& input_text) {
    // พิมพ์ข้อความตัวอักษรทีละตัวโดยมีการหน่วงเวลา 150 มิลลิวินาที
    for (char c : input_text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(50));
    }
    cout << endl; // พิมพ์ขึ้นบรรทัดใหม่หลังจากพิมพ์ข้อความเสร็จ
}
