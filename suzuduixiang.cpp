# include <iostream>
# include <string>
# include "Coordinate.h"
using namespace std;
/**********************************/
/*
��������
Ҫ��
    ����Coordinate��
    ���ݳ�Ա:m_iX��m_iY
    �ֱ��ջ�Ͷ���ʵ��������Ϊ���Ķ�������
    �������е�Ԫ�طֱ�ֵ
    ������������
*/
/***********************************/
int main(void)
{
    //ջ��ʵ����һ������
    Coordinate coord[3];
    coord[0].m_iX = 3;
    coord[0].m_iY = 5;
    //����ʵ����һ������
    Coordinate *p = new Coordinate[3];
    //p[0] = p;p[1] = p+1;p[2] = p+2;
    //p[0].m_iY = 20; p->m_iY = 20;
    p ->m_iX = 7;
    p[0].m_iY = 9;

    p++; // p=p+1 p+=1;��һ��ָ��
    p ->m_iX = 11;
    p[0].m_iY = 13;//��ʱ�ǵڶ���Ԫ��
    
    p[1].m_iX = 15;//��ʱ�ǵ�����Ԫ��
    p++;           //��ʱ�ǵ�����Ԫ��
    p ->m_iY = 17;

    for(int i = 0;i<3;i++)
    {
        cout << "coor_x" << coord[i].m_iX << endl;
        cout << "coor_y" << coord[i].m_iY << endl;
    }
    for(int j = 0;j<3;j++)
    {
        cout << "p_x" <<p->m_iX<<endl;
        cout << "p_y" <<p->m_iY<<endl;
        p--;
    }
    p++;
    delete []p;
    p = NULL;
    return 0;

}