//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <vcl.h>
//---------------------------------------------------------------------------

template <class T>
struct elem
  {
    T a;                 //Коэффициент
    int x;               //Степень x
    int e;              //Степень e^x
    struct elem*next;
  };
template <class T>
class polynom
{
  elem<T>*p;
  public:
  polynom();                   //Конструктор
  polynom(const polynom&a);    //Конструктор копирования
  void clear();                //Очистка многочлена
  elem<T>*get();               //Возвращает ссылку на структуру
  void add(T,int,int);         //Добавление слагаемого
  String getpoly();            //Возвращает строку - многочлен
  polynom operator+(polynom&); //Сложение
  polynom operator*(polynom&); //Умножение
  polynom operator*(T);        //Умножение на число
  int operator>(polynom&);     //Сравнение(больше)
  int operator<(polynom&);     //Сравнение(меньше)
};
template <class T>
void delenie(polynom<T>&,polynom<T>&,polynom<T>&,polynom<T>&); //Деление
#endif
