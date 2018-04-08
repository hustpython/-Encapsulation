# include <iostream>
# include <typeinfo>
# include "Bird.h"
# include "Plane.h"

using namespace std;

// RTTI:
//   1.Flyable�࣬��Ա����:takeoff,land
//   2.Plane��,��Ա����:takeoff,land,carry
//   3.Bird�࣬��Ա����:takeoff,land,foraging
//   4.ȫ�ֺ���doSomething(Flyable *obj)

void doSomething(Flyable *obj)
{
    cout << typeid(*obj).name() << endl;
    obj -> takeoff();
    if(typeid(*obj) == typeid(Bird))
    {
        Bird *bird = dynamic_cast<Bird *>(obj);
        bird -> foraging();
    }
    if(typeid(*obj) == typeid(Plane))
    {
        Plane *plane = dynamic_cast<Plane *>(obj);
        plane -> carry();
    }
    obj -> land();
}

int main(void)
{
    //Bird b;
    //Plane b;
    //doSomething(&b);
    //double t = 0;
    Flyable *p = new Bird();
    cout << typeid(p).name() << endl;
    cout << typeid(*p).name() << endl;
    return 0;
}