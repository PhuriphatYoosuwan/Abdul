#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <ctime>
#include "reminder.h"
#include "timer.h"

using namespace std;

//string eiei = {"ด้านความจำ", "ด้านการคิดวิเคราะห์และตีความโจทย์", "ด้านความขยัน"};

    void study(){
    int ans,mmr,thk,dlg;
    cout << "คุณกำลังมีปัญหาทางการเรียนใช่หรือไม่?" << endl;
    cout << "[1]ใช่ [2]ไม่ใช่" << endl;
    cout << "คุณ: ";
    cin >> ans;
    if(ans == 1){
        cout << "ตอนนี้คุณให้คะแนนแต่ละด้านของคุณเท่าไหร่" << endl;
        cout << "ด้านความจำ" << endl;
        cout << "แย่         ปานกลาง         ดีเยี่ยม" << endl ;
        cout << "[1][2][3][4][5][6][7][8][9][10]"<< endl;
        cout << "คุณ: ";
        cin >> mmr;
        cout << "ด้านการคิดวิเคราะห์และตีความโจทย์" << endl;
        cout << "แย่         ปานกลาง         ดีเยี่ยม" << endl ;
        cout << "[1][2][3][4][5][6][7][8][9][10]"<< endl;
        cout << "คุณ: ";
        cin >> thk;
        cout << "ด้านความขยัน" << endl;
        cout << "แย่         ปานกลาง         ดีเยี่ยม" << endl ;
        cout << "[1][2][3][4][5][6][7][8][9][10]"<< endl;
        cout << "คุณ: ";
        cin >> dlg;
        if(mmr < 4){
            cout << "ชั้นคิดว่าคุณต้องพัฒนาด้านความทรงจำหน่อยนะ" << endl; 
            cout << "[1]ต้องการ [2]ไม่ต้องการ" << endl;
            cin >> ans;
            if(ans == 1){
                cout << "1. คุณลองกำหนดเป้าหมายในการเรียน" << endl;
                cout << "2. คุณลองใช้เทคนิคการจำแบบเป็นภ่าพ" << endl;
                cout << "3. คุณต้องหมั่นทบทวนตัวเองอย่างสม่ำเสมอ" << endl;
            }
        }if(thk < 4){
            cout << "ชั้นคิดว่าคุณต้องพัฒนาด้านการวิเคราะห์และตีโจทย์หน่อยนะ" << endl;
            cout << "[1]ต้องการ [2]ไม่ต้องการ" << endl;
            cin >> ans;
            if(ans == 1){
                cout << "1. คุณลองฝึกในการวิเคราะห์ข้อมูลอย่างเป็นระบบ" << endl;
                cout << "2. คุณลองทำโจทย์ใหม่ๆและขยันทบทวนโจทย์ที่เคยทำมาก่อนแล้ว" << endl;
                cout << "3. เวลาทำโจทย์คุณลองทำเป็นขั้นเป็นตอน" << endl;
            }
        }if(dlg < 4){
            cout << "ชั้นคิดว่าคุณต้องพัฒนาด้านความขยัน" << endl;
            cout << "[1]ต้องการ [2]ไม่ต้องการ" << endl;
            cin >> ans;
            if(ans == 1){
                cout << "1. คุณลองกำหนดจัดตารางเวลาแบ่งเวลา" << endl;
                cout << "2. คุณลองตั้งขีดจำกัดตัวเองแล้วทำให้ได้ตามเป้าหมาย" << endl;
                cout << "3. คุณต้องมีวินัยกับตนเองในการทำตามเป้าหมายให้สำเร็จ" << endl;
            }
        }cout << "เรามีตัวช่วยเล็กน้อยสำหรับคุณนะ" << endl;
        cout << "[1]ฝึกความจำ [2]ตัวช่วยเตือนความจำ" << endl;
        cin >> ans;
        if(ans == 1){
            system("cls");
            minigame();
        }if(ans == 2){
            reminder();
        }

    }else cout << "คุณอยากไปดูหัวข้ออื่นของเรามั้ย";
    }
