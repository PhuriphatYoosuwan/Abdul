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
    int input;
    cout << "Prophet: Please choose your cards" << endl;
    for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++){ 
        cout << "[" << i + 1 << "]" << " ";}
    cout << endl;
    cout << "user: ";
    cin >> input;
    cout << "Prophet: You got " << cards[randomcards()] << endl;

    return 0;
}