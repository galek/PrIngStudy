//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "Unit2.h"
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TEdit *Edit1;
        TEdit *Edit2;
        TButton *Add1;
        TButton *Add2;
        TEdit *Edit4;
        TEdit *Edit5;
        TButton *Sum;
        TButton *Proizv;
        TButton *Clear;
        TEdit *Edit7;
        TButton *ProNum1;
        TEdit *Edit8;
        TButton *ProNum2;
        TButton *Delit;
        TButton *Sravn;
    TLabel *Label2;
    TEdit *Edit3;
    TLabel *Label3;
        void __fastcall Add1Click(TObject *Sender);
        void __fastcall Add2Click(TObject *Sender);
        void __fastcall SumClick(TObject *Sender);
        void __fastcall ProizvClick(TObject *Sender);
        void __fastcall DelitClick(TObject *Sender);
        void __fastcall SravnClick(TObject *Sender);
        void __fastcall ClearClick(TObject *Sender);
        void __fastcall ProNum1Click(TObject *Sender);
        void __fastcall ProNum2Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall Edit2Change(TObject *Sender);
        void __fastcall Edit3Change(TObject *Sender);
        void __fastcall Edit7Change(TObject *Sender);
        void __fastcall Edit8Change(TObject *Sender);
        void __fastcall Edit4Change(TObject *Sender);
        void __fastcall Edit5Change(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
        polynom<float> P1;
        polynom<float> P2;
        polynom<float> P3;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
