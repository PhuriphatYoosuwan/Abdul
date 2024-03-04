#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <ctime>

using namespace std;

void loadingBar(int duration, int resolution = 50) {
    for (int i = resolution; i >= 0; --i) {
        float progress = (float)i / resolution;
        int barWidth = 70;

        cout << "[";
        int pos = barWidth * progress;
        for (int j = 0; j < barWidth; ++j) {
            if (j < pos) cout << "=";
            else if (j == pos) cout << ">";
            else cout << " ";
        }
        cout << "] " << int(progress * 100.0) << "%\r";
        cout.flush();

        // Simulate work
        this_thread::sleep_for(chrono::milliseconds(duration));
    }
    cout << endl;
}

void minigame() {
    int ans, num;
    int n = 10;
    int t = 3;
    for (int jj = 1; jj <= 12; jj++) {
        num = rand() % n;
        cout << num;
        cout << endl;   
        for (int ii = t; ii >= 0; --ii) { //นับเวลาถอยหลัง
            cout << "\rTime lefted " << ii << " seconds";
            fflush(stdout);
            this_thread::sleep_for(chrono::seconds(1));
            loadingBar(t);
        }
        system("cls"); //ล้างหน้าจอ ternimal
        cout << "Please input your answer: ";
        cin >> ans;
        if(ans != num){
            cout << "wrong";
            break;
            }
        n *= 10;
        t += 2;
        }
}