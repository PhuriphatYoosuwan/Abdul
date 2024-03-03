#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "bottalking\\fangmoney.h"
#include "bottalking\\klongstudy.h"
#include "bottalking\\natlove.h"
#include "bottalking\\pondhealth.h"
#include "randomfuction\\random.h"
#include "luckynumber.h"

using namespace std;

int main() {
    srand(time(0));
    string name;
    char ans;
    cout << "หมอปลา:สวัสดี:) คุณชื่ออะไร?" << endl;
    cout << "???: ";
    getline(cin,name);
    cout << "คณอยากปรึกษาเรื่องอะไร?" << endl;
    cout << "[1]ความรัก [2]การเรียน [3]สุขภาพ [4]การเงิน [5]ดูดวง [999]เลขเด็ดประจำวินาที" << endl;
    cout << name << ": ";
    cin >> ans;
    cin.ignore();
    if(ans == '1'){                               //ความรัก
        love();
    }
    if(ans == '2'){                               //การเรียน
        study();
    }
    if(ans == '3'){                               //สุขภาพ
        health();
    }
    if(ans == '4'){                               //การเงิน
        money();
    }
    if(ans == '5'){                               //ดูดวง
        cout << "หมอปลา: คุณอยากดูดวงเรื่องอะไรละ?" << endl;
        cout << "[1]ความรัก [2]การเรียน [3]สุขภาพ [4]การเงิน" <<endl;
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
                cout << endl;
                cout << name << ": ";
                cin >> ans;
                cin.ignore();
                randomlove1();
            }else {
                decks(); 
                cout << endl;
                cout << name << ": ";
                cin >> ans;
                cin.ignore();
                randomlove2();
                }
        }else if(ans == '2'){
                decks(); 
                cout << endl;
                cout << name << ": ";
                cin >> ans;
                cin.ignore();
                randomstudy();
        }else if(ans == '3'){
                decks(); 
                cout << endl;
                cout << name << ": ";
                cin >> ans;
                cin.ignore();
                randomhealth();
        }else if(ans == '4'){
                decks(); 
                cout << endl;
                cout << name << ": ";
                cin >> ans;
                cin.ignore();
                randommoney();
        }
        
        cout << endl;
        cout << name << ": ";
    return 0;
    }if(ans == '999'){
        luckynumber();
    }
}