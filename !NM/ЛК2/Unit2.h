//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <string.h>
//---------------------------------------------------------------------------
#endif

class Item  //класс задания
{
public:
 char info[400];    //задание
 char data[11];     //сроки
 Item* next;        //указатель на следующий
 Item();
 Item(Item&);
} ;
class Vot        //класс календаря
{
 Item* head;        //начало списка
 int n;             //число записей в списке
public:
 Vot();
 Item* operator [] (int);
 Vot operator += (Item);
 Vot operator - ();
 void edit(char*, char*, int);   //функция переноса сроков
 void v();
//--------------------------
 void set(char*, char*, int);
 void get(char*, char*, int);
 void del(int);
 int num();
};
