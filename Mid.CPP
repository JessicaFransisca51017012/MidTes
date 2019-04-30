#include <iostream.h>
#include <conio.h>
void main(){
char nama[30], nim[8], skor, NilaiHuruf;
int nt1, nt2, nt3, nm, nf, tnt, c, d, e, NA;
cout<<"Nama mahasiswa : "; cin>>nama;
cout<<"Nim            : "; cin>>nim;
cout<<"Nilai tugas 1  : "; cin>>nt1;
cout<<"Nilai tugas 2  : "; cin>>nt2;
cout<<"Nilai tugas 3  : "; cin>>nt3;
cout<<"Nilai mid      : "; cin>>nm;
cout<<"Nilai final    : "; cin>>nf;
tnt = (nt1+nt2+nt3)/3;
c = tnt*20/100;
d = nm*40/100;
e = nf*40/100;
NA = c + d + e;

cout<<"\nNama        : "<<nama;
cout<<"\nNim         : "<<nim;
cout<<"\nNilai Akhir : "<<NA;
cout<<"\nNilai Huruf : "<<NilaiHuruf;

if (NA >= 80){
   cout<< "A";
   }
else
if (NA >= 70){
   cout<< "B";
   }
else
if (NA >= 60){
   cout<< "C";
   }
else
if (NA >= 50){
   cout<< "D";
   }
else
   cout<< "E";{
   }
getch();
}
