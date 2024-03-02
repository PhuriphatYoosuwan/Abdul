#include <cstdlib>
#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

void minigame() {
    int ans, num;
    int n = 10;
    int t = 3;
    for (int j = 1; j <= 12; j++) {
        num = rand() % n;
        cout << num;
        cout << endl;
        for (int i = t; i >= 0; --i) { //นับเวลาถอยหลัง
            cout << "\rTime lefted " << i << " seconds";
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

int main() {
    srand(time(0));
    minigame();
    return 0;                                                                                                                           
}
