#include <iostream>

using namespace std;

int main () {

        char name[] = {"Phonphimon"};
        int nameLength = 10;
        cout << name;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้

       char kwang [10];
       kwang [0] = name[10];
       kwang [1] = name[9];
       kwang [2] = name[8];
       kwang [3] = name[7];
       kwang [4] = name[6];
       kwang [5] = name[5];
       kwang [6] = name[4];
       kwang [7] = name[3];
       kwang [8] = name[2];
       kwang [9] = name[1];
       kwang[10]= '\0';

       cout << kwang;

       kwang [0] = kwang [0] +1;
       kwang [1] = kwang [1] +1;
       kwang [2] = kwang [2] +1;
       kwang [3] = kwang [3] +1;
       kwang [4] = kwang [4] +1;
       kwang [5] = kwang [5] +1;
       kwang [6] = kwang [6] +1;
       kwang [7] = kwang [7] +1;
       kwang [8] = kwang [8] +1;
       kwang [9] = kwang [9] +1;
       kwang [10] = '\0';

       cout << kwang endl;




        return 0;
}
