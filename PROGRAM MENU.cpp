#include<iostream>
using namespace std;
main()
{
 int pilih;
cout <<"||==================================================================||"<<endl;
cout <<"||                Selamat Datang di Program MENU  !                 ||"<<endl;
cout <<"||==================================================================|| \n"<<endl;
 cout<<" MENU UTAMA : \n\n";
 cout<<"1. ARITMATIKA\n";
 cout<<"2. LOGIKA \n\n";
 cout<<"Masukkan Pilihan = ";cin>>pilih;
 
 if(pilih==1)
 {

int pilihan,a,b,c,d;
menu:
cout<<"\n";
cout<<"============================\n";
cout<<" MENU PILIHAN ARITMATIKA\n";
cout<<"============================\n";
cout<<"\n";
cout<<"[1] Penjumlahan\n";
cout<<"[2] Pengurangan\n";
cout<<"[3] Perkalian\n";
cout<<"[4] Pembagian\n";
cout<<"\n";
cout<<"Masukkan Pilihan anda :";
cin>>pilihan;
switch(pilihan){
case 1:
cout<<"============================\n";
cout<<" PENJUMLAHAN \n";
cout<<"============================\n";
cout<<"\n";
cout<<"Masukkan nilai a = ";
cin>>a;
cout<<"Masukkan nilai b = ";
cin>>b;
c=a+b;
cout<<"============================\n";
cout<<"\n";
cout<<"a + b = ";
cout<<c<<"\n";

goto menu;
case 2:
cout<<"============================\n";
cout<<" PENGURANGAN \n";
cout<<"============================\n";
cout<<"\n";
cout<<"Masukkan nilai a = ";
cin>>a;
cout<<"Masukkan nilai b = ";
cin>>b;
c=a-b;
cout<<"============================\n";
cout<<"\n";
cout<<"a - b = ";
cout<<c<<"\n";

goto menu;
case 3:
cout<<"============================\n";
cout<<" PERKALIAN \n";
cout<<"============================\n";
cout<<"\n";
cout<<"Masukkan nilai a = ";
cin>>a;
cout<<"Masukkan nilai b = ";
cin>>b;
c=a*b;
cout<<"============================\n";
cout<<"\n";
cout<<"a x b = ";
cout<<c<<"\n";

goto menu;
case 4:
cout<<"============================\n";
cout<<" PEMBAGIAN \n";
cout<<"============================\n";
cout<<"\n";
cout<<"Masukkan nilai a = ";
cin>>a;
cout<<"Masukkan nilai b = ";
cin>>b;
c=a/b;
cout<<"============================\n";
cout<<"\n";
cout<<"a : b = ";
cout<<c<<"\n";
   
 }

}
 else if(pilih==2)
 {
int pilihan,a,b,c,d;
menulogika:
cout<<"\n";
cout<<"============================\n";
cout<<" MENU PILIHAN LOGIKA\n";
cout<<"============================\n";
cout<<"\n";
cout<<"[1] AND\n";
cout<<"[2] OR\n";
cout<<"[3] XOR\n";

cout<<"\n";
cout<<"Masukkan Pilihan :";
cin>>pilihan;
switch(pilihan){
case 1:
cout<<"============================\n";
cout<<" Logika AND \n";
cout<<"============================\n";
cout<<"\n";
cout<<"Masukkan input a = ";
cin>>a;
cout<<"Masukkan input b = ";
cin>>b;
c=a&&b;
cout<<"============================\n";
cout<<"\n";
cout<<"Nilai Output = ";
cout<<c<<"\n";

goto menulogika;
case 2:
cout<<"============================\n";
cout<<" Logika OR \n";
cout<<"============================\n";
cout<<"\n";
cout<<"Masukkan input a = ";
cin>>a;
cout<<"Masukkan input b = ";
cin>>b;
c=a||b;
cout<<"============================\n";
cout<<"\n";
cout<<"Nilai Output = ";
cout<<c<<"\n";

goto menulogika;
case 3:
cout<<"============================\n";
cout<<" XOR \n";
cout<<"============================\n";
cout<<"\n";
cout<<"Masukkan input a = ";
cin>>a;
cout<<"Masukkan input b = ";
cin>>b;
c=a^b;
cout<<"============================\n";
cout<<"\n";
cout<<"Nilai Output = ";
cout<<c<<"\n";

   
 }
 return 0;
}
}

