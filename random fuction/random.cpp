#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;

string cards[] = {"The Fool", "The Magician", "The High Priestess", "The Empress", "The Emperor", "The Hierophant","The Lovers", "The Chariot", "Strength", " The Hermit", " The Wheel of Fortune",
                    "Justice","The Hanged Man","Death","Temperance","The Devil","The Tower","The Star","The Moon","The Sun","Judgement","The World"};

int randomcards(void){
    return rand()%22;
    }

int main(){
    srand(time(0));
    ifstream source;
    source.open("love1.txt");
    string love;
    getline(source,love);
    source.close();
    cout << cards[randomcards()] << endl << love;
return 0;
}