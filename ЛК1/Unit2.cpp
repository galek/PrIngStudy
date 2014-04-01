//---------------------------------------------------------------------------

 #include <vcl.h>
#pragma hdrstop

#include "Unit2.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

Dec:: Dec()
{
 an = NULL;
 bn = NULL;
}
Dec:: ~Dec()
 {
   bn = an;
   while (an!=NULL)
    {
     an = an->next;
     delete bn;
     bn = an;
    }
  }

void Dec:: AddElB(int a)
{
 if (an==NULL)
  {
   an = new Node;
   bn = an;
   an->info = a;
   an->next=NULL;
  }
 else
  {
   Node *p;
   p = new Node;
   p->info = a;
   p->next = an;
   an = p;
  }
}

void Dec:: AddElE(int a)
{
 if (bn==NULL)
  {
   bn = new Node;
   an = bn;
   bn->info = a;
   bn->next=NULL;
  }
 else
  {
   bn->next = new Node;
   bn = bn->next;
   bn->info = a;
   bn->next=NULL;
  }
}

void Dec:: DelElB()
{
 if (an==NULL) return;
 Node *p;
 p = an;
 an = an->next;
 delete p;
 if (an==NULL) bn=NULL;
}

void Dec:: DelElE()
{
 if (an==NULL) return;
 if (an==bn)
  {
   delete an;
   an = NULL;
   bn = NULL;
  }
 else
  {
   Node *p;
   p = an;
   while (p->next!=bn)
    p = p->next;
   delete bn;
   bn = p;
   bn->next = NULL;
  }
}

short int Dec:: Sravnenie(const Dec & x)
{
 Node *p;
 Node *q;
 p = an;
 q = x.an;
 while (p!=NULL && q!=NULL && p->info==q->info)
  {
   p = p->next;
   q = q->next;
  }
 if (p==NULL && q==NULL)
  return 1;
 else
  return 0;
}

void Dec:: operator = (const Dec & x)
{
 bn = an;
 while (an!=NULL)
  {
   an = an->next;
   delete bn;
   bn = an;
   bn=NULL;
  }
 Node *p;
 p = x.an;
 while (p!=NULL)
  {
   AddElE(p->info);
   p = p->next;
  }
}

void Dec:: Mas (int x[10])
{
 int i = 0;
 Node *p; p = an;
 while (p!=NULL)
 {
  x[i] = p->info;
  p = p->next;
  i++;
 }
}


