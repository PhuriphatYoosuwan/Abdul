#include<iostream>
#include<vector>
using namespace std;

vector<string> cards = {"The Fool", "The Magician", "The High Priestess", "The Empress", "The Emperor", "The Hierophant",
                        "The Lovers", "The Chariot", "Strength", " The Hermit", " The Wheel of Fortune"};


int main(){
    string input;
    cout << "Prophet: Choose your cards." << endl;
    for(int i = 1; i <= cards.size(); i++) cout << "[" << i << "]"<< " ";
    cout << endl;
    cout << "user: ";         
    cin >> input;
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