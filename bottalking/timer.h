#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <ctime>

using namespace std;

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