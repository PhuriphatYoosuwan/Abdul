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
    string name,ans,input;
    cout << "Prophet: What is your name?" << endl;
    cout << "???: ";
    getline(cin,name);
    cout << "Prophet: What would you like to consult about?" << endl;
    cout << "[1]Love [2]Study [3]Health [4]Money [5]dooduang" << endl;
    cin >> ans;
    cin.ignore();
    if(ans == "5"){
        cout << "Prophet: Please choose your cards" << endl;
        for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++){ 
            cout << "[" << i + 1 << "]" << " ";}
        cout << endl;
        cout << name << ": ";
        cin >> input;
        cout << "Prophet: You got " << cards[randomcards()] << endl;
    }else if (ans=="4"){
        cout << "Prophet: Please choose your cards" << endl;
        for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++){ 
            cout << "[" << i + 1 << "]" << " ";}
        cout << endl;
        cout << name << ": ";
        cin >> input;
        cout << "Prophet: You got " << cards[randomcards()] << endl;
    }else if (ans=="3"){
        cout << "Prophet: Please choose your cards" << endl;
        for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++){ 
            cout << "[" << i + 1 << "]" << " ";}
        cout << endl;
        cout << name << ": ";
        cin >> input;
        cout << "Prophet: You got " << cards[randomcards()] << endl;
    }else if (ans=="2"){
        cout << "Prophet: Please choose your cards" << endl;
        for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++){ 
            cout << "[" << i + 1 << "]" << " ";}
        cout << endl;
        cout << name << ": ";
        cin >> input;
        cout << "Prophet: You got " << cards[randomcards()] << endl;
    }else if (ans=="1"){
        cout << "Prophet: Please choose your cards" << endl;
        for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++){ 
            cout << "[" << i + 1 << "]" << " ";}
        cout << endl;
        cout << name << ": ";
        cin >> input;
        cout << "Prophet: You got " << cards[randomcards()] << endl;
    }
    

    return 0;
}