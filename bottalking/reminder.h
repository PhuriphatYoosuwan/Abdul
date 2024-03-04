#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;

void reminder() {
    string topic;
    int d, h, m, s;
    cout << "ใส่หัวข้อ: ";
    cin >> topic;
    cout << "ใส่ชั่วโมง: ";
    cin >> h;
    cout << "ใส่นาที: ";
    cin >> m;
    cout << "ใส่วินาที: ";
    cin >> s;
    h *= 3600;
    m *= 60;
    s = s + m + h;
    cout << topic << "| ";
    for (int i = s; i >= 0; --i) { //นับเวลาถอยหลัง
        cout << "\r" << setw(2) << setfill('0') << i / 3600 << ":" //ทำให้เลขแสดงผลเป็นสองหลัก
             << setw(2) << setfill('0') << (i % 3600) / 60 << ":"
             << setw(2) << setfill('0') << i % 60;
        fflush(stdout);
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl << "ตู๊ดตู๊ดตู๊ด หมดเวลาแล้วจ้า!";
}

