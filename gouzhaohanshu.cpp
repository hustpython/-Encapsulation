# include <iostream>
# include <string>
# include <stdlib.h>
# include "Teacher.h"
using namespace std;
/*
*��Teacher��
*���Զ����в�Ĭ�Ϲ��캯��
*��ʹ�ó�ʼ���б��ʼ������
*�����ݣ�
*  ��������
*     ����
*  ��Ա����:
*     ���ݳ�Ա�ķ�װ����
*  ��չ:
*     ������Դ����ѧ���ĸ�������Ϊ����
*/
int main(void)
{
  Teacher t1("Merry",12,150);
  cout << t1.getName() <<" "<<t1.getAge()<<" "<< t1.getMax()<< endl;
}