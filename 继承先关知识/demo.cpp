# include <iostream>
# include "Worker.h"
using namespace std;
// �̳У�
//    Ҫ��
//      1.����Person�࣬Ҫ����m_strName��m_iAge�������ݳ�Ա�����캯��,eat����
//      2.����Worker�࣬Ҫ���м̳�Person�࣬�������ݳ�Աm_iSalary�����캯��������������work����
int main(void)
{
    Worker *p = new Worker();
    //���ʸ����Ա
    p -> m_strName = "Jim";
    p -> m_iAge = 10;
    //���ʸ����Ա����
    p -> eat();
    //���������Ա
    p -> m_iSalary = 1000;
    //���������Ա����
    p -> work();
    delete p;
    p = NULL;
    return 0;
}