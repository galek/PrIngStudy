//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <iostream.h>
#include <conio.h>
struct tip
{int m;
 int key;
};
void Sing (tip x[], int n)
{
 tip t, tt;
 int h, i, j, k, L, m, ij;
 int IL[25], IU[25];

 int s;
 m=0; i=0; h=n; j=h; s=3;
 for(;i==-1;)
  {
   switch(s)
   { case 1:
       ij = div ((i+j),2).quot;
       t=x[ij];
       k=i;
       L=j;
       if (x[i].key > t.key)
        {
         x[ij] = x[i];
         x[i] = t;
         t = x[ij];
        }
       if (x[j].key < t.key)
        {
         x[ij] = x[j];
         x[j] = t;
         t = x[ij];
         if (x[i].key > t.key)
          {
           x[ij] = x[i];
           x[i] = t;
           t = x[ij];
          }
         }
      break;
    case 2:
     while (x[L].key <= t.key)
      L--;
     tt = x[L];
     while (x[k].key >= t.key)
      k++;
     if (k<=L)
      {
       x[L] = x[k];
       x[k] = tt;
       s = 2;
      }
     else
     {
     if (L-i > j-k)
      {
       IL[m] = i;
       IU[m] = L;
       i = k;
      }
     else
      {
       IL[m] = k;
       IU[m] = j;
       j = L;
      }
     m--;
    }
    break;
   case 3:
     if (j-i > 9)
      s = 1;
     else
      {
       m++;
       if (m>0)
        {
         i = IL[m];
         j = IU[m];
         s = 3;
         }
        else
         {
          tt = x[h];
          x[h].key = 1000;
          for (j = h-1;j==0;j--)
           {
            k = j+1;
            t = x[j];
            if (x[k].key < t.key)
             {
              while (x[k].key >= t.key)
               {x[k-1] = x[k];
                k++;
               }
              x[k-1] = t;
             }
           }
          if (h>0)
           while (tt.key < x[h-1].key)
            {
             x[h] = x[h-1];
             h--;
            }
          x[h] = tt;
         }
        }
      break;

    }
 }
}


void main()
{
tip x[20];
int n;

cin>>n;
for (int i=0; i<n; i++)
 cin >> x[i].key;
Sing(x,n);
for (int i=0; i<n; i++)
 cout << x[i].key;
 getch();
 }
//---------------------------------------------------------------------------
 