#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
   //Teacher();//�����޲ι��캯��������ͬ��
   Teacher(string name = "Jim",int age = 10,int m =100);//�вι��캯��
   //�����������庯��
   Teacher(const Teacher &tea);
   //������������
   ~Teacher();
   void setName(string name);//��������
   string getName();
   void setAge(int age);
   int getAge();
   int getMax();
private:
   //���ݳ�Ա
   string m_strName;
   int m_iAge; 
   // const int m_iMax; 
   int m_iMax;         
};