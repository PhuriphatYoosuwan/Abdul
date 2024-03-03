#include <iostream>
using namespace std;

int choice;
int val;

void money(){
    cout << "สวัสดี ค่ะ/ครับ ฉันคือ Financial Bot Advisor"<< endl;
    cout << "คุณต้องการให้ฉันช่วยอะไร" << endl <<"[1]แนะนำการออมเงิน [2]วิเคราห์รายรับ-รายจ่าย [3]วางแผนการลงทุน" << endl;
    cin >> choice;
    if(choice == 1){
        cout << "คุณออมเงินเพื่ออะไร" << endl <<"[1]เพื่อซื้อของที่อยากได้ [2]เพื่อลงทุน [3]เงินสำรอง [4]เตรียมเพื่อการเกษียณ [5]ลดหนี้สิน [6]สร้างวินัย" << endl;
        cin >> choice;
        if(choice == 1){
            cout << "การออมเงินเพื่อซื้อของที่อยากได้" << endl << "1.ต้องมีเป้าหมายที่ชัดเจน" << endl << "2.เมื่อทราบเป้าหมายแล้วต้องนำมาวิเคราห์กับรายได้เพื่อคำนวนระยะเวลาและจำนวนเงินที่จะใช้ออมในการออมแต่ละครั้ง"<< endl
            <<"3.วางแผนการออมและปรับปรุงตามสถานการณ์ทางการเงิน" << endl << "4.ลงมือทำโลดไม่เริ่มทำก็ไม่ถึงเป้าหมายสักที";
        }else if(choice == 2){
            cout << "การออมเงินเพื่อลงทุน"<< endl << "1.ต้องมีเป้าหมายที่ชัดเจน" << endl << "2.ประเมินความเสี่ยงทางการลงทุน"<< endl
            <<"3.ศึกษาการลงทุนที่คุณสนใจ" << endl << "4.วางแผนการลงทุนและวางแผนการออมใหสอดคล้องกัน" << endl << "5.ลงมือทำเลยครับ" << endl << "**** ทุกการลงทุนมีความเสี่ยงจำไว้ให้ดี ****";
        }else if(choice == 3){
            cout << "การออมเงินเพื่อเป็นเงินสำรอง" << endl << "1.กำหนดจำนวนเงินที่เป็นเป้าหมายในการออม" << endl << "2.คิดกับรายได้ของคุณว่าคุณสามารถออมได้เท่าไหร่ทุกเดือน" 
            << endl << "3.เลือกบัญชีออมที่ให้ดอกเบี้ยสูงพร้อมทั้งสามารถถอนเงินได้ตามต้องการ" << endl << "4.พยายามใช้เงินสำรองเฉพาะในกรณีฉุกเฉินจริงๆ เท่านั้น" << endl << "5.ปรับเป้าหมายเงินสำรองขึ้นหรือลงตามการเปลี่ยนแปลงในชีวิตของคุณ";
        }else if(choice == 4){
            cout << "การออมเงินเพื่อเตรียมการเกษียณ" << endl << "1.กำหนดเป้าหมายที่ชัดเจนว่าคุณต้องการมีรายได้เท่าไหร่ทุกเดือนหลังจากการเกษียณ" << endl << "2.ประมาณค่าใช้จ่ายที่คาดว่าคุณจะต้องจ่ายในชีวิตหลังการเกษียณ"
            << endl << "3.เลือกทางเลือกการลงทุนที่มีอัตราดอกเบี้ยสูงเพื่อเพิ่มมูลค่าเงินของคุณ" << endl << "4.ทำความเข้าใจเกี่ยวกับภาษีที่อาจมีผลต่อรายได้จากการเกษียณ" << endl << "5.ลดหนี้" << endl << "6.หารายได้เสริม";
        }else if(choice == 5){
            cout << "การออมเงินเพื่อลดหนี้สิน...";
        }else if(choice == 6){
            cout << "การออมเงินเพื่อสร้างวินัย...";
        }else{
            cout << "กรุณากรอกให้ถูกต้อง...";
        }
    }else if(choice == 2){
        cout << "B";
    }else if(choice == 3){
        cout << "เลือกช่องทางการลงทุนที่คุณกำลังสนใจ" << endl << "[1]บัญชีออมทรัพย์ [2]กองทุนรวม [3]หุ้น [4]หลักทรัพย์ระหว่างประเทศ(ETFs) [5]การลงทุนในตลาดอสังหาริมทรัพย์ [6]การซื้อสินทรัพย์เพื่อการสะสมทรัพย์สิน";
        cin>>val;
    }else{
        cout << "กรุณากรอกให้ถูกต้อง";
    }
}