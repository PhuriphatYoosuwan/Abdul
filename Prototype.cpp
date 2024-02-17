#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string cards[] = {"The Fool", "The Magician", "The High Priestess", "The Empress", "The Emperor", "The Hierophant","The Lovers", "The Chariot", "Strength", " The Hermit", " The Wheel of Fortune"};


int randomcards(void){
    return rand()%11+1;
}

int main() {
    srand(time(0));
    string name;
    int input;
    cout << "หมอปลาทอง: คุณชื่ออะไร?" << endl;
    cout << "???: ";
    cin >> name;
    cout << endl;
    cout << "หมอปลาทอง: โปรดเลือกการ์ดเพื่อดูดวงชะตาของคุณ" << endl;
    for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++){ 
        cout << "[" << i + 1 << "]" << " ";}
    cout << endl;
    cout << name << ": ";
    cin >> input;
    cout << "หมอปลาทอง: คุณได้ " << cards[randomcards()] << endl;

    return 0;
}