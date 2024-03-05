#include <iostream>
#include <vector>
#include <string>
using namespace std;

int choice;
int val;

struct Transaction {
    string description;
    double amount;
};

// ฟังก์ชันสำหรับเพิ่มรายการบัญชี ของ fangmoney โหมด2
void addTransaction(vector<Transaction>& transactions) {
    Transaction newTransaction;
    cout << "รายการ: ";
    getline(cin, newTransaction.description);
    cout << "จำนวนเงิน: ";
    cin >> newTransaction.amount;
    cin.ignore(); // เพื่อล้าง buffer หลังจากการรับค่าเลขที่ตัวอักษร
    transactions.push_back(newTransaction);

}

// ฟังก์ชันสำหรับคำนวณยอดคงเหลือ ของfangmoney โหมด2
double calculateBalance(const vector<Transaction>& transactions) {
    double balance = 0;
    for (const Transaction& transaction : transactions) {
        balance += transaction.amount;
    }
    return balance;
}

void money(){
    cout << "สวัสดี ค่ะ/ครับ ฉันคือ Financial Bot Advisor"<< endl;
    cout << "คุณต้องการให้ฉันช่วยอะไร" << endl <<"[1]แนะนำการออมเงิน [2]บันทึกรายรับ-รายจ่าย [3]วางแผนการลงทุน" << endl;
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
            cout << "การออมเงินเพื่อลดหนี้สิน" << endl << "1.ทำการวางแผนการเงิน เช่น การระบุรายได้และรายจ่ายทั้งหมด เพื่อให้คุณเข้าใจถึงสถานการณ์การเงินของคุณอย่างชัดเจน" << endl << "2.พยายามลดค่าใช้จ่ายให้มากที่สุดเท่าที่จะทำได้" << endl << 
            "3.เปิดบัญชีออมเงินแยกไว้เพื่อใช้สำหรับการออมเงินเพื่อลดหนี้สิน" << endl << "4.ใช้เงินที่ออมมาเพื่อชำระหนี้สิน ในทางอย่างยิ่ง ชำระหนี้ที่มีดอกเบี้ยสูงก่อนเป็นระยะเวลาเพื่อลดค่าใช้จ่ายดอกเบี้ยในระยะยาว" << endl <<
            "5.ควบคุมการใช้เงินโดยใช้งบประมาณ และกำหนดข้อจำกัดในการใช้จ่าย เพื่อช่วยลดโอกาสในการเพิ่มหนี้สินอีกครั้ง" << endl << "6.พยายามหาวิธีในการเพิ่มรายได้เสริม";
        }else if(choice == 6){
            cout << "การออมเงินเพื่อสร้างวินัย" << endl << "1.กำหนดเป้าหมายที่ต้องการบันทึกเงินไว้ให้ชัดเจน เช่น การเก็บเงินสำหรับการเดินทาง การซื้อบ้าน" << endl << "2.กำหนดจำนวนเงินที่ต้องการออมในแต่ละรอบหรือในช่วงเวลาที่กำหนดไว้ โดยควรจะเป็นจำนวนที่เป็นไปได้และเหมาะสมกับรายได้และค่าใช้จ่ายของเรา"
            << endl << "3.ใช้เครื่องมือหรือแอปพลิเคชันที่ช่วยในการติดตามและบันทึกรายรับรายจ่าย เพื่อทราบถึงแนวโน้มการใช้จ่ายเงินและใช้ข้อมูลเหล่านี้เพื่อปรับปรุงแผนการออมเงิน" << endl << "4.หลีกเลี่ยงการใช้เงินเพื่อความพอใจทันที" << endl << "5.ทำให้เป็นนิสัย";
        }else{ 
            cout << "กรุณากรอกให้ถูกต้อง...";
        }
    }else if(choice == 2){
        vector<Transaction> transactions;
        char choice;

        do {
        cout << "เลือกทำรายการ ([1]เพิ่มรายการ [2]ดูยอดคงเหลือ [3]ออกจากโปรแกรม): ";
        cin >> choice;
        cin.ignore(); // เพื่อล้าง buffer หลังจากการรับตัวอักษร
        choice = toupper(choice);

        switch (choice) {
            case '1':
                addTransaction(transactions);
                break;
            case '2':
                cout << "ยอดคงเหลือ: " << calculateBalance(transactions) << " บาท" << endl;
                break;
            case '3':
                cout << "ออกจากโปรแกรม";
                break;
            default:
                cout << "กรุณาเลือกทำรายการใหม่" << endl;
        }
    } while (choice != '3');

    }else if(choice == 3){
        cout << "กรอกจำนวนเงินทุนของคุณ" << endl ;
        cin>>val;
        if(val > 0 && val <= 50){
            cout << "www.UFACPE666.com" << endl << "แต่แนะนำ ****เก็บไว้กินข้าวเถอะครับอย่าหาลงทุนเลย****";
        }else if(val >= 51 && val <= 100){
            cout << "หวยครับลุ้นดี" << endl << "แต่แนะนำ ****เก็บไว้กินข้าวเถอะครับอย่าหาลงทุนเลย****";
        }else if(val >= 101 && val <= 1000){
            cout << "ที่ทางเราแนะนำมีดังนี้ ครับ/ค่ะ"<< endl << "[1]บัญชีออมทรัพย์ [2]กองทุนตลาดเงิน [3]หุ้นของบริษัท [4]การลงทุนในคริปโตคอร์เรนซี [5]การลงทุนในความรู้และการพัฒนาตัวเอง";
        }else if(val >= 1001 && val <= 5000){
            cout << "ที่ทางเราแนะนำมีดังนี้ ครับ/ค่ะ"<< endl << "[1]กองทุนรวม [2]การลงทุนในหุ้น [3]กองทุนดัชนี(ETFs) [4]การลงทุนในตลาดอสังหาริมทรัพย์ [5]การลงทุนในการศึกษาตัวเอง";
        }else if(val >= 5001 && val <=15000){
            cout << "ที่ทางเราแนะนำมีดังนี้ ครับ/ค่ะ"<< endl << "[1]กองทุนรวม [2]การลงทุนในหุ้น [3]กองทุนดัชนี(ETFs) [4]การลงทุนในตลาดอสังหาริมทรัพย์ [5]การลงทุนในการศึกษาตัวเอง [6]การลงทุนในธุรกิจเริ่มต้น";
        }else if(val >= 15001 && val <= 30000){
            cout << "ที่ทางเราแนะนำมีดังนี้ ครับ/ค่ะ"<< endl << "[1]กองทุนรวม [2]การลงทุนในหุ้น [3]กองทุนดัชนี(ETFs) [4]การลงทุนในตลาดอสังหาริมทรัพย์ [5]การลงทุนในการศึกษาตัวเอง [6]การลงทุนในธุรกิจเริ่มต้น";
        }else if (val >= 30001){
            cout << "ที่ทางเราแนะนำมีดังนี้ ครับ/ค่ะ"<< endl << "[1]กองทุนรวม [2]การลงทุนในหุ้น [3]กองทุนดัชนี(ETFs) [4]การลงทุนในตลาดอสังหาริมทรัพย์ [5]การลงทุนในการศึกษาตัวเอง [6]การลงทุนในธุรกิจเริ่มต้น";
        }
    }else{
        cout << "กรุณากรอกให้ถูกต้อง";
    }
    
}