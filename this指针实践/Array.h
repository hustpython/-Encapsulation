class Array 
{
public:
  Array(int len);
  ~Array();
  //void setLen(int len);
  Array* setLen(int len);
  int getLen();
  //Array&����
  Array* printInfo();
private:
  //int m_iLen;
  int len;
};