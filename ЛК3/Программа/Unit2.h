//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <vcl.h>
//---------------------------------------------------------------------------

template <class T>
struct elem
  {
    T a;                 //�����������
    int x;               //������� x
    int e;              //������� e^x
    struct elem*next;
  };
template <class T>
class polynom
{
  elem<T>*p;
  public:
  polynom();                   //�����������
  polynom(const polynom&a);    //����������� �����������
  void clear();                //������� ����������
  elem<T>*get();               //���������� ������ �� ���������
  void add(T,int,int);         //���������� ����������
  String getpoly();            //���������� ������ - ���������
  polynom operator+(polynom&); //��������
  polynom operator*(polynom&); //���������
  polynom operator*(T);        //��������� �� �����
  int operator>(polynom&);     //���������(������)
  int operator<(polynom&);     //���������(������)
};
template <class T>
void delenie(polynom<T>&,polynom<T>&,polynom<T>&,polynom<T>&); //�������
#endif
