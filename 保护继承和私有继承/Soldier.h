# include "Person.h"
//���м̳�
//class Soldier:public Person
class Soldier:protected Person
{
public: 
  Soldier();
  void work();
protected: 
  int m_iAge;
};