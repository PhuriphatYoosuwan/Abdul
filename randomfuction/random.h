#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

string cards[] = {"The Fool", "The Magician", "The High Priestess", "The Empress", "The Emperor", "The Hierophant","The Lovers", "The Chariot", "Strength", " The Hermit", " The Wheel of Fortune",
                    "Justice","The Hanged Man","Death","Temperance","The Devil","The Tower","The Star","The Moon","The Sun","Judgement","The World"};

int random(int x){
    return rand()%x;
    }

void decks(){
    for (int i = 0; i < sizeof(cards) / sizeof(cards[0])-10; i++){ 
            cout << "[" << i + 1 << "]" << " ";}
        cout << endl;
        for (int i = 11; i <= (sizeof(cards) / sizeof(cards[0]))-1; i++){ 
            cout << "[" << i + 1 << "]" << " ";}
}

void randomlove1(){
    srand(time(0));
    int n = random(22);
    ifstream source;
    source.open("info\\love1.txt");
    string love;
    for(int i = 0; i < n + 1; i++){
        getline(source, love);
    }
    source.close();
    cout <<"ไพ่ที่คุณได้รับคือ : "<< cards[n] << endl << love;
}

void randomlove2(){
    srand(time(0));
    int n = random(22);
    ifstream source;
    source.open("info\\love2.txt");
    string love;
    for(int i = 0; i < n + 1; i++){
        getline(source, love);
    }
    source.close();
    cout <<"ไพ่ที่คุณได้รับคือ : "<< cards[n] << endl << love;
}

void randomhealth(){
    srand(time(0));
    int n = random(22);
    ifstream source;
    source.open("info\\health.txt");
    string love;
    for(int i = 0; i < n + 1; i++){
        getline(source, love);
    }
    source.close();
    cout <<"ไพ่ที่คุณได้รับคือ : "<< cards[n] << endl << love;
}

void randommoney(){
    srand(time(0));
    int n = random(22);
    ifstream source;
    source.open("info\\money.txt");
    string love;
    for(int i = 0; i < n + 1; i++){
        getline(source, love);
    }
    source.close();
    cout <<"ไพ่ที่คุณได้รับคือ : "<< cards[n] << endl << love;
}

void randomstudy(){
    srand(time(0));
    int n = random(22);
    ifstream source;
    source.open("info\\study.txt");
    string love;
    for(int i = 0; i < n + 1; i++){
        getline(source, love);
    }
    source.close();
    cout <<"ไพ่ที่คุณได้รับคือ : "<< cards[n] << endl << love;
}