# include <iostream>
# include <stdlib.h>
# include "Soldier.h"

void test1(Person p)
{
    p.play();
}
void test2(Person &p)
{
    p.play();
}
void test3(Person *p)
{
    p->play();
}

int main(void)
{
    //Soldier soldier;

    //Person p = soldier;
    //Person p;
    //Person *p = &soldier;
    //p = soldier;
    // Person *p = new Soldier;
    // p -> play();
    // //p -> work();ͨ�����ඨ��ı�����ָ�벻�ܵ�������ĳ�Ա����
    // //p.play();
    // delete p;
    // p = NULL;
    ////////////////////////
    Person p;
    Soldier s;
    test1(p);
    test1(s);
    //����û����ʱ����
    // test2(p);
    // test2(s);
    //test3(&p);
    //test3(&s);
    return 0;
}
