# include "Person.h"
//���м̳�
class Worker:public Person 
{
public:
  Worker();
  ~Worker();
  void work();
  int m_iSalary;
};