//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include "Unit2.h"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        TEdit *Edit1;
        TEdit *Edit2;
        TStringGrid *StringGrid1;
        TButton *Button3;
        TEdit *Edit5;
        TButton *Button5;
        TLabel *Label2;
        TImage *Image1;
    TLabel *Label1;
    TLabel *Label3;
    TEdit *Edit3;
    TLabel *Label4;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        //void __fastcall Button6Click(TObject *Sender);
        void __fastcall StringGrid1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
         Vot s;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
void showInS(Vot);
void showInI(Vot);
