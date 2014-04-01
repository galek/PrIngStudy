//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------

#pragma package(smart_init)
Item::Item()
{
 char tmp1[400];
 char tmp2[11];
 strcmp(info,tmp1);
 strcmp(data,tmp2);
 next=NULL ;
}
Item::Item(Item& i)
{
 strcpy(info,i.info);
 strcpy(data,i.data);
 next=NULL ;
}
//////////////////////////////////////////////////////
Vot::Vot()
{
 n=0;
 head=NULL;
}
Item* Vot::operator [] (int i)
{
 if(i>=n)
 {
  return NULL;
 }
 else
 {
  int i1;
  Item* c = head;
  for(i1=0;i1<i;c=c->next,i1++)
  {
  }
  return c;
 }
}
void Vot::v()
{
  TDateTime dtD1, dtD2;
  Item* p = head;
  while (p->next!=NULL)
  {dtD1 = StrToDate(p->data);
   dtD2 = StrToDate(p->next->data);
   if (dtD2 < dtD1)
    {strcpy(p->next->data, DateToStr(dtD1).c_str());
     strcpy(p->data,DateToStr(dtD2).c_str());
     Item* i;
     strcpy(i->info,p->next->info);
     strcpy(p->next->info,p->info);
     strcpy(p->info,i->info);
     }
  p = p->next;
  }
}

Vot Vot::operator += (Item newi)
{
 int i=0;
 int k;
 Item* addi = new  Item(newi);
 for(i=0;i<n;i++)
 {
  if(strcmp(addi->data,(*this)[i]->data)<0)
  {
   break;
  }
 }
 if(i==0)
 {
  if(n>0)
  {
   Item* second = head->next;
   Item* tmp = new Item(*head);
   head = addi;
   head->next = tmp;
   tmp->next = second;
  }
  else
  {
   head = addi;
  }
 }
 else
 {
  i--;
  addi->next = (*this)[i+1];
  (*this)[i]->next = addi;
 }
 n++;
 v();
 return *this;
}

Vot Vot::operator - ()
{
if(n>0)
 {
  head = head->next;
  n--;
 }
}
void Vot::edit(char* info1, char* data1, int nn)
{
 if(nn<n)
 {
  Item* c = new Item();
  strcpy(c->info,info1);
  strcpy(c->data,data1);
  del(nn);
  *(this)+=(*c);
 }
}
//--------------------------------------------
void Vot::set(char* info1, char* data1, int nn)
{
 if(nn<n)
 {
  Item* c = (*this)[nn];
  strcpy(c->info,info1);
  strcpy(c->data,data1);
 }
}
void Vot::get(char* info1, char* data1, int nn)
{
 if(nn<n)
 {
  Item* c = (*this)[nn];
  strcpy(info1,c->info);
  strcpy(data1,c->data);
 }
}    
void Vot::del(int nn)
{
 if(nn<n)
 {
  if(nn==0)
  {
   head = head->next;
  }
  else
  {
   Item* c = (*this)[nn-1];
   c->next = c->next->next;
  }
 }
 n--;
}
int Vot::num()
{
 return n;
}



