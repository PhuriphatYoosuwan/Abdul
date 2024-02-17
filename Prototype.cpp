#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string cards[] = {"The Fool", "The Magician", "The High Priestess", "The Empress", "The Emperor", "The Hierophant","The Lovers", "The Chariot", "Strength", " The Hermit", " The Wheel of Fortune"};


int randomcards(){
    int n;
    n = rand()%11+1;2
    return n;
}

int main(){
    srand(time(0));
    int input;
    cout << "Prophet: Please choose your cards." << endl;
    for(int i = 1; i <= sizeof(cards); i++) cout << "[" << i << "]"<< " ";
    cout << endl;
    cout << "user: ";         
    //cin >> input;
    cin >> input;
    //cout << cards[randomcards];
    cout << "Prophet: You got ";
    /*if(input == "1"){
        cout << "A";
    }if(input == "2"){
        cout << "B";
    }if(input == "3"){
        cout << "C";
    }if(input == "4"){
        cout << "D";
    }*/
    return 0;
}