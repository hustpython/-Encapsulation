# include <iostream>
# include "stdlib.h"
# include "FighterPlane.h"
using namespace std;

// �ӿ���
//    1.Flyable��,��Ա����:takeoff,land 
//    2.Plane��,��Ա����:���캯��,takeoff,land,printCode,
//              ���ݳ�Ա:m_strName
//    3.FighterPlane��,��Ա����:���캯����takeoff,land 
//    4.ȫ�ֺ���flyMatch(Flyable*f1,Flyable*f2)
// void flyMatch(Flyable *f1,Flyable *f2)
// {
//     f1 -> takeoff();
//     f1 -> land();
//     f2 -> takeoff();
//     f2 -> land();
// }
void flyMatch(Plane *f1,Plane *f2)
{
    f1 -> printCode();
    f2 -> printCode();
}

int main(void)
{
    FighterPlane p1("001");
    FighterPlane p2("002");
    //p1.printCode();
    //p2.printCode();

    flyMatch(&p1,&p2);

    return 0;
}