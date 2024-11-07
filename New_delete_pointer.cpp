#include <iostream>
using namespace std;

/* เมื่อใช้คำสั่ง new ระบบจะจัดสรรหน่วยความจำจาก heap 
(หน่วยความจำที่สามารถขยายและลดได้ระหว่างการทำงานของโปรแกรม) 
เพื่อให้โปรแกรมสามารถใช้งานได้ */

int main() {

    //รูปแบบการใช้งาน
    int* ptr = new int;  // จัดสรรหน่วยความจำสำหรับตัวแปร int
    *ptr = 10;          // กำหนดค่า 10 ให้กับหน่วยความจำที่ ptr ชี้ไป
    delete ptr;         // คืนหน่วยความจำเมื่อไม่ใช้งานแล้ว

    int* arr = new int[5];  // จัดสรรอาเรย์ขนาด 5 ช่อง
    for (int i = 0; i < 5; i++) {
        arr[i] = i;  // กำหนดค่าให้แต่ละช่องในอาเรย์
    }
    delete[] arr;  // คืนหน่วยความจำเมื่อไม่ใช้งานแล้ว


    return 0;
}