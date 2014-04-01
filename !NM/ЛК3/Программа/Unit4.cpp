//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <io.h>
#include "Unit2.cpp"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;

//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}

//---------------------------------------------------------------------------
void __fastcall TForm4::Add1Click(TObject *Sender)
{
  double a;
  int b,c;
  if((Edit1->Text=="")&&(Edit2->Text=="")&&(Edit3->Text==""))
    ShowMessage("Введите данные!!!");
  else
  {
    if(Edit1->Text=="") a=1;
    else
      if(Edit1->Text=="-") a=-1;
      else a=(Edit1->Text).ToDouble();
    if(Edit2->Text=="") b=0;
    else b=StrToInt(Edit2->Text);
    if(Edit3->Text=="") c=0;
    else c=StrToInt(Edit3->Text);
    P1.add(a,b,c);
    Edit4->Text=P1.getpoly();
    Edit1->Text="";
    Edit2->Text="";
    Edit3->Text="";
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Add2Click(TObject *Sender)
{
  double a;
  int b,c;
  if((Edit1->Text=="")&&(Edit2->Text=="")&&(Edit3->Text==""))
    ShowMessage("Введите данные!!!");
  else
  {
    if(Edit1->Text=="") a=1;
    else
     if(Edit1->Text=="-") a=-1;
     else a=(Edit1->Text).ToDouble();
    if(Edit2->Text=="") b=0;
    else b=StrToInt(Edit2->Text);
    if(Edit3->Text=="") c=0;
    else c=StrToInt(Edit3->Text);
    P2.add(a,b,c);
    Edit5->Text=P2.getpoly();
    Edit1->Text="";
    Edit2->Text="";
    Edit3->Text="";
  } 
}
//---------------------------------------------------------------------------
void __fastcall TForm4::SumClick(TObject *Sender)
{
  P3.clear();
  P3=P1+P2;
  Label7->Caption=P3.getpoly();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::ProizvClick(TObject *Sender)
{
  P3.clear();
  P3=P2*P1;
  Label7->Caption=P3.getpoly();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::DelitClick(TObject *Sender)
{
  polynom<double> ost;
  polynom<double>*osts;
  osts=new polynom<double>;
  ost=*osts;
  P3.clear();
  delenie(P1,P2,P3,ost);
  if (P3.getpoly()=="")
    Label7->Caption="Не делится!!!";
  else
  {
    Label7->Caption=P3.getpoly();
    if (ost.getpoly()!="")
    {
      Label7->Caption=Label7->Caption+"  Остаток: ";
      Label7->Caption=Label7->Caption+ost.getpoly();
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::SravnClick(TObject *Sender)
{
  
   Label7->Caption="";
   P3.clear();
   if (P1>P2)
     Label7->Caption="P1 больше P2";
   else
     if (P1<P2)
       Label7->Caption="P1 меньше P2";
     else
       Label7->Caption="P1 равен P2";
}
//---------------------------------------------------------------------------
void __fastcall TForm4::ClearClick(TObject *Sender)
{
  P1.clear();
  P2.clear();
  Edit1->Text="";
  Edit2->Text="";
  Edit3->Text="";
  Edit4->Text="";
  Edit5->Text="";
  Edit7->Text="";
  Edit8->Text="";
  Label7->Caption="";
}

//---------------------------------------------------------------------------
void __fastcall TForm4::FormCreate(TObject *Sender)
{
  polynom<double>*P1s;
  polynom<double>*P2s;
  polynom<double>*P3s;
  P1s=new polynom<double>;
  P2s=new polynom<double>;
  P3s=new polynom<double>;
  P1=*P1s;
  P2=*P2s;
  P3=*P3s;
  Add1->Enabled=False;
  Add2->Enabled=False;
  Sum->Enabled=False;
  Proizv->Enabled=False;
  Delit->Enabled=False;
  Sravn->Enabled=False;
  Clear->Enabled=False;
  ProNum1->Enabled=False;
  ProNum2->Enabled=False;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Edit1Change(TObject *Sender)
{
  double a;
  if(Edit1->Text=="")
  {
    Add1->Enabled=False;
    Add2->Enabled=False;
  }
  else
  {
    Add1->Enabled=True;
    Add2->Enabled=True;
  }
  if ((Edit1->Text!="")&&(Edit1->Text!="-"))
    if(!TryStrToFloat(Edit1->Text,a))
    {
      ShowMessage("Неправильный ввод!!!");
      Edit1->Text="";
    }
    else
      a=(Edit1->Text).ToDouble();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Edit2Change(TObject *Sender)
{
  int a;
  if(Edit2->Text=="")
  {
    Add1->Enabled=False;
    Add2->Enabled=False;
  }
  else
  {
    Add1->Enabled=True;
    Add2->Enabled=True;
  }
  if (Edit2->Text!="")
    if(!TryStrToInt(Edit2->Text,a))
    {
      ShowMessage("Неправильный ввод!!!");
      Edit2->Text="";
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Edit3Change(TObject *Sender)
{
  int a;
  if(Edit3->Text=="")
  {
    Add1->Enabled=False;
    Add2->Enabled=False;
  }
  else
  {
    Add1->Enabled=True;
    Add2->Enabled=True;
  }
  if (Edit3->Text!="")
    if(!TryStrToInt(Edit3->Text,a))
    {
      ShowMessage("Неправильный ввод!!!");
      Edit3->Text="";
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Edit7Change(TObject *Sender)
{
  double a;
  if(Edit7->Text=="") ProNum1->Enabled=False;
  else ProNum1->Enabled=True;
  if ((Edit7->Text!="")&&(Edit7->Text!="-"))
    if(!TryStrToFloat(Edit7->Text,a))
    {
      ShowMessage("Неправильный ввод!!!");
      Edit7->Text="";
    }
    else
      a=(Edit7->Text).ToDouble();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Edit8Change(TObject *Sender)
{
  double a;
  if(Edit8->Text=="") ProNum2->Enabled=False;
  else ProNum2->Enabled=True;
  if ((Edit8->Text!="")&&(Edit8->Text!="-"))
    if(!TryStrToFloat(Edit8->Text,a))
    {
      ShowMessage("Неправильный ввод!!!");
      Edit8->Text="";
    }
    else
      a=(Edit8->Text).ToDouble();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Edit4Change(TObject *Sender)
{
  if(Edit4->Text=="")
  {
    Clear->Enabled=False;
    Sum->Enabled=False;
    Proizv->Enabled=False;
    Delit->Enabled=False;
    Sravn->Enabled=False;
    ProNum1->Enabled=False;
  }
  else
  {
    Clear->Enabled=True;
    if(Edit5->Text!="")
    {
      Sum->Enabled=True;
      Proizv->Enabled=True;
      Delit->Enabled=True;
      Sravn->Enabled=True;
    }
    if(Edit7->Text!="") ProNum1->Enabled=False;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Edit5Change(TObject *Sender)
{
  if(Edit5->Text=="")
  {
    Clear->Enabled=False;
    ProNum2->Enabled=False;
  }
  else
  {
    Clear->Enabled=True;
    if(Edit4->Text!="")
    {
      Sum->Enabled=True;
      Proizv->Enabled=True;
      Delit->Enabled=True;
      Sravn->Enabled=True;
    }
     if(Edit8->Text!="") ProNum2->Enabled=False;
  }
}
void __fastcall TForm4::ProNum1Click(TObject *Sender)
{
  P3.clear();
  P3=P1*((Edit7->Text).ToDouble());
  Label7->Caption=P3.getpoly();
  Edit7->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm4::ProNum2Click(TObject *Sender)
{
  P3.clear();
  P3=P2*((Edit8->Text).ToDouble());
  Label7->Caption=P3.getpoly();
  Edit8->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
   Form1->Show();        
  delete [] &P1;
  delete [] &P2;
  delete [] &P3;     
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------


