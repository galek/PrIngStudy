//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
Dec x1,x2;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
  for (int i=0;i<StringGrid2->ColCount;i++)
    StringGrid2->Cells[i][0]="";
  if (Edit3->Text!="")
  {
   int a = StrToInt(Edit3->Text);
   x2.AddElB(a);
   int m[10];
   for (int i=0;i<10;i++) m[i]=0;
   x2.Mas(m);
   for (int i=0;i<10;i++)
    if (m[i]!=0)
     Form1->StringGrid2->Cells[i][0] = IntToStr(m[i]);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
  for (int i=0;i<StringGrid1->ColCount;i++)
    StringGrid1->Cells[i][0]="";
  if (Edit2->Text!="")
  {
   int a = StrToInt(Edit2->Text);
   x1.AddElE(a);
   int m[10];
   for (int i=0;i<10;i++) m[i]=0;
   x1.Mas(m);
   for (int i=0;i<10;i++)
    if (m[i]!=0)
     Form1->StringGrid1->Cells[i][0] = IntToStr(m[i]);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
 for (int i=0;i<StringGrid1->ColCount;i++)
    StringGrid1->Cells[i][0]="";
 if (Edit1->Text!="")
  {
   int a = StrToInt(Edit1->Text);
   x1.AddElB(a);
   int m[10];
   for (int i=0;i<10;i++) m[i]=0;
   x1.Mas(m);
   for (int i=0;i<10;i++)
    if (m[i]!=0)
     Form1->StringGrid1->Cells[i][0] = IntToStr(m[i]);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
  for (int i=0;i<StringGrid2->ColCount;i++)
    StringGrid2->Cells[i][0]="";
  if (Edit4->Text!="")
  {
   int a = StrToInt(Edit4->Text);
   x2.AddElE(a);
   int m[10];
   for (int i=0;i<10;i++) m[i]=0;
   x2.Mas(m);
   for (int i=0;i<10;i++)
    if (m[i]!=0)
     Form1->StringGrid2->Cells[i][0] = IntToStr(m[i]);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
   for (int i=0;i<StringGrid1->ColCount;i++)
    StringGrid1->Cells[i][0]="";
   x1.DelElB();
   int m[10];
   for (int i=0;i<10;i++) m[i]=0;
   x1.Mas(m);
   for (int i=0;i<10;i++)
    if (m[i]!=0)
     Form1->StringGrid1->Cells[i][0] = IntToStr(m[i]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
 for (int i=0;i<StringGrid1->ColCount;i++)
    StringGrid1->Cells[i][0]="";
   x1.DelElE();
   int m[10];
   for (int i=0;i<10;i++) m[i]=0;
   x1.Mas(m);
   for (int i=0;i<10;i++)
    if (m[i]!=0)
     Form1->StringGrid1->Cells[i][0] = IntToStr(m[i]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
 for (int i=0;i<StringGrid2->ColCount;i++)
    StringGrid2->Cells[i][0]="";
   x2.DelElB();
   int m[10];
   for (int i=0;i<10;i++) m[i]=0;
   x2.Mas(m);
   for (int i=0;i<10;i++)
    if (m[i]!=0)
     Form1->StringGrid2->Cells[i][0] = IntToStr(m[i]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
 for (int i=0;i<StringGrid2->ColCount;i++)
    StringGrid2->Cells[i][0]="";
   x2.DelElE();
   int m[10];
   for (int i=0;i<10;i++) m[i]=0;
   x2.Mas(m);
   for (int i=0;i<10;i++)
    if (m[i]!=0)
     Form1->StringGrid2->Cells[i][0] = IntToStr(m[i]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button91Click(TObject *Sender)
{
 for (int i=0;i<StringGrid1->ColCount;i++)
    StringGrid1->Cells[i][0]="";
   x1 = x2;
   int m[10];
   for (int i=0;i<10;i++) m[i]=0;
   x1.Mas(m);
   for (int i=0;i<10;i++)
    if (m[i]!=0)
     Form1->StringGrid1->Cells[i][0] = IntToStr(m[i]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button92Click(TObject *Sender)
{
 if (x1.Sravnenie(x2))
  ShowMessage("Равны");
 else
  ShowMessage("Не равны");
}
//---------------------------------------------------------------------------

