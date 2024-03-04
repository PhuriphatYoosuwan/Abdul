#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

void luckynumber() {
  int ans;
  srand(time(0));
  cout<<"อยากได้เลขเด็ดหวยไทยหรือหวยมาเลเซีย"<<endl;
  cout<<"[1]หวยไทย [2]หวยมาเลเซีย"<<endl;
  cin>>ans;
  if(ans==1){
    cout<<"คุณอยากได้เลขที่หลัก"<<endl;
    cout<<"[1] 2 หลักก็พอ ไม่โลภ"<<endl<<"[2] 3 หลักไปเลยหวังมีเงินใช้ทั้งเดือน"<<endl<<"[3] 6 หลักสิวะ รางวัลที่1 เอาให้รวยกันไปเลย"<<endl;
    cin>>ans;
    
    if(ans==1){
        int random_number = rand() % 90 + 10;
        cout << "เลขเด็ด 2 หลักของคุณคือ :" << random_number << endl;
        
    }
    else if(ans==2){
        int random_number = rand() % 900 + 100;
        cout << "เลขเด็ด 3 หลักของคุณคือ :" << random_number << endl;
    }
    else if(ans==3){
        int random_number = rand() % 900000 + 100000;
        cout << "เลขเด็ด 6 หลักของคุณคือ :" << random_number << endl;
    }
  }
  else if(ans==2){
    cout<<"อยากได้รางวัลใหญ่ หวังผลยาก หรือรางวัลเล็กแต่หวังผลได้"<<endl;
    cout<<"[1] รางวัลใหญ่เบิ้มๆ [2] รางวัลเล็กพอ เดี๋ยวรวย"<<endl;
    cin>>ans;
    
        if(ans==1||ans==2){
            int random_number = rand() % 9000 + 1000;
            cout << "เลขเด็ดมาเลย์ของคุณคือ :" << random_number << endl;
        }
  }
  cout << "การการลงทุนมีความเสี่ยง โปรดอย่าซื้อหวยจนไม่มีเงินกินข้าว ขอให้ท่านโชคดี"<<endl;
  

  
}