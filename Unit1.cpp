//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
extern Kaleng,Gudang,kaleng[12][10];
extern ht,pu,mr,br,ku,jg,hj,ab,ug,ck,pth,htm,mrh,bru,kng,jgg,hjw,abw,ugu,ckl;
extern tbeli,tjual,tuangm,No;
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
int kaleng[12][10];
int tbeli=0,sisa=0,untung=0,no=0,NO=0,x,No;
int Gudang=0,Kaleng=0;
int ht=-1,pu=-1,mr=-1,br=-1,ku=-1,jg=-1,hj=-1,ab=-1,ug=-1,ck=-1;
int pth=0,htm=0,mrh=0,bru=0,kng=0,jgg=0,hjw=0,abw=0,ugu=0,ckl=0;
String tgl;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
 btutup->Enabled=False;bdatang->Enabled=False;bbuka->Enabled=False;eambil->Enabled=False;bambil->Enabled=False;bstok->Enabled=False;
 Timer1->Enabled=False;
 cbwarna->Items->Add("Semua");
 cbwarna->Items->Add("Putih");cbwarna->Items->Add("Hitam");
 cbwarna->Items->Add("Merah");cbwarna->Items->Add("Biru");
 cbwarna->Items->Add("Kuning");cbwarna->Items->Add("Jingga");
 cbwarna->Items->Add("Hijau");cbwarna->Items->Add("Abu");
 cbwarna->Items->Add("Ungu");cbwarna->Items->Add("Coklat");

 //select data persediaan
 aqwarna->Close();
 aqwarna->SQL->Clear();
 aqwarna->SQL->Add("SELECT *FROM persediaan WHERE No IN(SELECT max(No) as No FROM persediaan)");
 aqwarna->Open();
 Gudang=aqwarna->FieldByName("TotalGudang")->AsInteger;Kaleng=aqwarna->FieldByName("TotalRak")->AsInteger;
 pth=aqwarna->FieldByName("Putih")->AsInteger;
 htm=aqwarna->FieldByName("Hitam")->AsInteger;
 mrh=aqwarna->FieldByName("Merah")->AsInteger;
 bru=aqwarna->FieldByName("Biru")->AsInteger;
 kng=aqwarna->FieldByName("Kuning")->AsInteger;
 jgg=aqwarna->FieldByName("Jingga")->AsInteger;
 hjw=aqwarna->FieldByName("Hijau")->AsInteger;
 abw=aqwarna->FieldByName("Abu")->AsInteger;
 ugu=aqwarna->FieldByName("Ungu")->AsInteger;
 ckl=aqwarna->FieldByName("Coklat")->AsInteger;
 NO=aqwarna->FieldByName("No")->AsInteger;

 //select data  catatan
 aqctt->Close();
 aqctt->SQL->Clear();
 aqctt->SQL->Add("SELECT *FROM catatan WHERE No IN(SELECT max(No)as No FROM catatan)");
 aqctt->Open();
 no=aqctt->FieldByName("No")->AsInteger;


 //tampilkan isi rak terakhir kali
 x=0;//putih
 while(pth>5)
 {
  pu++;
  kaleng[pu][0]=5;
  pth=pth-5;
  x++;
 }
 if(pth<6&&pth>0)
 {
  pu++;
  kaleng[pu][0]=pth;
  pth=0;
 }
 for(int x=pu;x>=0;x--)
 {
  lbputih->Items->Add(kaleng[x][0]);
 }
  x=0;//hitam
 while(htm>5)
 {
  ht++;
  kaleng[ht][1]=5;
  htm=htm-5;
  x++;
 }
 if(htm<6&&htm>0)
 {
  ht++;
  kaleng[ht][1]=htm;
  htm=0;
 }
 for(int x=ht;x>=0;x--)
 {
  lbhitam->Items->Add(kaleng[x][1]);
 }
   x=0;//merah
 while(mrh>5)
 {
  mr++;
  kaleng[mr][2]=5;
  mrh=mrh-5;
  x++;
 }
 if(mrh<6&&mrh>0)
 {
  mr++;
  kaleng[mr][2]=mrh;
  mrh=0;
 }
 for(int x=mr;x>=0;x--)
 {
  lbmerah->Items->Add(kaleng[x][2]);
 }
   x=0;//biru
 while(bru>5)
 {
  br++;
  kaleng[br][3]=5;
  bru=bru-5;
  x++;
 }
 if(bru<6&&bru>0)
 {
  br++;
  kaleng[br][3]=bru;
  bru=0;
 }
 for(int x=br;x>=0;x--)
 {
  lbbiru->Items->Add(kaleng[x][3]);
 }
   x=0;//
 while(kng>5)
 {
  ku++;
  kaleng[ku][4]=5;
  kng=kng-5;
  x++;
 }
 if(kng<6&&kng>0)
 {
  ku++;
  kaleng[ku][4]=kng;
  kng=0;
 }
 for(int x=ku;x>=0;x--)
 {
  lbkuning->Items->Add(kaleng[x][4]);
 }
   x=0;//
 while(jgg>5)
 {
  jg++;
  kaleng[jg][5]=5;
  jgg=jgg-5;
  x++;
 }
 if(jgg<6&&jgg>0)
 {
  jg++;
  kaleng[jg][5]=jgg;
  jgg=0;
 }
 for(int x=jg;x>=0;x--)
 {
  lbjingga->Items->Add(kaleng[x][5]);
 }
   x=0;//
 while(hjw>5)
 {
  hj++;
  kaleng[hj][6]=5;
  hjw=hjw-5;
  x++;
 }
 if(hjw<6&&hjw>0)
 {
  hj++;
  kaleng[hj][6]=hjw;
  hjw=0;
 }
 for(int x=hj;x>=0;x--)
 {
  lbhijau->Items->Add(kaleng[x][6]);
 }
   x=0;//abu
 while(abw>5)
 {
  ab++;
  kaleng[ab][7]=5;
  abw=abw-5;
  x++;
 }
 if(abw<6&&abw>0)
 {
  ab++;
  kaleng[ab][7]=abw;
  abw=0;
 }
 for(int x=ab;x>=0;x--)
 {
  lbabu->Items->Add(kaleng[x][7]);
 }
   x=0;//ungu
 while(ugu>5)
 {
  ug++;
  kaleng[ug][8]=5;
  ugu=ugu-5;
  x++;
 }
 if(ugu<6&&ugu>0)
 {
  ug++;
  kaleng[ug][8]=ugu;
  ugu=0;
 }
 for(int x=ug;x>=0;x--)
 {
  lbungu->Items->Add(kaleng[x][8]);
 }
   x=0;//coklat
 while(ckl>5)
 {
  ck++;
  kaleng[ck][9]=5;
  ckl=ckl-5;
  x++;
 }
 if(ckl<6&&ckl>0)
 {
  ck++;
  kaleng[ck][9]=ckl;
  ckl=0;
 }
 for(int x=ck;x>=0;x--)
 {
  lbcoklat->Items->Add(kaleng[x][9]);
 }
 egudang->Text=Gudang;ekaleng->Text=Kaleng;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::bstokClick(TObject *Sender)
{
int g;
ShowMessage("Jumlah persediaan cat di gudang yaitu "+egudang->Text+" kaleng");
 if(Gudang<2000)
  {
    ShowMessage("Penuhkan stok gudang!");
    g=2000-Gudang;
    Gudang=Gudang+g;
    egudang->Clear();
    if(Gudang>1999)
     {
      egudang->Clear();
      egudang->Text=Gudang;
      if(Kaleng<600)
        {
         bambil->Enabled=True;
         eambil->Enabled=True;
         eambil->SetFocus();
        }
      bstok->Enabled=False;
      ShowMessage("Input stok di toko dengan kapasitas maksimal 600 kaleng");
     }
     tbeli=tbeli+g;
  }
else
  {
    bstok->Enabled=False;
    bambil->Enabled=True;
    eambil->Enabled=True;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::bambilClick(TObject *Sender)
{
int x;
if(eambil->Text==0 || eambil->Text==' ')
 {
  ShowMessage("Masukkan jumlah kaleng cat!");
 }
else
 {
  int k=StrToInt(eambil->Text);
  if(k+Kaleng>600)
   {
     ShowMessage("Kapasitas maksimal 600 kaleng!");
   }
  else if(k>5)
   {
     ShowMessage("Kapasitas maksimum dalam satu baris pada rak hanya 5 kaleng cat!");
   }
  else
   {
     int r=cbwarna->ItemIndex;
          switch(r)
     {
      case 0 :  ht++,pu++,mr++,br++,ku++,jg++,hj++,ab++,ug++,ck++;
                kaleng[pu][0]=k;
                //putih
                lbputih->Clear();
                for(x=pu;x>=0;x--)
                  {
                    lbputih->Items->Add(kaleng[x][0]);
                  }
                //pth=pth+k;
                //hitam
                kaleng[ht][1]=k;
                lbhitam->Clear();
                for(x=ht;x>=0;x--)
                  {
                    lbhitam->Items->Add(kaleng[x][1]);
                  }
                //htm=htm+k;
                //merah
                kaleng[mr][2]=k;
                lbmerah->Clear();
                for(x=mr;x>=0;x--)
                  {
                    lbmerah->Items->Add(kaleng[x][2]);
                  }
                //mrh=mrh+k;
                //baru
                kaleng[br][3]=k;
                lbbiru->Clear();
                for(x=br;x>=0;x--)
                  {
                    lbbiru->Items->Add(kaleng[x][3]);
                  }
                //bru=bru+k;
                //kuning
                kaleng[ku][4]=k;
                lbkuning->Clear();
                for(x=ku;x>=0;x--)
                  {
                    lbkuning->Items->Add(kaleng[x][4]);
                  }
                //kng=kng+k;
                //jingga
                kaleng[jg][5]=k;
                lbjingga->Clear();
                for(x=jg;x>=0;x--)
                  {
                    lbjingga->Items->Add(kaleng[x][5]);
                  }
                //jgg=jgg+k;
                //hijau
                kaleng[hj][6]=k;
                lbhijau->Clear();
                for(x=hj;x>=0;x--)
                  {
                    lbhijau->Items->Add(kaleng[x][6]);
                  }
                //hjw=hjw+k;
                //abu
                kaleng[ab][7]=k;
                lbabu->Clear();
                for(x=ab;x>=0;x--)
                  {
                    lbabu->Items->Add(kaleng[x][7]);
                  }
                //abw=abw+k;
                //ungu
                kaleng[ug][8]=k;
                lbungu->Clear();
                for(x=ug;x>=0;x--)
                  {
                    lbungu->Items->Add(kaleng[x][8]);
                  }
                //ugu=ugu+k;
                //coklat
                kaleng[ck][9]=k;
                lbcoklat->Clear();
                for(x=ck;x>=0;x--)
                  {
                    lbcoklat->Items->Add(kaleng[x][9]);
                  }
                //ckl=ckl+k;
                Kaleng+=k*10;
                Gudang=Gudang-(k*10);
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
      case 1:   int p;
                if(pu<11||kaleng[pu][0]<5)
                 {
                  if(pu==-1)
                  {
                    pu++;
                    kaleng[pu][0]=k;
                  }
                  else
                  {
                   if(kaleng[pu][0]+k<=5)
                    {
                     kaleng[pu][0]=kaleng[pu][0]+k;
                    }
                   else if(kaleng[pu][0]+k>5)
                    {
                     p=5-kaleng[pu][0];
                     pu++;
                     kaleng[pu][0]=k-p;
                     kaleng[pu-1][0]=5;
                    }
                   else
                    {
                     pu++;
                     kaleng[pu][0]=k;
                    }
                   Kaleng+=k;
                   Gudang=Gudang-k;
                 }
                   lbputih->Clear();
                   for(x=pu;x>=0;x--)
                    {
                     lbputih->Items->Add(kaleng[x][0]);
                    }
                   pth=pth+k;
                }
                if(pu>=11&&kaleng[pu][0]>=5)
                {
                 ShowMessage("Rak cat warna putih penuh!");
                }
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
      case 2:   int t;
                if(ht<11||kaleng[ht][1]<5)
                 {
                  if(ht==-1)
                   {
                    ht++;
                    kaleng[ht][1]=k;
                   }
                  else
                  {
                  if(kaleng[ht][1]+k<=5)
                    {
                     kaleng[ht][1]=kaleng[ht][1]+k;
                    }
                   else if(kaleng[ht][1]+k>5)
                    {
                     t=5-kaleng[ht][1];
                     ht++;
                     kaleng[ht][1]=k-t;
                     kaleng[ht-1][1]=5;
                    }
                   else
                    {
                     ht++;
                     kaleng[ht][1]=k;
                    }
                   Kaleng+=k;
                   Gudang=Gudang-k;
                 }
                   lbhitam->Clear();
                   for(x=ht;x>=0;x--)
                    {
                     lbhitam->Items->Add(kaleng[x][1]);
                    }
                }
                if(ht>=11&&kaleng[ht][1]>4)
                    {
                      ShowMessage("Rak cat warna hitam sudah penuh!");
                    }
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
      case 3:   int m;
                if(mr<11||kaleng[mr][2]<5)
                 {
                  if(mr==-1)
                   {
                    mr++;
                    kaleng[mr][2]=k;
                   }
                  else
                   {
                    if(kaleng[mr][2]+k<=5)
                    {
                     kaleng[mr][2]=kaleng[mr][2]+k;
                    }
                   else if(kaleng[mr][2]+k>5)
                    {
                     m=5-kaleng[mr][2];
                     mr++;
                     kaleng[mr][2]=k-m;
                     kaleng[mr-1][2]=5;
                    }
                   else
                    {
                      mr++;
                      kaleng[mr][2]=k;
                    }
                    Kaleng+=k;
                    Gudang=Gudang-k;
                   }
                    lbmerah->Clear();
                    for(x=mr;x>=0;x--)
                     {
                      lbmerah->Items->Add(kaleng[x][2]);
                     }
                 }
                 if(mr>=11&&kaleng[mr][2]>4)
                     {
                      ShowMessage("Rak cat warna merah sudah penuh!");
                     }
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
      case 4:   int b;
                if(br<11||kaleng[br][3]<5)
                 {
                  if(br==-1)
                   {
                    br++;
                    kaleng[br][3]=k;
                   }
                  else
                   {
                   if(kaleng[br][3]+k<=5)
                    {
                     kaleng[br][3]=kaleng[br][3]+k;
                    }
                   else if(kaleng[br][3]+k>5)
                    {
                     b=5-kaleng[br][3];
                     br++;
                     kaleng[br][3]=k-b;
                     kaleng[br-1][3]=5;
                    }
                   else
                    {
                     br++;
                     kaleng[br][3]=k;
                    }
                   Kaleng+=k;
                   Gudang=Gudang-k;
                  }
                   lbbiru->Clear();
                   for(x=br;x>=0;x--)
                    {
                     lbbiru->Items->Add(kaleng[x][3]);
                    }
                }
                if(br>=11&&kaleng[br][3]>4)
                    {
                     ShowMessage("Rak cat warna biru sudah penuh!");
                    }
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
      case 5:   int kn;
                if(ku<11||kaleng[ku][4]<5)
                 {
                  if(ku==-1)
                   {
                    ku++;
                    kaleng[ku][4]=k;
                   }
                  else
                   {
                    if(kaleng[ku][4]+k<=5)
                    {
                     kaleng[ku][4]=kaleng[ku][4]+k;
                    }
                   else if(kaleng[ku][4]+k>5)
                    {
                     kn=5-kaleng[ku][4];
                     ku++;
                     kaleng[ku][4]=k-kn;
                     kaleng[ku-1][4]=5;
                    }
                   else
                    {
                     ku++;
                     kaleng[ku][4]=k;
                    }
                   Kaleng+=k;
                   Gudang=Gudang-k;
                  }
                   lbkuning->Clear();
                   for(x=ku;x>=0;x--)
                    {
                     lbkuning->Items->Add(kaleng[x][4]);
                    }
                 }
                 if(ku>=11&&kaleng[ku][4]>4)
                    {
                      ShowMessage("Rak cat warna kuning sudah penuh!");
                    }
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
      case 6:   int j;
                if(jg<11||kaleng[jg][5]<5)
                 {
                  if(jg==-1)
                   {
                    jg++;
                    kaleng[jg][5]=k;
                   }
                  else
                   {
                    if(kaleng[jg][5]+k<=5)
                    {
                     kaleng[jg][5]=kaleng[jg][5]+k;
                    }
                   else if(kaleng[jg][5]+k>5)
                    {
                     j=5-kaleng[jg][5];
                     jg++;
                     kaleng[jg][5]=k-j;
                     kaleng[jg-1][5]=5;
                    }
                   else
                    {
                     jg++;
                     kaleng[jg][5]=k;
                    }
                   Kaleng+=k;
                   Gudang=Gudang-k;
                  }
                   lbjingga->Clear();
                   for(x=jg;x>=0;x--)
                    {
                     lbjingga->Items->Add(kaleng[x][5]);
                    }
                 }
                 if(jg>=11&&kaleng[jg][5]>4)
                    {
                      ShowMessage("Rak cat warna jingga sudah penuh!");
                    }
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
        case 7: int h;
                if(hj<11||kaleng[hj][6]<5)
                 {
                  if(hj==-1)
                   {
                    hj++;
                    kaleng[hj][6]=k;
                   }
                  else
                   {
                    if(kaleng[hj][6]+k<=5)
                    {
                     kaleng[hj][6]=kaleng[hj][6]+k;
                    }
                   else if(kaleng[hj][6]+k>5)
                    {
                     h=5-kaleng[hj][6];
                     hj++;
                     kaleng[hj][6]=k-h;
                     kaleng[hj-1][6]=5;
                    }
                   else
                    {
                     hj++;
                     kaleng[hj][6]=k;
                    }
                   Kaleng+=k;
                   Gudang=Gudang-k;
                  }
                   lbhijau->Clear();
                   for(x=hj;x>=0;x--)
                    {
                     lbhijau->Items->Add(kaleng[x][6]);
                    }
                 }
                 if(hj>=11&&kaleng[hj][6]>4)
                    {
                     ShowMessage("Rak cat warna hijau sudah penuh!");
                    }
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
        case 8: int a;
                if(ab<11||kaleng[ab][7]<5)
                 {
                  if(ab==-1)
                   {
                    ab++;
                    kaleng[ab][7]=k;
                   }
                  else
                   {
                    if(kaleng[ab][7]+k<=5)
                     {
                      kaleng[ab][7]=kaleng[ab][7]+k;
                     }
                    else if(kaleng[ab][7]+k>5)
                     {
                      a=5-kaleng[ab][7];
                      ab++;
                      kaleng[ab][7]=k-a;
                      kaleng[ab-1][7]=5;
                     }
                    else
                     {
                      ab++;
                      kaleng[ab][7]=k;
                     }
                    Kaleng+=k;
                    Gudang=Gudang-k;
                   }
                    lbabu->Clear();
                    for(x=ab;x>=0;x--)
                     {
                      lbabu->Items->Add(kaleng[x][7]);
                     }
                }
                if(ab>=11&&kaleng[ab][7]>4)
                     {
                     ShowMessage("Rak cat warna abu sudah penuh!");
                     }
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
        case 9: int u;
                if(ug<11||kaleng[ug][8]<5)
                 {
                  if(ug==-1)
                   {
                    ug++;
                    kaleng[ug][8]=k;
                   }
                  else
                   {
                    if(kaleng[ug][8]+k<=5)
                    {
                     kaleng[ug][8]=kaleng[ug][8]+k;
                    }
                   else if(kaleng[ug][8]+k>5)
                    {
                     u=5-kaleng[ug][8];
                     ug++;
                     kaleng[ug][8]=k-u;
                     kaleng[ug-1][8]=5;
                    }
                   else
                    {
                     ug++;
                     kaleng[ug][8]=k;
                    }
                   Kaleng+=k;
                   Gudang=Gudang-k;
                 }
                   lbungu->Clear();
                   for(x=ug;x>=0;x--)
                    {
                     lbungu->Items->Add(kaleng[x][8]);
                    }
                }
                if(ug>=11&&kaleng[ug][8]>4)
                    {
                     ShowMessage("Rak cat warna ungu sudah penuh!");
                    }
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
      case 10:  int c;
                if(ck<11||kaleng[ck][9]<5)
                 {
                  if(ck==-1)
                   {
                    ck++;
                    kaleng[ck][9]=k;
                   }
                  else
                   {
                    if(kaleng[ck][9]+k<=5)
                    {
                     kaleng[ck][9]=kaleng[ck][9]+k;
                    }
                   else if(kaleng[ck][9]+k>5)
                    {
                     c=5-kaleng[ck][9];
                     ck++;
                     kaleng[ck][9]=k-c;
                     kaleng[ck-1][9]=5;
                    }
                   else
                    {
                     ck++;
                     kaleng[ck][9]=k;
                    }
                   Kaleng+=k;
                   Gudang=Gudang-k;
                  }
                   lbcoklat->Clear();
                   for(x=ck;x>=0;x--)
                    {
                     lbcoklat->Items->Add(kaleng[x][9]);
                    }
                }
                if(ck>=11||kaleng[ck][9]>4)
                    {
                      ShowMessage("Rak cat warna coklat sudah penuh!");
                    }
                ekaleng->Clear();ekaleng->Text=Kaleng;
                egudang->Clear();egudang->Text=Gudang;
        break;
      default: ShowMessage("Pilih warna!");
        break;
     }
     if(Kaleng>299&&btutup->Enabled==False)
     {
      bbuka->Enabled=True;
     }
     if(Kaleng>599)
       {
         ShowMessage("Total kaleng cat sudah mencapai kapasitas maksimal toko");
         bambil->Enabled=False;
         bbuka->Enabled=True;
       }
     if(Gudang<2000)
       {
         bstok->Enabled=True;
         egudang->Enabled=True;
         if(Gudang<1000)
           {
             ShowMessage("Kapasitas cat di gudang tersisa "+egudang->Text+" kaleng, harap stok ulang");
             bstok->Enabled=True;
             egudang->Enabled=True;
             bambil->Enabled=False;
           }
       }
   }
 }
eambil->Clear();
eambil->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
ljam->Caption=Time();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::bbukaClick(TObject *Sender)
{
bbuka->Enabled=False;
bdatang->Enabled=True;
btutup->Enabled=True;
ljambuka->Visible=False;
Timer1->Enabled=True;
ljamtutup->Visible=False;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btutupClick(TObject *Sender)
{
int x;
//jumlah isi rak per warna
for(x=pu;x>=0;x--)
  {
    pth=pth+kaleng[x][0];
  }
for(x=ht;x>=0;x--)
  {
    htm=htm+kaleng[x][1];
  }
for(x=mr;x>=0;x--)
  {
    mrh=mrh+kaleng[x][2];
  }
for(x=br;x>=0;x--)
  {
    bru=bru+kaleng[x][3];
  }
for(x=ku;x>=0;x--)
  {
    kng=kng+kaleng[x][4];
  }
for(x=jg;x>=0;x--)
  {
    jgg=jgg+kaleng[x][5];
  }
for(x=hj;x>=0;x--)
  {
    hjw=hjw+kaleng[x][6];
  }
for(x=ab;x>=0;x--)
  {
    abw=abw+kaleng[x][7];
  }
for(x=ug;x>=0;x--)
  {
    ugu=ugu+kaleng[x][8];
  }
for(x=ck;x>=0;x--)
  {
    ckl=ckl+kaleng[x][9];
  }
eputih->Clear();ehitam->Clear();emerah->Clear();ekuning->Clear();ebiru->Clear();
ejingga->Clear();ehijau->Clear();eabu->Clear();eungu->Clear();ecoklat->Clear();
eputih->Text=pth;ehitam->Text=htm;emerah->Text=mrh;ekuning->Text=kng;ebiru->Text=bru;
ejingga->Text=jgg;ehijau->Text=hjw;eabu->Text=abw;eungu->Text=ugu;ecoklat->Text=ckl;
eno->Clear();
NO++;eno->Text=NO;
 //database persediaan
 aqwarna->Close();
 aqwarna->SQL->Clear();
 aqwarna->SQL->Add("INSERT INTO persediaan(No, Waktu, TotalGudang, Putih, Hitam, Merah, Biru, Kuning, Jingga, Hijau, Abu ,Ungu ,Coklat ,TotalRak)values('"+eno->Text+"','"+ltgl->Caption+"','"+egudang->Text+"','"+eputih->Text+"','"+ehitam->Text+"','"+emerah->Text+"','"+ebiru->Text+"','"+ekuning->Text+"','"+ejingga->Text+"','"+ehijau->Text+"','"+eabu->Text+"','"+eungu->Text+"','"+ecoklat->Text+"','"+ekaleng->Text+"')");
 aqwarna->ExecSQL();

 //database tabel catatan
 int tuangk=tbeli*30000;
 int modal=tjual*30000;
 sisa=Gudang+Kaleng;
 untung=tuangm-modal;
 no++;eno->Clear();eno->Text=no;
 ebeli->Text=tbeli;ejual->Text=tjual;esisa->Text=sisa;
 euangm->Text=tuangm;euangk->Text=tuangk;euntung->Text=untung;
 aqctt->Close();
 aqctt->SQL->Clear();
 aqctt->SQL->Add("INSERT INTO catatan(No,Waktu, CatDibeli, Pengeluaran, CatTerjual, PendapatanKotor, CatTersisa, PendapatanBersih, JumlahTransaksi)values('"+eno->Text+"','"+ltgl->Caption+"','"+ebeli->Text+"','"+euangk->Text+"','"+ejual->Text+"','"+euangm->Text+"','"+esisa->Text+"','"+euntung->Text+"','"+etottamu->Text+"')");
 aqctt->ExecSQL();
 Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::bdatangClick(TObject *Sender)
{
if(Kaleng<300)
 {
  ShowMessage("Persediaan di toko tersisa "+ekaleng->Text+" kaleng, ambil cat di gudang!");
  eambil->SetFocus();
  bambil->Enabled=True;
 }
else
 {
  Form1->Hide();
  //database select data
  Form3->aqrp->Close();
  Form3->aqrp->SQL->Clear();
  Form3->aqrp->SQL->Add("SELECT *FROM riwayatpenjualan WHERE No IN(SELECT max(No)as No FROM riwayatpenjualan)");
  Form3->aqrp->Open();
  No=Form3->aqrp->FieldByName("No")->AsInteger;
  Form3->Show();
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btglClick(TObject *Sender)
{
tgl=etgl->Text;
etgl->Clear();
ltgl->Caption=tgl;
 if(Gudang>=2000)
  {
   bstok->Enabled=False;
   bambil->Enabled=True;
   eambil->Enabled=True;
   egudang->Enabled=False;
  }
 else if(Gudang>=1000&&Gudang<2000)
  {
   bstok->Enabled=True;
   bambil->Enabled=True;
   eambil->Enabled=True;
  }
 else
  {
   bstok->Enabled=True;
   bambil->Enabled=False;
   eambil->Enabled=False;
  }
 if(Kaleng>299)
 {
  bbuka->Enabled=True;
  if(Kaleng>599)
    {
      bambil->Enabled=False;
      eambil->Enabled=False;
    }
 }
}
//---------------------------------------------------------------------------

