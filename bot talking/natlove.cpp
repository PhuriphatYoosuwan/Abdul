#include <iostream>

using namespace std;

    int main(){
    int ans;
    cout << "คุณอยากจะปรึกษาเราเกี่ยวกับเรื่องความรักใช่หรือไม่" << endl;
    cout << "[1]ใช่ [2]ไม่ใช่" << endl;
    cout << "คุณ: ";
    cin >> ans;
    if(ans == 1){

        cout << "ก่อนอื่นเราจะอยากขอทราบสถานะของคุณก่อนว่าคุณโสดหรือมีแฟนแล้ว ?" << endl;
        cout << "[1]โสด [2]มีแฟนแล้ว" << endl;
        cout << "คุณ: ";
        cin >> ans;
        if(ans == 1){
            cout << "หากว่าคุณยังโสดอยู่แล้วคุณมีคนในใจอยู่แล้วหรือยัง" << endl;
            cout << "[1]มีคนที่ชอบแล้ว [2]ยังไม่มีคนที่ชอบ";
            cout << "คุณ:";
            cin >>ans;
            if (ans==1)
            {
                cout << "";
                cout << "";
                cout << "";
                cin >> ans;
                if (ans==1)
                {
                    /* code */
                }else if (ans==2)
                {
                    /* code */
                }else if (ans==3)
                {
                    cout<<"";
                    cout<<"";
                    cin>>ans;
                    if (ans==1)
                    {
                        /* code */
                    }else if (ans==2)
                    {
                        /* code */
                    }else{
                       
                       cout<<"";
                       cin

                    }
                    
                }else{


                }
                
            }else if (ans==2)
            {
                cout<<"";
                cout<<"";
            }else{
                cout <<"";
            }
            
            
        }else if(ans == 2){
            cout << "" << endl;
        }else{
            cout<<"กรุณาเลือกคำตอบตามที่ทางเรากำหนด";
        }
        
    }else if (ans==2)
    {
        cout<<"เยี่ยม";

    }else{
        cout<<"กรุณาเลือกคำตอบตามที่ทางเรากำหนด";
    }
    }