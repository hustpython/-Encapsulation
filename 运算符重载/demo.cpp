# include <iostream>
# include "Coordinate.h"
using namespace std;

// ���������---һԪ���������
// ������Ҫ��:����Coordinate ������
//           ��Ա����:���캯��,getX,getY
//           ���ݳ�Ա:m_iX,m_iY
//      1.�������������(��Ա����,��Ԫ����)
//      2.++���������(ǰ��++,����++)
        //     ---��Ԫ���������
        // 3.+
        // 4.<<
        // 5.[]

 int main(void)
 {
     //Coordinate coor1(1,3);
     //cout << coor1.getX()<<","<< coor1.getY() << endl;
     //-coor1;//coor1.operator-();
     //++coor1;
     //cout << (coor1++).getX()<<",";
     //cout << (coor1++).getY() << endl;
     //cout << coor1.getX()<<","<< coor1.getY() << endl;
     Coordinate coor1(1,3);
     Coordinate coor2(2,4);
     Coordinate coor3(0,0);

     coor3 = coor1 + coor2 ;
     //cout << coor3.getX()<<","<< coor3.getY() << endl;
     cout << coor3[0] << endl;
     cout << coor3[1] << endl;

     return 0;
 }
