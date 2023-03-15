//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TEdit *edtx1;
        TEdit *edty1;
        TEdit *edtz1;
        TEdit *edtx2;
        TEdit *edty2;
        TEdit *edtz2;
        TButton *btnAdd;
        TLabel *lbeRes;
        TButton *btnSub;
        TButton *btnDot;
        TButton *btnCro;
        TButton *btnNum7;
        TButton *btnNum8;
        TButton *btnNum9;
        TButton *btnNum4;
        TButton *btnNum5;
        TButton *btnNum6;
        TButton *btnNum1;
        TButton *btnNum2;
        TButton *btnNum3;
        TButton *btnPM;
        TButton *btnNum0;
        TButton *btnPoint;
        TLabel *Label6;
        TButton *btnTab;
        TButton *btnBack;
        TLabel *lbeOpr;
        TButton *btnCln;
        TLabel *Label7;
        bool __fastcall IsNumeric(AnsiString str);
        bool __fastcall CheckEdit();
        void __fastcall btnAddClick(TObject *Sender);
        void __fastcall btnSubClick(TObject *Sender);
        void __fastcall btnDotClick(TObject *Sender);
        void __fastcall btnCroClick(TObject *Sender);
        void __fastcall edtx1Click(TObject *Sender);
        void __fastcall edty1Click(TObject *Sender);
        void __fastcall edtz1Click(TObject *Sender);
        void __fastcall edtx2Click(TObject *Sender);
        void __fastcall edty2Click(TObject *Sender);
        void __fastcall edtz2Click(TObject *Sender);
        void __fastcall btnNum0Click(TObject *Sender);
        void __fastcall btnNum1Click(TObject *Sender);
        void __fastcall btnNum2Click(TObject *Sender);
        void __fastcall btnNum3Click(TObject *Sender);
        void __fastcall btnNum4Click(TObject *Sender);
        void __fastcall btnNum5Click(TObject *Sender);
        void __fastcall btnNum6Click(TObject *Sender);
        void __fastcall btnNum7Click(TObject *Sender);
        void __fastcall btnNum8Click(TObject *Sender);
        void __fastcall btnNum9Click(TObject *Sender);
        void __fastcall btnPMClick(TObject *Sender);
        void __fastcall btnBackClick(TObject *Sender);
        void __fastcall btnTabClick(TObject *Sender);
        void __fastcall btnClnClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
