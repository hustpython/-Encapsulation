#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
  // ��ʼ���б����ڹ��캯��ִ��
  //��ʼ���б����ͬʱ��ʼ��������ݳ�Ա
  Student():m_strName("Jim"),m_iAge(10){}
private:
  string m_strName;
  int m_iAge;
};

class Circle
{
public:
  Circle():m_dPi(3.14){}
private:
  const double m_dPi;
};