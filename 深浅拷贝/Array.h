class Array
{
public:
  //���ֺ���������
  //���캯��
  Array(int count);
  //�������캯��
  Array(const Array &arr);
  //��������
  ~Array();
  //��װ����
  void setCount(int count);
  int getCount();
  void printAddr();
  void printArr();
private:
  int m_iCount;
  int *m_pArr;
};