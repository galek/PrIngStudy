//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <string.h>
//---------------------------------------------------------------------------
#endif

class Item  //����� �������
{
public:
 char info[400];    //�������
 char data[11];     //�����
 Item* next;        //��������� �� ���������
 Item();
 Item(Item&);
} ;
class Vot        //����� ���������
{
 Item* head;        //������ ������
 int n;             //����� ������� � ������
public:
 Vot();
 Item* operator [] (int);
 Vot operator += (Item);
 Vot operator - ();
 void edit(char*, char*, int);   //������� �������� ������
 void v();
//--------------------------
 void set(char*, char*, int);
 void get(char*, char*, int);
 void del(int);
 int num();
};
