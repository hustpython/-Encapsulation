# include <iostream>
# include <stdlib.h>
# include "Time.h"
# include "Match.h"
using namespace std;

// ��Ԫ����
//   1.��Ԫȫ�ֺ���
//   2.��Ԫ��Ա����
//ȫ�ֺ���������
//void printTime(Time &t);

int main()
{
    Time t(6,34,25);
    Match m;
    m.printTime(t);
    //printTime(t);
    return 0;
}
//ȫ�ֺ����Ķ���
// void printTime(Time &t)
// {
//     cout << t.m_iHour <<":"<< t.m_iMinute <<":"<<t.m_iSecond << endl;
// }