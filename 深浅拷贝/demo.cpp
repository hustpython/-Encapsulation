# include <iostream>
# include "Array.h"
using namespace std;

/*
  ʾ������:
  1.����һ��Array�࣬���ݳ�ԱΪm_iCount,
  ����Ա�����������ݷ�װ���������캯����
  ���������캯��������������ͨ����ʾ�����
  ��ǳ����ԭ��
 ��.�������ݳ�Աm_pArr,������m_pArr��ַ
  ���鿴������ͬʱ������캯�����������캯��
  ����������������������ԭ��ͱ�Ҫ�ԡ�
*/
int main(void)
{
    Array arr1(5);
    //arr1.setCount(5);
    Array arr2(arr1);
    //arr1.printAddr();
    //arr2.printAddr();
    arr1.printArr();
    arr2.printArr();
    //cout << "arr2.m_iCount"<<","<<arr2.getCount()<< endl;
    return 0;
}