//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#include <windows.h>
#pragma hdrstop

#include "Unit1.h"
#include "VectorClass.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"





TForm1 *Form1;
TEdit *lastEdit;
TEdit **edits;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        edits = new TEdit*[6];
        edits[0]=edtx1;
        edits[1]=edty1;
        edits[2]=edtz1;
        edits[3]=edtx2;
        edits[4]=edty2;
        edits[5]=edtz2;
}
//---------------------------------------------------------------------------
bool __fastcall TForm1::IsNumeric(AnsiString s)
{
    int i;
    return TryStrToInt(s, i);
}
//---------------------------------------------------------------------------

bool __fastcall TForm1::CheckEdit()
{
        for(int i=0; i<6; i++){
                TEdit *edit = edits[i];
                if(edit->Text=="" || !IsNumeric(edit->Text)){
                        ShowMessage("½Ð¿é¤J¼Æ¦r");
                        edit->SetFocus();
                        lastEdit = edit;
                        return False;
                }
        }
        return True;
}

//---------------------------------------------------------------------------

void __fastcall TForm1::btnAddClick(TObject *Sender)
{
        if(!CheckEdit())return;
        lbeOpr->Caption = "+";
        Vector V1 = Vector(StrToInt(edtx1->Text), StrToInt(edty1->Text), StrToInt(edtz1->Text));
        Vector V2 = Vector(StrToInt(edtx2->Text), StrToInt(edty2->Text), StrToInt(edtz2->Text));

        Vector V3 = V1 + V2;
        lbeRes->Caption = Format("( %f, %f, %f )", ARRAYOFCONST((V3.getX(), V3.getY(), V3.getZ())));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnSubClick(TObject *Sender)
{                   
        if(!CheckEdit())return;
        lbeOpr->Caption = "-";
        Vector V1 = Vector(StrToInt(edtx1->Text), StrToInt(edty1->Text), StrToInt(edtz1->Text));
        Vector V2 = Vector(StrToInt(edtx2->Text), StrToInt(edty2->Text), StrToInt(edtz2->Text));

        Vector V3 = V1 - V2;
        lbeRes->Caption = Format("( %f, %f, %f )", ARRAYOFCONST((V3.getX(), V3.getY(), V3.getZ())));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnDotClick(TObject *Sender)
{                            
        if(!CheckEdit())return;
        lbeOpr->Caption = "¡´";
        Vector V1 = Vector(StrToInt(edtx1->Text), StrToInt(edty1->Text), StrToInt(edtz1->Text));
        Vector V2 = Vector(StrToInt(edtx2->Text), StrToInt(edty2->Text), StrToInt(edtz2->Text));

        Vector V3 = V1 * V2;
        lbeRes->Caption = Format("( %f )", ARRAYOFCONST((V3.getX())));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnCroClick(TObject *Sender)
{                             
        if(!CheckEdit())return;
        lbeOpr->Caption = "x";
        Vector V1 = Vector(StrToInt(edtx1->Text), StrToInt(edty1->Text), StrToInt(edtz1->Text));
        Vector V2 = Vector(StrToInt(edtx2->Text), StrToInt(edty2->Text), StrToInt(edtz2->Text));

        Vector V3 = V1 ^ V2;
        lbeRes->Caption = Format("( %f, %f, %f )", ARRAYOFCONST((V3.getX(), V3.getY(), V3.getZ())));
}
//---------------------------------------------------------------------------


void __fastcall TForm1::edtx1Click(TObject *Sender)
{
        lastEdit = edtx1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::edty1Click(TObject *Sender)
{
        lastEdit = edty1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::edtz1Click(TObject *Sender)
{
        lastEdit = edtz1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::edtx2Click(TObject *Sender)
{
        lastEdit = edtx2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::edty2Click(TObject *Sender)
{
        lastEdit = edty2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::edtz2Click(TObject *Sender)
{
        lastEdit = edtz2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNum0Click(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text + '0'));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNum1Click(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text + '1'));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNum2Click(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text + '2'));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNum3Click(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text + '3'));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNum4Click(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text + '4'));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNum5Click(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text + '5'));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNum6Click(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text + '6'));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNum7Click(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text + '7'));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNum8Click(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text + '8'));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNum9Click(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }

        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text + '9'));
}
//---------------------------------------------------------------------------


void __fastcall TForm1::btnPMClick(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        lastEdit->Text = FloatToStr(StrToFloat(lastEdit->Text)*(-1.0));
}
//---------------------------------------------------------------------------


void __fastcall TForm1::btnBackClick(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        std::string text = lastEdit->Text.c_str();
        text.pop_back();
        lastEdit->Text = text.c_str();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::btnTabClick(TObject *Sender)
{
        if(lastEdit != NULL){
                lastEdit->SetFocus();
        }
        int idx = -1;
        for(int i=0; i<6; i++){
                if(lastEdit->Name == edits[i]->Name){
                        idx = i+1;
                }
        }
        if(idx >= 6){
                idx = 0;
        }
        edits[idx]->SetFocus();
        lastEdit = edits[idx];
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnClnClick(TObject *Sender)
{
        //int counts = sizeof(edits)/sizeof(TEdit*);
        for(int i=0; i<6; i++){
                edits[i]->Text = "";
        }
        lbeOpr->Caption = "";
        edtx1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        lastEdit = edtx1;
}
//---------------------------------------------------------------------------




