# include <iostream>
# include "Line.h"
using namespace std;
/*
�����Աָ��
Ҫ��
��������������:
      �����ࣺCoordinate
      ���ݳ�Ա��m_iX,m_iY
      ��Ա����:���캯������������,���ݷ�װ����
      �߶���:Line
      ���ݳ�Ա:m_CoorA,m_CoorB
      ��Ա����:���캯������������,��Ϣ��ӡ����

*/
int main(void)
{
    Line *p = new Line(1,2,3,4);
    p -> printInfo();
    delete p;
    p = NULL;
    //64λ���뻷��������ָ���СΪ����32λΪ4)
    //Line �а����ˣ���ָ��:8���� = 16
    cout << sizeof(p) << endl;
    cout << sizeof(Line) << endl;
    return 0;
}