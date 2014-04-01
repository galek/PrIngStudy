//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit2.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <io.h>
#include <math>
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
template <class T>
polynom<T>::polynom()
{
  p=NULL;
}
template <class T>
polynom<T>::polynom(const polynom&abc)
{
  clear();
  elem<T>*buf;
  buf=abc.p;
  while (buf)
  {
    add(buf->a,buf->x,buf->e);
    buf=buf->next;
  }
}

template <class T>
void polynom<T>::add(T an,int xn,int en)
{
  int key=0;
  elem<T>*buf=new elem<T>;
  elem<T>*buf2;
  if (an!=0)
  {
    buf->a=an;
    buf->x=xn;
    buf->e=en;
    if (!p)
    {
      p=buf;
      p->next=NULL;
    }
    else
    {
      buf2=p;
      while(buf2)
      {
        if((buf2->x==xn)&&(buf2->e==en))
        {
          buf2->a+=an;
          key=1;
        }
        buf2=buf2->next;
      }
      if(!key)
      {
        buf2=new elem<T>;
        buf2->next=p;
        while (buf2->next&&!key)
        {
          if (en>(buf2->next->e))
            if(buf2->next==p)
            {
              buf->next=p;
              p=buf;
              key=1;
            }
            else
            {
              buf->next=buf2->next;
              buf2->next=buf;
              key=1;
            }
          else
            if (en==(buf2->next->e))
              if (xn>(buf2->next->x))
                if(buf2->next==p)
                {
                  buf->next=p;
                  p=buf;
                  key=1;
                }
                else
                {
                  buf->next=buf2->next;
                  buf2->next=buf;
                  key=1;
                }
          buf2=buf2->next;
        }
      }
      if (!key)
      {
        buf->next=NULL;
        buf2->next=buf;
      }
    }
  }
}
template <class T>
String polynom<T>::getpoly()
{
  String text;
  char*text2;
  elem<T>*buf=new elem<T>;
  buf=p;
  int key=0;
  while (buf)
  {
    if (buf->a!=0)
    {
      if (((buf->a)>0)&&key) text+="+";
      if ((buf->a)<0) text+="-";
      text+=" ";
      if((fabs(buf->a)!=1)||((buf->x==0)&&(buf->e==0)))
        text+=FloatToStrF(fabs(buf->a), ffGeneral ,10, 2);
      if ((buf->x)!=0)
        if ((buf->x)==1) text+="x";
        else
          if(buf->e==0) text+="x^"+FloatToStr(buf->x);
          else text+="(x^"+FloatToStr(buf->x)+")";
      if ((buf->e)!=0)
        if ((buf->e)==1) text+="e^x";
        else text+="e^("+FloatToStr(buf->e)+"*x)";
      key=1;
      text+=" ";
    }
    buf=buf->next;
  }
  return(text);
}
template <class T>
elem<T>*polynom<T>::get()
{
  return(p);
}
template <class T>
void polynom<T>::clear()
{
  p=NULL;
}
template <class T>
polynom<T> polynom<T>::operator+(polynom&b)
{
  polynom*buf=new polynom;
  elem<T>*aa;
  aa=p;
  while(aa)
  {
    buf->add(aa->a,aa->x,aa->e);
    aa=aa->next;
  }
  aa=b.p;
  while(aa)
  {
    buf->add(aa->a,aa->x,aa->e);
    aa=aa->next;
  }
  return (*buf);
}
template <class T>
polynom<T> polynom<T>::operator*(polynom&b)
{
  elem<T>*aa;
  elem<T>*bb;
  polynom*buf=new polynom;
  aa=p;
  while (aa)
  {
    bb=b.get();
    while(bb)
    {
      buf->add(aa->a*bb->a,aa->x+bb->x,aa->e+bb->e);
      bb=bb->next;
    }
    aa=aa->next;
  }
  return (*buf);
}
template <class T>
polynom<T> polynom<T>::operator*(T b)
{
  polynom*buf=new polynom;
  elem<T>*aa;
  aa=p;
  while (aa)
  {
    buf->add((aa->a)*b,aa->x,aa->e);
    aa=aa->next;
  }
  return(*buf);
}
template <class T>
int polynom<T>::operator>(polynom&b)
{
  int key=2;
  elem<T>*aa;
  elem<T>*bb;
  aa=p;
  bb=b.p;
  while(aa&&bb&&(key==2))
  {
    if((aa->e)<(bb->e))
      if ((bb->a)>0) key=0;
      else key=1;
    else
      if((aa->e)>(bb->e))
        if ((aa->a)>0) key=1;
        else key =0;
      else
        if((aa->x)>(bb->x))
          if ((aa->a)>0) key=1;
          else key=0;
        else
          if((aa->x)<(bb->x))
            if ((bb->a)>0) key=0;
            else key=1;
          else
            if ((aa->a)>(bb->a)) key=1;
            else
              if ((aa->a)<(bb->a))key=0;
    aa=aa->next;
    bb=bb->next;
  }
  if(aa&&(key==2))
    if ((aa->a)>0) key=1;
    else key=0;
  if(bb&&(key==2))
    if ((bb->a)>0) key=0;
    else key=1;
  if(key==2)
    key=0;
  return(key);
}
template <class T>
int polynom<T>::operator<(polynom&b)
{
  int key=2;
  elem<T>*aa;
  elem<T>*bb;
  aa=p;
  bb=b.p;
  while(aa&&bb&&(key==2))
  {
    if((aa->e)<(bb->e))
      if ((bb->a)>0) key=1;
      else key=0;
    else
      if((aa->e)>(bb->e))
        if ((aa->a)>0) key=0;
        else key=1;
      else
        if((aa->x)>(bb->x))
          if ((aa->a)>0) key=0;
          else key=1;
        else
          if((aa->x)<(bb->x))
            if ((bb->a)>0) key=1;
            else key=0;
          else
            if ((aa->a)>(bb->a)) key=0;
            else
              if ((aa->a)<(bb->a))key=1;
    aa=aa->next;
    bb=bb->next;
  }
  if(aa&&(key==2))
    if ((aa->a)>0) key=1;
    else key=0;
  if(bb&&(key==2))
    if ((bb->a)>0) key=0;
    else key=1;
  if(key==2)
    key=0;
  return(key);
}
template <class T>
void delenie(polynom<T>&a,polynom<T>&b,polynom<T>&rez,polynom<T>&ost)
{
  elem<T>*aa;
  elem<T>*aam;
  elem<T>*bb;
  elem<T>*bbm;
  polynom<T>*buf=new polynom<T>;
  int key=1;
  ost=a;
  bb=b.get();;
  aam=NULL;
  bbm=bb;
  bb=bb->next;
  while (bb)
  {
    if ((bbm->x+bbm->e)<(bb->x+bbm->e))
      bbm=bb;
    bb=bb->next;
  }
  while (key)
  {
    key=0;
    aa=ost.get();
    aam=bbm;
    while (aa)
    {
      if (((aa->x)>=(aam->x))&&((aa->e)>=(aam->e)))
      {
        aam=aa;
        key=1;
      }
      aa=aa->next;
    }
    if (key)
    {
      rez.add((aam->a)/(bbm->a),(aam->x)-(bbm->x),(aam->e)-(bbm->e));
      buf->add((aam->a)/(bbm->a),(aam->x)-(bbm->x),(aam->e)-(bbm->e));
      ost=(*buf)*b*(-1)+ost;
      buf->clear();
    }
  }
  delete[] buf;
}


