#include <iostream>
#include<conio.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main(){
char nama[20][30],grade[20];
int t,i,j,rr,rdh,total,tgs[20],uts[20],uas[20],akhir[20];

cout<<"KELOMPOK :"<< endl;
cout<<"1. Devi Fitriana (146210090)"<< endl;
cout<<"2. Acxell Rizada Sudigto (1462100131)"<< endl;
cout<<"3. Tengku Bintang Zaky Irmaysa (1462100133)"<< endl;
cout<<"4. Adnan Wahabi (1462100077)"<< endl;
cout<<"5. Novi sri utami (1462100111)"<< endl<<endl;

cout<<"------------------------------------------"<< endl<<endl;
cout<<" PROGRAM DAFTAR NILAI "<<endl;
cout<<" Matakuliah: Dasar - Dasar Pemrograman "<<endl<<endl;

cout<<" Masukan Jumlah Mahasiswa : ";cin>>j;
cout<<endl;


for(i=1;i<=j;i++)
{
cout<<" Mahasiswa Ke - "<<i<<endl;
cout<<" Nama Mahasiswa : ";cin>>(nama[i]);
cout<<" Nilai Tugas : ";cin>>tgs[i];
cout<<" Nilai UTS : ";cin>>uts[i];
cout<<" Nilai UAS : ";cin>>uas[i];
akhir[i]=(tgs[i]*0.3)+(uas[i]*0.3)+(uas[i]*0.4);
total += akhir[i];
if(akhir[i]>=80)
grade[i]='A';
else if(akhir[i]>=70&&akhir[i]<80)
grade[i]='B';
else if(akhir[i]>=59&&akhir[i]<70)
grade[i]='C';
else if(akhir[i]>=50&&akhir[i]<59)
grade[i]='D';
else
grade[i]='E';
cout<<endl;
}

cout<<" DAFTAR NILAI "<<endl;
cout<<" MATERI : PEMROGRAM "<<endl;

cout<<"--------------------------------------------------------- "<<endl;
cout<<"No.  Nama                     Nilai "<<endl;
cout<<"     Mahasiswa     -----------------------------    Grade "<<endl;
cout<<"                   Tugas   UTS     UAS     Akhir "<<endl;
cout<<"--------------------------------------------------------- "<<endl;
for(i=1;i<=j;i++)
{
cout<<setiosflags(ios::left)<<setw(5)<<i;
cout<<setiosflags(ios::left)<<setw(14)<<nama[i];
cout<<setiosflags(ios::left)<<setw(8)<<tgs[i];
cout<<setiosflags(ios::left)<<setw(8)<<uts[i];
cout<<setiosflags(ios::left)<<setw(8)<<uas[i];
cout<<setiosflags(ios::left)<<setw(10)<<akhir[i];
cout<<setiosflags(ios::left)<<setw(8)<<grade[i]<<endl;
}

cout<<"--------------------------------------------------------- "<<endl;
rr= total/j;
t=akhir [0];
rdh=akhir [1];


for (int i=1; i<=j; i++){
	if (akhir [i] > t){
		t = akhir[i];
	}
}
for (int i=1; i<=j; i++){
	if (akhir [i] < rdh){
		rdh = akhir[i];
	}
}
cout << "\t\tNilai Rata	: "<<rr;
cout<<endl;
cout << "\t\tTertinggi	: "<<t;
cout<<endl;
cout << "\t\tNilai terendah	: "<<rdh;
cout<< endl;
getch();

return 0;
}
