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
#include "type.h"

using namespace std;

void intro(){
    system("cls");
    cout << "----------     ยินดีต้อนรับสู่ ChatBOT     ----------" << endl;
    cout << "            กด Enter เพิ่มเข้าสู่โปรแกรม" << endl;
    cin.ignore();
    system("cls");
    /*cout << "สวััสดีเราคือ ChaatBOT นี่คือสิ่งที่่เราสามมรถช่วยคุณได้";
    cout << "[1]ปรึกษาเรื่องความรัก" << endl;
    cout << "[2]ปรึกษาเรื่องการเรียน" << endl;
    cout << "[3]ปรึกษาเรื่องสุขภาพ" << endl;
    cout << "[4]ปรึกษาเรื่องการเงิน" << endl;
    cout << "[5]ดูดวง" << endl;
    cout <<"[6]เลขเด็ด" << endl;*/
}

void start(){
    int ans;
    do{
    this_thread::sleep_for(chrono::seconds(5));
    system("cls");
    type("สวััสดีเราคือ ChatBOT นี่คือสิ่งที่่เราสามารถช่วยคุณได้");
    cout << "[1]ปรึกษาเรื่องความรัก" << endl;
    cout << "[2]ปรึกษาเรื่องการเรียน" << endl;
    cout << "[3]ปรึกษาเรื่องสุขภาพ" << endl;
    cout << "[4]ปรึกษาเรื่องการเงิน" << endl;
    cout << "[5]ดูดวง" << endl;
    cout << "[999]เลขเด็ด" << endl;
    cin >> ans;
    if(ans == 1){  
        system("cls");                             //ความรัก
        love();
    }
    else if(ans == 2){    
        system("cls");                           //การเรียน
        study();
    }
    else if(ans == 3){  
        system("cls");                             //สุขภาพ
        health();
    }
    else if(ans == 4){ 
        system("cls");                              //การเงิน
        money();
    }
    else if(ans == 5){  
        system("cls");                             //ดูดวง
        cout << "คุณอยากดูดวงเรื่องอะไรละ?" << endl;
        cout << "[1]ความรัก [2]การเรียน [3]สุขภาพ [4]การเงิน" <<endl;
        cin >> ans;
        cin.ignore();
        if(ans == 1){
            system("cls");
            cout << "สถานะของคุณเป็นอย่างไร?" << endl;
            cout << "[1]โสด [2]มีแฟน" << endl;
            cin >> ans;
            cin.ignore();
            if(ans == 1){
                system("cls");
                decks(); 
                cout << endl;
                cin >> ans;
                cin.ignore();
                randomlove1();
            }else {
                system("cls");
                decks(); 
                cout << endl;
                cin >> ans;
                cin.ignore();
                randomlove2();
                }
        }else if(ans == 2){
                system("cls");
                decks(); 
                cout << endl;
                cin >> ans;
                cin.ignore();
                randomstudy();
        }else if(ans == 3){
                system("cls");
                decks(); 
                cout << endl;
                cin >> ans;
                cin.ignore();
                randomhealth();
        }else if(ans == 4){
                system("cls");
                decks(); 
                cout << endl;
                cin >> ans;
                cin.ignore();
                randommoney();
        }
        
        cout << endl;
    }
    else if(ans == 999){
        system("cls");
        luckynumber();
    }
    }while(ans != 1 || ans != 2 || ans != 3 || ans != 4 || ans != 5 || ans != 999);
}
/*int main(){
    start();
    return 0;
}*/