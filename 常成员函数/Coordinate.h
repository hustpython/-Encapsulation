class Coordinate
{
public:
  //��������
  Coordinate(int x,int y);//���캯��
  ~Coordinate();//��������
  void setX(int x);//��װ����
  void setY(int y);
  int getX() const;
  int getY() const;
private:
  //��������
  int m_iX;//���ݳ�Ա
  int m_iY;
};