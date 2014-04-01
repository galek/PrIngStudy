//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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

void showInS(Vot s)       //в таблицу
{
 int nn=s.num();
 if(nn==0)
 {
  Form1->StringGrid1->Cells[0][0]="";
  Form1->StringGrid1->Cells[0][1]="";
 }
 Form1->StringGrid1->ColCount=nn; 
 int i=0;
 for(i=0;i<nn;i++)
 {
  Form1->StringGrid1->Cells[i][0]=(s[i])->info;
  Form1->StringGrid1->Cells[i][1]=(s[i])->data;
 }
}
//----------------------------------------------------------------------------
void showInI(Vot)        //в картинку
{
 int nn=Form1->s.num();
 int pk=20;
 int i;
 Form1->Image1->Canvas->Rectangle(0,0,Form1->Image1->Width,Form1->Image1->Height);
 for(i=0;i<nn;i++)
 {
  if(i!=0)
  {
   Form1->Image1->Canvas->MoveTo(pk,25);
   Form1->Image1->Canvas->LineTo(pk+20,25);
  }
  Form1->Image1->Canvas->Rectangle(pk+10,10,pk+140,40);
  Form1->Image1->Canvas->TextOutA(pk+20,20,(Form1->s)[i]->info);
  Form1->Image1->Canvas->Rectangle(pk+10,40,pk+140,70);
  Form1->Image1->Canvas->TextOutA(pk+20,50,(Form1->s)[i]->data);
  pk+=140;
 } 
}
//////////////////////////////////////////////////////////////////////////////
void __fastcall TForm1::Button1Click(TObject *Sender)
{//добавление
 Item i;
 strcpy(i.info,(Edit1->Text).c_str());
 strcpy(i.data,(Edit2->Text).c_str());
 if (Edit1->Text!="" && Edit2->Text!="")
 s+=i;
 showInS(s);
 showInI(s);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{ //удаление из начала
 -s;
 showInS(s);
 showInI(s);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{//перенос сроков
 int nn=s.num();
 if(StrToInt(Edit3->Text)<nn || StrToInt(Edit3->Text)>=0)
 {
  s.edit(StringGrid1->Cells[StrToInt(Edit3->Text)][0].c_str(),Edit5->Text.c_str(),StrToInt(Edit3->Text));
  showInS(s);
  showInI(s);
 }
 else
 {
  Application->MessageBoxA("Нет такого элемента", "Ошибка", MB_OK);
 }
}

//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid1Click(TObject *Sender)
{
 //Edit3->Text=StringGrid1->Selection.Left;
// Edit5->Text=StringGrid1->Cells[StringGrid1->Selection.Left][1];
}
//---------------------------------------------------------------------------

