#include<iostream>
#include<string.h>
using namespace std;

// Nama	: Adnan Wahabi
// Nbi	: 1462100077

int main()
{
        struct DataMhs
        {
                long int nim;
                char nama[50],jurus[50],gender[50]; 
                int tgl,bln,thn;
        };
		
        int i, j, BykMhs;
        DataMhs mahasiswa[50];
        DataMhs temp;
        cout<<"\n ================================================"<<endl;
        cout<<" TUGAS PRAKTIKUM DASAR PROGRAMANAN UNTAG SURABAYA";
        cout<<"\n ================================================"<<endl;
        cout<<"\n Masukkan jumlah input mahasiswa : "; cin>>BykMhs;
        //input data
        for(int a=1; a<=BykMhs; a++)
        {
                cout << "\n input data mahasiswa ke - " << a << ":" << endl;
				cout<<" Nim : "; cin>>mahasiswa[a].nim;
                cout<<" nama : "; cin>>mahasiswa[a].nama;
                
                  cout<<" Tanggal Lahir : ";cin>>mahasiswa[a].tgl;
                  cout<<" Bulan Lahir : ";cin>>mahasiswa[a].bln;
                  cout<<" Tahun Lahir : ";cin>>mahasiswa[a].thn;
                  
                cout<<" Jurusan : "; cin>>mahasiswa[a].jurus;
                cout<<" Jenis kelamin L|P : "; cin>>mahasiswa[a].gender;
                
        }
                //sorting (buble sort) berdasarkan nim
                for(i=0; i<=BykMhs-1; i++)
                {
                        for(j=0; j<=BykMhs-1-i; j++)
                        {
                                if(mahasiswa[j].nim>mahasiswa[j+1].nim)
                                {
                                        //shorting nim
                                        temp.nim=mahasiswa[j].nim;
                                        mahasiswa[j].nim=mahasiswa[j+1].nim;
                                        mahasiswa[j+1].nim=temp.nim;
                                        //shorting nama
                                        strcpy(temp.nama, mahasiswa[j].nama);
                                        strcpy(mahasiswa[j].nama, mahasiswa[j+1].nama);
                                        strcpy(mahasiswa[j+1].nama, temp.nama);
                                        //shorting tgl
                                        temp.tgl=mahasiswa[j].tgl;
                                        mahasiswa[j].tgl=mahasiswa[j+1].tgl;
                                        mahasiswa[j+1].tgl=temp.tgl;
                                        //shorting bulan
                                        temp.bln=mahasiswa[j].bln;
                                        mahasiswa[j].bln=mahasiswa[j+1].bln;
                                        mahasiswa[j+1].bln=temp.bln;
                                        //shorting tahun
                                        temp.thn=mahasiswa[j].thn;
                                        mahasiswa[j].thn=mahasiswa[j+1].thn;
                                        mahasiswa[j+1].thn=temp.thn;
                                        //shorting jurusan
                                        strcpy(temp.jurus, mahasiswa[j].jurus);
                                        strcpy(mahasiswa[j].jurus, mahasiswa[j+1].jurus);
                                        strcpy(mahasiswa[j+1].jurus, temp.jurus);
                                        //shorting gender
                            			strcpy(temp.gender, mahasiswa[j].gender);
                                        strcpy(mahasiswa[j].gender, mahasiswa[j+1].gender);
                                        strcpy(mahasiswa[j+1].gender, temp.gender);

                                }
                        }
                }
                //data setelah urut
                cout<<"\n ======================================"<<endl;
                cout<<" DATA SETELAH URUT DARI NIM\n"<<endl;
                for(int b=1; b<=BykMhs; b++)
                {
                	cout <<"\n Data mahasiswa ke - " << b << endl;
			   		 cout<<" Nim : "<<mahasiswa[b].nim<<endl;
                     cout<<" Nama : "<<mahasiswa[b].nama<<endl;
                     
                     cout <<" Tanggal Lahir : ";
                     cout << mahasiswa[b].tgl << "-" << mahasiswa[b].bln << "-" << mahasiswa[b].thn<<endl;
                     	 
                     cout<<" Jurusan : "<<mahasiswa[b].jurus<<endl;
                     cout<<" Jenis kelamin L|P : "<<mahasiswa[b].gender<<endl;
                }
        return 0;
}
