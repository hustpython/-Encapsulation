class Coordinate
{
public:
  //��������
  Coordinate(int x,int y);//���캯��
  ~Coordinate();//��������
  void setX(int x);//��װ����
  void setY(int y);
  int getX();
  int getY();
private:
  //��������
  int m_iX;//���ݳ�Ա
  int m_iY;
};