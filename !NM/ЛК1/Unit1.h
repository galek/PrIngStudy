//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label5;
        TLabel *Label6;
        TStringGrid *StringGrid1;
        TStringGrid *StringGrid2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit1;
        TEdit *Edit2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button7;
        TButton *Button8;
        TButton *Button91;
        TButton *Button92;
        TButton *Button1;
        TButton *Button2;
        TButton *Button5;
        TButton *Button6;
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button91Click(TObject *Sender);
        void __fastcall Button92Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif


void Vivod (int x[10])
{
 for (int i=0;i<10;i++)
  if (x[i]!=0)
   Form1->StringGrid1->Cells[0][i] = IntToStr(x[i]);
}




