#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream dest("feedback.txt");
    string text;
    int ans;
    cout << "มีข้อแนะนำหรือไม่?" << endl;
    cout << "[1]มี [2]ไม่มี" << endl;
    cout << "คุณ: " << endl;
    cin >> ans;
    if(ans == 1){
        cout << "ใส่ความคิดเห็นของคุณ" << endl;
        getline(cin,text);
        dest << text;
        cin.ignore(); 
        dest.close();
        cout << "ขอบคุณที่แสดงความคิดเห็นให้กับเรา";
    }/*if(ans =! 1||ans =! 2){
        cout << "ขอบคุณที่แสดงความคิดเห็นให้กับเรา";
    }else cout << "โปรดเลิอกแค่[1]หรีอ[2]เท่านั้น";*/


    return 0;
}