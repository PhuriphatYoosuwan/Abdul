#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string cards[] = {"The Fool", "The Magician", "The High Priestess", "The Empress", "The Emperor", "The Hierophant","The Lovers", "The Chariot", "Strength", " The Hermit", " The Wheel of Fortune"
                    ,"Justice","The Hanged Man","Death","Temperance","The Devil","The Tower","The Star","The Moon","The Sun","Judgement","The World"};


int randomcards(void){                          //สุ่มการ์ด
    return rand()%22;
}

int main() {
    srand(time(0));
    string name;
    int input,ans;
    cout << "หมอปลา:สวัสดี:) คุณชื่ออะไร" << endl;
    cout << "???: ";
    getline(cin,name);
    cout << "คณอยากปรึกษาเรื่องอะไร" << endl;
    cout << "[1]ความรัก [2]การเรียน [3]สุขภาพ [4]การเงิน [5]ดูดวง" << endl;
    cout << name << ": ";
    cin >> ans;
    cin.ignore();
    if(ans == 1){                               //ความรัก
        cout << "รัก " << name << " นะ <3";
    }
    if(ans == 2){                               //การเรียน
        cout << "สู้ๆ";
    }
    if(ans == 3){                               //สุขภาพ
        cout << "ออกกำลังกาย";
    }
    if(ans == 4){                               //การเงิน
        cout << "เก็บตัง";
    }
    if(ans == 5){                               //ดูดวง
        cout << "หมอปลา: โปรดเลือกไพ่ที่คุณต้องการ" << endl;
        for (int i = 0; i < sizeof(cards) / sizeof(cards[0])-10; i++){ 
            cout << "[" << i + 1 << "]" << " ";}
        cout << endl;
        for (int i = 11; i <= sizeof(cards) / sizeof(cards[0]); i++){ 
            cout << "[" << i + 1 << "]" << " ";}
        cout << endl;
        cout << name << ": ";
        cin >> input;
        while(input > sizeof(cards)/sizeof(cards[0])){
            cout << "หมอปลา: มึงกวนตีนกูละ" << endl;
            for (int i = 0; i < sizeof(cards)/sizeof(cards[0]) - 10; i++){ 
                cout << "[" << i + 1 << "]" << " ";
            }
            cout << endl;
            for (int i = 11; i <= sizeof(cards)/sizeof(cards[0]); i++){ 
                cout << "[" << i + 1 << "]" << " ";
            }
            cout << endl;
            cout << name << ": ";
            cin >> input;
    } 
        cout << "หมอปลา: คุณได้รับ " << cards[randomcards()] << "!!!"<< endl;
    }
    return 0;
}