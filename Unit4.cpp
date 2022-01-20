//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
extern Tamu,n,Harga,Kaleng;
#include "Unit4.h"
#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
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

void __fastcall TForm4::Button1Click(TObject *Sender)
{
Form1->etottamu->Clear();
Form1->etottamu->Text=Tamu;
ShowMessage("Sedang mencetak, harap tunggu...");
ShowMessage("Bukti transaksi berhasil dicetak.");
Form4->Hide();
if(Kaleng<600)
 {
  Form1->bambil->Enabled=True;
  Form1->eambil->Enabled=True;
  if(Kaleng<300)
  {
   ShowMessage("Jumlah kaleng pada rak "+Form1->ekaleng->Text+" kaleng!");
   ShowMessage("Isi rak kembali!");
  }
 }
lbproduk->Clear();
lbjml->Clear();
lbharga->Clear();
etotharga->Clear();
eno->Clear();
n=0;
Form1->Show();
}
//---------------------------------------------------------------------------

