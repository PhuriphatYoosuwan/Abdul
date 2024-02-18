#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string cards[] = {"The Fool", "The Magician", "The High Priestess", "The Empress", "The Emperor", "The Hierophant","The Lovers", "The Chariot", "Strength", " The Hermit", " The Wheel of Fortune"
                    "Justice","The Hanged Man","Death","Temperance","The Devil","The Tower","The Star","The Moon","The Sun","Judgement","The World"};


int randomcards(void){
    return rand()%22+1;
}

int main() {
    srand(time(0));
    string name;
    int input,ans;
    cout << "Prophet: What is your name?" << endl;
    cout << "???: ";
    getline(cin,name);
    cout << "Prophet: What would you like to consult about?" << endl;
    cout << "[1]Love [2]Study [3]Health [4]Money [5]dooduang" << endl;
    cin >> ans;
    cin.ignore();
    if(ans == 1){
        cout << "I love " << name << " na <3";
    }
    if(ans == 2){
        cout << "Fighting!!!";
    }
    if(ans == 3){
        cout << "Exercise!!!";
    }
    if(ans == 4){
        cout << "Save your Money";
    }
    if(ans == 5){
        cout << "Prophet: Please choose your cards" << endl;
        for (int i = 0; i < sizeof(cards) / sizeof(cards[0])-10; i++){ 
            cout << "[" << i + 1 << "]" << " ";}
        cout << endl;
        for (int i = 11; i <= sizeof(cards) / sizeof(cards[0]); i++){ 
            cout << "[" << i + 1 << "]" << " ";}
        cout << endl;
        cout << name << ": ";
        cin >> input;
        while(input > sizeof(cards)/sizeof(cards[0])){
            cout << "Prophet: Isus Choose again yed mae!!" << endl;
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
        cout << "Prophet: You got " << cards[randomcards()] << endl;
    }else{
        cout << "mueng kuan teen roo?" << endl;
        cout << "[1]Love [2]Study [3]Health [4]Money [5]dooduang" << endl;
        cin >> ans;
        cin.ignore();
    }
    return 0;
}