//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
extern Tamu,n,Harga;
extern Kaleng,Gudang,kaleng[12][10];
extern ht,pu,mr,br,ku,jg,hj,ab,ug,ck;
extern tjual,tuangm,No;
#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
String warna[10]={"Putih", "Hitam", "Merah", "Biru", "Kuning", "Jingga", "Hijau", "Abu-abu", "Ungu",  "Coklat"},Warna[10];;
int kode[10]={101,102,111,112,113,224,225,203,337,449};
int harga[10]={40000, 45000, 50000, 50000, 50000, 55000, 55000, 55000, 60000, 65000};
int order[10][3];
int n=0,Jumlah=0,Harga=0;
int tjual=0,tuangm=0,Tamu=0;
String tgll;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
//perulangan menampilkan warna, kode, dan harga
for (int x=0;x<10;x++)
  {
    lbwarna->Items->Add(warna[x]);
    lbkode->Items->Add(kode[x]);
    lbharga->Items->Add(harga[x]);
  }
//tampil setiap item pada combo box
cbwarna->Items->Add("Putih");cbwarna->Items->Add("Hitam");
cbwarna->Items->Add("Merah");cbwarna->Items->Add("Biru");
cbwarna->Items->Add("Kuning");cbwarna->Items->Add("Jingga");
cbwarna->Items->Add("Hijau");cbwarna->Items->Add("Abu-abu");
cbwarna->Items->Add("Ungu");cbwarna->Items->Add("Coklat");

}
//---------------------------------------------------------------------------
void __fastcall TForm3::btambahClick(TObject *Sender)
{
int jumlah=StrToInt(ejumlah->Text);
int w=cbwarna->ItemIndex;
if(ejumlah->Text==0)
 {
   ShowMessage("Masukkan jumlah kaleng yang akan dibeli!");
 }
else
 {
  if(Jumlah+jumlah>Kaleng)
   {
  ShowMessage("Jumlah yang diorder melebihi persediaan toko!");
   }
  else
   {
    switch (w)
      {
        case 0:
                order[n][0]=kode[0];order[n][1]=jumlah;
                Warna[n]=warna[0];order[n][2]=harga[0]*jumlah;
                lbkode1->Items->Add(order[n][0]);lbwarna1->Items->Add(Warna[n]);
                lbjumlah->Items->Add(order[n][1]);lbharga1->Items->Add(order[n][2]);
        break;
        case 1:
                order[n][0]=kode[1];order[n][1]=jumlah;
                Warna[n]=warna[1];order[n][2]=harga[1]*jumlah;
                lbkode1->Items->Add(order[n][0]);lbwarna1->Items->Add(Warna[n]);
                lbjumlah->Items->Add(order[n][1]);lbharga1->Items->Add(order[n][2]);
        break;
        case 2:
                order[n][0]=kode[2];order[n][1]=jumlah;
                Warna[n]=warna[2];order[n][2]=harga[2]*jumlah;
                lbkode1->Items->Add(order[n][0]);lbwarna1->Items->Add(Warna[n]);
                lbjumlah->Items->Add(order[n][1]);lbharga1->Items->Add(order[n][2]);
        break;
        case 3:
                order[n][0]=kode[3];order[n][1]=jumlah;
                Warna[n]=warna[3];order[n][2]=harga[3]*jumlah;
                lbkode1->Items->Add(order[n][0]);lbwarna1->Items->Add(Warna[n]);
                lbjumlah->Items->Add(order[n][1]);lbharga1->Items->Add(order[n][2]);
        break;
        case 4:
                order[n][0]=kode[4];Warna[n]=warna[4];
                order[n][1]=jumlah;order[n][2]=harga[4]*jumlah;
                lbkode1->Items->Add(order[n][0]);lbwarna1->Items->Add(Warna[n]);
                lbjumlah->Items->Add(order[n][1]);lbharga1->Items->Add(order[n][2]);
        break;
        case 5:
                order[n][0]=kode[5];Warna[n]=warna[5];
                order[n][1]=jumlah;order[n][2]=harga[5]*jumlah;
                lbkode1->Items->Add(order[n][0]);lbwarna1->Items->Add(Warna[n]);
                lbjumlah->Items->Add(order[n][1]);lbharga1->Items->Add(order[n][2]);
        break;
        case 6:
                order[n][0]=kode[6];Warna[n]=warna[6];
                order[n][1]=jumlah;order[n][2]=harga[6]*jumlah;
                lbkode1->Items->Add(order[n][0]);lbwarna1->Items->Add(Warna[n]);
                lbjumlah->Items->Add(order[n][1]);lbharga1->Items->Add(order[n][2]);
        break;
        case 7:
                order[n][0]=kode[7];Warna[n]=warna[7];
                order[n][1]=jumlah;order[n][2]=harga[7]*jumlah;
                lbkode1->Items->Add(order[n][0]);lbwarna1->Items->Add(Warna[n]);
                lbjumlah->Items->Add(order[n][1]);lbharga1->Items->Add(order[n][2]);
        break;
        case 8:
                order[n][0]=kode[8];Warna[n]=warna[8];
                order[n][1]=jumlah;order[n][2]=harga[8]*jumlah;
                lbkode1->Items->Add(order[n][0]);lbwarna1->Items->Add(Warna[n]);
                lbjumlah->Items->Add(order[n][1]);lbharga1->Items->Add(order[n][2]);
        break;
        case 9:
                order[n][0]=kode[9];Warna[n]=warna[9];
                order[n][1]=jumlah;order[n][2]=harga[9]*jumlah;
                lbkode1->Items->Add(order[n][0]);lbwarna1->Items->Add(Warna[n]);
                lbjumlah->Items->Add(order[n][1]);lbharga1->Items->Add(order[n][2]);
        break;
        default: ShowMessage("Pilih warna!");
        break;
        }
      Jumlah=Jumlah+order[n][1];
      Harga=Harga+order[n][2];
      n++;
    }
}
 etotjumlah->Clear();
 etotjumlah->Text=Jumlah;
 etotharga->Clear();
 etotharga->Text=Harga;
 ejumlah->Clear();
 ejumlah->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::bbatalClick(TObject *Sender)
{
if(Jumlah==0)
 {
  Form2->Hide();Form1->Show();
 }
else
 {
  lbkode1->Items->Clear();lbwarna1->Items->Clear();
  lbjumlah->Items->Clear();lbharga1->Items->Clear();
  n--;
  for(int h=0;h<n;h++)
   {
    lbkode1->Items->Add(order[h][0]);lbwarna1->Items->Add(Warna[h]);
    lbjumlah->Items->Add(order[h][1]);lbharga1->Items->Add(order[h][2]);
   }
  Jumlah=Jumlah-order[n][1];Harga=Harga-order[n][2];
  etotjumlah->Clear();etotharga->Clear();
  etotjumlah->Text=Jumlah;etotharga->Text=Harga;
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::bprosesClick(TObject *Sender)
{
int t;
if(Application->MessageBoxA("Apakah orderan sudah sesuai?", "Konfirmasi Pembelian", MB_YESNO | MB_ICONQUESTION)==IDYES)
    {
    No++;
    Tamu++;
    tjual=tjual+Jumlah;
    tuangm=tuangm+Harga;
    //struk
     Form4->ltgl->Caption=Form1->ltgl->Caption;
     Form4->ljam->Caption=Time();
         for(int s=0;s<n;s++)
      {
        Form4->lbproduk->Items->Add(Warna[s]);
        Form4->lbjml->Items->Add(order[s][1]);
        Form4->lbharga->Items->Add(order[s][2]);
        Form4->etotharga->Text=Harga;
      }

      //database insert riwayattransaksi
      eno->Clear();
      eno->Text=No;
      Form4->eno->Clear();
      Form4->eno->Text=Tamu;
      aqrp->Close();
      aqrp->SQL->Clear();
      aqrp->SQL->Add("INSERT INTO riwayatpenjualan(No,TanggalTransaksi,PukulTransaksi,WarnaCat,JumlahKaleng,HargaTotal) values('"+eno->Text+"','"+Form1->ltgl->Caption+"','"+Form4->ljam->Caption+"','"+Warna[0]+"','"+order[0][1]+"','"+order[0][2]+"')");
      aqrp->ExecSQL();
      //insert riwayattransaksi
      eno->Clear();
      for(int x=1;x<n;x++)
      {
      eno->Text=(No+x);
      aqrp->Close();
      aqrp->SQL->Clear();
      aqrp->SQL->Add("INSERT INTO riwayatpenjualan(No,WarnaCat,JumlahKaleng,HargaTotal)values('"+eno->Text+"','"+Warna[x]+"','"+order[x][1]+"','"+order[x][2]+"')");
      aqrp->ExecSQL();
      }

     //kurangin stok di rak
     for(int y=0;y<n;y++)
       {
         //putih
         if(order[y][0]==kode[0])
           {
            int i=0;
            while(order[y][1]>kaleng[pu][0])
              {
               order[y][1]=order[y][1]-kaleng[pu][0];
               kaleng[pu][0]=0;
               pu--;
               i++;
              }
            if(order[y][1]==kaleng[pu][0])
              {
               kaleng[pu][0]=kaleng[pu][0]-order[y][1];
               order[y][1]=0;
               pu--;
              }
            else if(order[y][1]<kaleng[pu][0])
              {
               kaleng[pu][0]=kaleng[pu][0]-order[y][1];
               order[y][1]=0;
              }
            if(order[y][1]==0)
              {
               Form1->lbputih->Clear();
               for(t=pu;t>=0;t--)
                 {
                  Form1->lbputih->Items->Add(kaleng[t][0]);
                 }
              }
             }
          //hitam
          else if(order[y][0]==kode[1])
             {
               int i=0;
               while(order[y][1]>kaleng[ht][1])
                 {
                   order[y][1]=order[y][1]-kaleng[ht][1];
                   kaleng[ht][1]=0;
                   ht--;
                   i++;
                 }
               if(order[y][1]==kaleng[ht][1])
                 {
                  kaleng[ht][1]=kaleng[ht][1]-order[y][1];
                  order[y][1]=0;
                  ht--;
                 }
                else if(order[y][1]<kaleng[ht][1])
                   {
                     kaleng[ht][1]=kaleng[ht][1]-order[y][1];
                     order[y][1]=0;
                   }
                if(order[y][1]==0)
                   {
                     Form1->lbhitam->Clear();
                     for(t=ht;t>=0;t--)
                        {
                          Form1->lbhitam->Items->Add(kaleng[t][1]);
                        }
                   }
               }
          //merah
          else if(order[y][0]==kode[2])
             {
               int i=0;
               while(order[y][1]>kaleng[mr][2])
                 {
                   order[y][1]=order[y][1]-kaleng[mr][2];
                   kaleng[mr][2]=0;
                   mr--;
                   i++;
                 }
               if(order[y][1]==kaleng[mr][2])
                 {
                  kaleng[mr][2]=kaleng[mr][2]-order[y][1];
                  order[y][1]=0;
                  mr--;
                 }
                else if(order[y][1]<kaleng[mr][2])
                   {
                     kaleng[mr][2]=kaleng[mr][2]-order[y][1];
                     order[y][1]=0;
                   }
                if(order[y][1]==0)
                   {
                     Form1->lbmerah->Clear();
                     for(t=mr;t>=0;t--)
                        {
                          Form1->lbmerah->Items->Add(kaleng[t][2]);
                        }
                   }
               }
          //biru
          else if(order[y][0]==kode[3])
             {
               int i=0;
               while(order[y][1]>kaleng[br][3])
                 {
                   order[y][1]=order[y][1]-kaleng[br][3];
                   kaleng[br][3]=0;
                   br--;
                   i++;
                 }
               if(order[y][1]==kaleng[br][3])
                 {
                  kaleng[br][3]=kaleng[br][3]-order[y][1];
                  order[y][1]=0;
                  br--;
                 }
                else if(order[y][1]<kaleng[br][3])
                   {
                     kaleng[br][3]=kaleng[br][3]-order[y][1];
                     order[y][1]=0;
                   }
                if(order[y][1]==0)
                   {
                     Form1->lbbiru->Clear();
                     for(t=br;t>=0;t--)
                        {
                          Form1->lbbiru->Items->Add(kaleng[t][3]);
                        }
                   }
               }
          //kuning
          else if(order[y][0]==kode[4])
             {
               int i=0;
               while(order[y][1]>kaleng[ku][4])
                 {
                   order[y][1]=order[y][1]-kaleng[ku][4];
                   kaleng[ku][4]=0;
                   ku--;
                   i++;
                 }
               if(order[y][1]==kaleng[ku][4])
                 {
                  kaleng[ku][4]=kaleng[ku][4]-order[y][1];
                  order[y][1]=0;
                  ku--;
                 }
                else if(order[y][1]<kaleng[ku][4])
                   {
                     kaleng[ku][4]=kaleng[ku][4]-order[y][1];
                     order[y][1]=0;
                   }
                if(order[y][1]==0)
                   {
                     Form1->lbkuning->Clear();
                     for(t=ku;t>=0;t--)
                        {
                          Form1->lbkuning->Items->Add(kaleng[t][4]);
                        }
                   }
               }
          //jingga
          else if(order[y][0]==kode[5])
             {
               int i=0;
               while(order[y][1]>kaleng[jg][5])
                 {
                   order[y][1]=order[y][1]-kaleng[jg][5];
                   kaleng[jg][5]=0;
                   jg--;
                   i++;
                 }
               if(order[y][1]==kaleng[jg][5])
                 {
                  kaleng[jg][5]=kaleng[jg][5]-order[y][1];
                  order[y][1]=0;
                  jg--;
                 }
                else if(order[y][1]<kaleng[jg][5])
                   {
                     kaleng[jg][5]=kaleng[jg][5]-order[y][1];
                     order[y][1]=0;
                   }
                if(order[y][1]==0)
                   {
                     Form1->lbjingga->Clear();
                     for(t=jg;t>=0;t--)
                        {
                          Form1->lbjingga->Items->Add(kaleng[t][5]);
                        }
                   }
               }
           //hijau
          else if(order[y][0]==kode[6])
             {
               int i=0;
               while(order[y][1]>kaleng[hj][6])
                 {
                   order[y][1]=order[y][1]-kaleng[hj][6];
                   kaleng[hj][6]=0;
                   hj--;
                   i++;
                 }
               if(order[y][1]==kaleng[hj][6])
                 {
                  kaleng[hj][6]=kaleng[hj][6]-order[y][1];
                  order[y][1]=0;
                  hj--;
                 }
                else if(order[y][1]<kaleng[hj][6])
                   {
                     kaleng[hj][6]=kaleng[hj][6]-order[y][1];
                     order[y][1]=0;
                   }
                if(order[y][1]==0)
                   {
                     Form1->lbhijau->Clear();
                     for(t=hj;t>=0;t--)
                        {
                          Form1->lbhijau->Items->Add(kaleng[t][6]);
                        }
                   }
               }
          //abu
          else if(order[y][0]==kode[7])
             {
               int i=0;
               while(order[y][1]>kaleng[ab][7])
                 {
                   order[y][1]=order[y][1]-kaleng[ab][7];
                   kaleng[ab][7]=0;
                   ab--;
                   i++;
                 }
               if(order[y][1]==kaleng[ab][7])
                 {
                  kaleng[ab][7]=kaleng[ab][7]-order[y][1];
                  order[y][1]=0;
                  ab--;
                 }
                else if(order[y][1]<kaleng[ab][7])
                   {
                     kaleng[ab][7]=kaleng[ab][7]-order[y][1];
                     order[y][1]=0;
                   }
                if(order[y][1]==0)
                   {
                     Form1->lbabu->Clear();
                     for(t=ab;t>=0;t--)
                        {
                          Form1->lbabu->Items->Add(kaleng[t][7]);
                        }
                   }
               }
          //ungu
          else if(order[y][0]==kode[8])
             {
               int i=0;
               while(order[y][1]>kaleng[ug][8])
                 {
                   order[y][1]=order[y][1]-kaleng[ug][8];
                   kaleng[ug][8]=0;
                   ug--;
                   i++;
                 }
               if(order[y][1]==kaleng[ug][8])
                 {
                  kaleng[ug][8]=kaleng[ug][8]-order[y][1];
                  order[y][1]=0;
                  kaleng[ug][8]=0;
                  ug--;
                 }
                else if(order[y][1]<kaleng[ug][8])
                   {
                     kaleng[ug][8]=kaleng[ug][8]-order[y][1];
                     order[y][1]=0;
                   }
                if(order[y][1]==0)
                   {
                     Form1->lbungu->Clear();
                     for(t=ug;t>=0;t--)
                        {
                          Form1->lbungu->Items->Add(kaleng[t][8]);
                        }
                   }
               }
          //coklat
          else if(order[y][0]==kode[9])
             {
               int i=0;
               while(order[y][1]>kaleng[ck][9])
                 {
                   order[y][1]=order[y][1]-kaleng[ck][9];
                   kaleng[ck][9]=0;
                   ck--;
                   i++;
                 }
               if(order[y][1]==kaleng[ck][9])
                 {
                  kaleng[ck][9]=kaleng[ck][9]-order[y][1];
                  order[y][1]=0;
                  ck--;
                 }
                else if(order[y][1]<kaleng[ck][9])
                   {
                     kaleng[ck][9]=kaleng[ck][9]-order[y][1];
                     order[y][1]=0;
                   }
                if(order[y][1]==0)
                   {
                     Form1->lbcoklat->Clear();
                     for(t=ck;t>=0;t--)
                        {
                          Form1->lbcoklat->Items->Add(kaleng[t][9]);
                        }
                   }
               }
          }
       ShowMessage("Barang sedang dikemas, harap tunggu...");
       Kaleng=Kaleng-Jumlah;
       //hapus isi list order
       Jumlah=0;Harga=0;
       Form1->ekaleng->Clear();Form1->ekaleng->Text=Kaleng;
       ShowMessage("Transaksi berhasil");
       Form3->Hide();
       lbkode1->Clear();lbwarna1->Clear();
       lbjumlah->Clear();lbharga1->Clear();
       etotjumlah->Clear();etotharga->Clear();
       etotjumlah->Text=Jumlah;etotharga->Text=Harga;
       Form4->Show();
     }
else
     {
      ShowMessage("Pastikan pesanan sudah sesuai!");
     }
}
//---------------------------------------------------------------------------





