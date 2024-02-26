#include<iostream>
#include<fstream>
#include<string>
#include<locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "Thai");
    wofstream dest("feedback.txt", ios::app | ios::binary);
    wstring text;
    int ans;
    wcout << L"มีข้อแนะนำหรือไม่?" << endl;
    wcout << L"[1]มี [2]ไม่มี" << endl;
    wcout << L"คุณ: ";
    wcin >> ans;
    wcin.ignore();
    if(ans == 1){
        wcout << L"ใส่ความคิดเห็นของคุณ" << endl;
        getline(wcin,text);
        dest << text << endl;
        dest.close();
        wcout << L"ขอบคุณที่แสดงความคิดเห็นให้กับเรา";
    }

    return 0;
}