#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")
using namespace std;

void reminder() {
    string topic;
    int d, h, m, s;
    cout << "Please enter your topic: ";
    cin >> topic;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    cout << "Enter seconds: ";
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
    cout << endl << "Time's Up!";
    PlaySound(TEXT("sounds\\yophoneringing.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); 
}

int main() {
    reminder();
    return 0;
}
