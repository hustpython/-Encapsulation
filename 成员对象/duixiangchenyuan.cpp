# include <iostream>
# include "Line.h"
/************************/
/*�������Ա
Ҫ��:
    ����������:
       ������:Coordinate
       ���ݳ�Ա:������m_iX,������m_iY
       ��Ա����:���캯������������,���ݷ�װ����
       �߶���:Line
       ���ݳ�Ա:��A m_coorA, ��B m_coorB
       ��Ա����:���캯��,��������,���ݷ�װ����,��Ϣ��ӡ����
*/
/***********************/

int main(void)
{
   //��ʾ����Line������Coordinateʵ����˳�������˳��
   Line *p = new Line(1,2,3,4);
   p ->printInfo();
   delete p;
   p = NULL;
   return 0;
}