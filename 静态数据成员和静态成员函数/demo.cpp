# include "Tank.h"
# include <stdlib.h>
# include <iostream>
using namespace std ;

// ��̬���ݳ�Ա�뾲̬��Ա����
//    Ҫ��:����Tank��,���ݳ�Ա:̹�˱��:m_cCode,̹������:s_iCount
//                   ��Ա����:���캯��,��������,fire,getCount

int main(void)
{
    //cout << Tank::getCount() << endl;
    //Tank t1('A');
    Tank *p = new Tank('A');
    cout << Tank::getCount() << endl;
    Tank *q = new Tank('B');
    cout << q-> getCount() << endl;

    delete p;
    delete q;
    p = NULL;
    q = NULL;
    cout << Tank::getCount() << endl;
    return 0;
}