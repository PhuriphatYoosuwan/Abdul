#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "C:\\Users\\phuyo\\OneDrive\\Adbul\\Abdul-6\\random fuction\\random.h"

using namespace std;

/*string cards[] = {"The Fool", "The Magician", "The High Priestess", "The Empress", "The Emperor", "The Hierophant","The Lovers", "The Chariot", "Strength", " The Hermit", " The Wheel of Fortune",
                    "Justice","The Hanged Man","Death","Temperance","The Devil","The Tower","The Star","The Moon","The Sun","Judgement","The World"};

int randomcards(void){
    return rand() % 22;
}*/

void randomlove2(){
    srand(time(0));
    int n = randomcards();
    ifstream source;
    source.open("C:\\Users\\phuyo\\OneDrive\\Adbul\\Abdul-5\\tarotcard\\love2.txt");
    string love;
    for(int i = 0; i < n + 1; i++){
        getline(source, love);
    }
    source.close();
    cout <<"ไพ่ที่คุณได้รับคือ : "<< cards[n] << endl << love;
}