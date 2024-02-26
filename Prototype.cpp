#include <iostream>
#include <cstdlib>
#include <ctime>
#include "C:\\Users\\phuyo\\OneDrive\\Adbul\\Abdul-6\\bot talking\\klongstudy.h"

using namespace std;

int main() {
    srand(time(0));
    string name;
    char ans;
    cout << "หมอปลา:สวัสดี:) คุณชื่ออะไร?" << endl;
    cout << "???: ";
    getline(cin,name);
    cout << "คณอยากปรึกษาเรื่องอะไร?" << endl;
    cout << "[1]ความรัก [2]การเรียน [3]สุขภาพ [4]การเงิน [5]ดูดวง" << endl;
    cout << name << ": ";
    cin >> ans;
    cin.ignore();
    if(ans == '1'){                               //ความรัก
        ;
    }
    if(ans == '2'){                               //การเรียน
        study();
    }
    if(ans == '3'){                               //สุขภาพ
        ;
    }
    if(ans == '4'){                               //การเงิน
        ;
    }
    /*if(ans == '5'){                               //ดูดวง
        cout << "หมอปลา: คุณอยากดูดวงเรื่องอะไรละ?" << endl;
        cout << "[1]ความรัก [2]การเรียน [3]สุขภาพ [4]การเงิน [5]ดูดวง";
        cout << name << ": ";
        cin >> ans;
        cin.ignore();
        if(ans == '1'){
            cout << "หมอปลา: สถานะของคุณเป็นอย่างไร?" << endl;
            cout << "[1]โสด [2]มีแฟน" << endl;
            cout << name << ": ";
            cin >> ans;
            cin.ignore();
            if(ans == '1'){
                decks();
                cout << name << ": ";
                cin >> ans;
                cin.ignore();
                randomlove1();
            }else randomlove2();
        }else if(ans == '2');
        
        cout << endl;
        cout << name << ": ";*/
    return 0;
    }