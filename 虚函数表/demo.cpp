# include <iostream>
# include <stdlib.h>
# include "Circle.h"
# include "Shape.h"
using namespace std;

// �麯����
//     Ҫ��
//        1.����Shape�࣬��Ա������calcArea()�����캯������������
//        2.����Circle��
//     ����˵��: 
//        1.�����С
//        2.�����ַ
//        3.�����Ա�ĵ�ַ
//        4.�麯����ָ��
int main(void)
{
    Shape shape;
    //1���ڴ浥Ԫ�궨�Լ��Ĵ���
    cout << sizeof(shape) << endl;

    //ǿ������ת��
    int *p = (int *) &shape;
    //cout << p << endl;
    cout << (unsigned int)(*p) << endl;
    Circle circle(100);
    int *q = (int*) &circle;
    //cout << q << endl;
    cout << (unsigned int)(*q) << endl;
    q+=2;
    //q++;
    cout << (unsigned int)(*q) << endl;
    //cout << sizeof(circle) << endl;
    return 0;
}