#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
//#include <conio.h> //ปุ่ม
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
    cout << "            กด Enter เพิ่อเข้าสู่โปรแกรม" << endl;
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

int start(void){
    int ans;
    //do{
    this_thread::sleep_for(chrono::seconds(1));
    system("cls");//เคลียร์ terminal
    type("สวัสดีเราคือ ChatBOT นี่คือสิ่งที่่เราสามารถช่วยคุณได้");
    cout << "[1]ปรึกษาเรื่องความรัก" << endl;
    cout << "[2]ปรึกษาเรื่องการเรียน" << endl;
    cout << "[3]ปรึกษาเรื่องสุขภาพ" << endl;
    cout << "[4]ปรึกษาเรื่องการเงิน" << endl;
    cout << "[5]ดูดวง" << endl;
    cout << "[999]เลขเด็ด" << endl << endl;
    cout << "[0]เพื่อออกจากโปรแกรม" << endl; 
    cout << "!!!พิมพ์เลขอื่นนอกเหนือที่เรากำหนดไว้เพื่อกลับสู่หน้านี้!!!" << endl;
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
                if(ans <= 22){
                    randomlove1();
                }else cout << "คุณจะกลับสู่หน้าแรก";
            }else {
                system("cls");
                decks(); 
                cout << endl;
                cin >> ans;
                cin.ignore();
                if(ans <= 22){
                    randomlove2();
                }else cout << "คุณจะกลับสู่หน้าแรก";
                }
        }else if(ans == 2){
                system("cls");
                decks(); 
                cout << endl;
                cin >> ans;
                cin.ignore();
                if(ans <= 22){
                    randomstudy();
                }else cout << "คุณจะกลับสู่หน้าแรก";
        }else if(ans == 3){
                system("cls");
                decks(); 
                cout << endl;
                cin >> ans;
                cin.ignore();
                if(ans <= 22){
                    randomhealth();
                }else cout << "คุณจะกลับสู่หน้าแรก";
        }else if(ans == 4){
                system("cls");
                decks(); 
                cout << endl;
                cin >> ans;
                cin.ignore();
                if(ans <= 22){
                    randommoney();
                }else cout << "คุณจะกลับสู่หน้าแรก";
        }
        
        cout << endl;
    }else if(ans == 999){
        system("cls");
        luckynumber();
    //}
    }else if(ans == 0){
        system("cls");
        cout << "----------     ขอบคุณที่ใช้บริการ ChatBOT     ----------";
        return 0;
    }while(ans != 1 || ans != 2 || ans != 3 || ans != 4 || ans != 5 || ans != 999){
        this_thread::sleep_for(chrono::seconds(1));
        system("cls");
        cout << "สวัสดีเราคือ ChatBOT นี่คือสิ่งที่่เราสามารถช่วยคุณได้" << endl;
        cout << "[1]ปรึกษาเรื่องความรัก" << endl;
        cout << "[2]ปรึกษาเรื่องการเรียน" << endl;
        cout << "[3]ปรึกษาเรื่องสุขภาพ" << endl;
        cout << "[4]ปรึกษาเรื่องการเงิน" << endl;
        cout << "[5]ดูดวง" << endl;
        cout << "[999]เลขเด็ด" << endl << endl;
        cout << "[0]เพื่อออกจากโปรแกรม" << endl; 
        cout << "!!!พิมพ์เลขอื่นนอกเหนือที่เรากำหนดไว้เพื่อกลับสู่หน้านี้!!!" << endl;
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
        }else if(ans == 999){
            system("cls");
            luckynumber();
        }else if(ans == 0){
            system("cls");
            cout << "----------     ขอบคุณที่ใช้บริการ ChatBOT     ----------";
            return 0;
        }
    };
     return 1;
}

/*void exit() {
    char input;
    
    do {
        input = _getch(); // รับอินพุตโดยไม่ต้องกด Enter
        
        if (input == 27) { // ตรวจสอบว่าปุ่มที่กดเป็นปุ่ม ESC (ASCII code 27)
            cout << "----------     ขอบคุณที่ใช้บริการ ChatBOT     ----------" << std::endl;
            break; // ออกจาก loop
        }
    } while (true); // วนรอรับอินพุต
}

void home() {
    char inp;
    
    do {
        inp = _getch(); // รับอินพุตโดยไม่ต้องกด Enter
        
        if (inp == 72 || inp == 104) { // ตรวจสอบว่าปุ่มที่กดเป็นปุ่ม H,h (72,104)
            start();
            break; // ออกจาก loop
        }
    } while (true); // วนรอรับอินพุต
}*/