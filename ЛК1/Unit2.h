//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#endif
 struct Node
{
int info;
Node *next;
};
class Dec
{
 Node *an;
 Node *bn;

public:
 Dec();
 ~Dec();
 void AddElB(int a);
 void AddElE(int a);
 void DelElB();
 void DelElE();
 short int Sravnenie(const Dec & x);
 void operator = (const Dec & x);
 void Mas (int x[10]);
};