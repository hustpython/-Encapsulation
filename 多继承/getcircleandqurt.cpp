# include<iostream>
# include <cmath>
using namespace std;

const double PI = 3.1415926;
class base 
{
public: 
  virtual void display() = 0;  
};
class circle:public base 
{
protected: 
  double r;
public: 
  circle(double x){r = x;}
  void display()
  {
      cout << "Բ�����:" << r*r * PI << endl;
      cout << "Բ���ܳ�:" << PI * r * 2 << endl;
  }
};
class incircle:public circle 
{
   double a ;
public: 
   incircle(double x = 0):circle(x){}
   void display()
   {
       a = sqrt(r);
       cout <<"�ڽ����������" << a * a << endl;
       cout << "�ڽ��������ܳ�" << 4 * a << endl;
   }
};
class outcircle:public circle 
{
public: 
   outcircle(double x=0):circle(x){}
   void display()
   {
       cout << "�������������:" << 4 * r * r << endl;
       cout << "�����������ܳ�:" << 8 * r << endl;
   }
};

void fun(base *ptr)
{
    ptr -> display();
}
int main()
{
    base *p;
    circle b1(10);
    incircle d1(9);
    outcircle e1(10);

    p = &b1;
    fun(p);
    p = &d1;
    fun(p);
    p = &e1;
    fun(p);
    return 0;
}