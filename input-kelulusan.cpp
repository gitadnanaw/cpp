#include<iostream>
#include<string.h>
using namespace std;

int main () {
		
		
		// Struct Nbi,Nama,& Alamat
	 	struct Data_Mhs
        {
                long int nbi;
                char nama[50],alamat[50];
        };
        
        int Nt,Np,Na,jmlmhs=0;
		Data_Mhs LOL[50];
		
		cout << "\n Masukkan Jumlah Mahasiswa = "; cin >> jmlmhs;
		
		// Perulangan (loops)
    	for(int a=1; a<=jmlmhs; a++)
        { 
        		
        		// Input Data
                cout << "\n Input data mahasiswa ke - " << a << ":" << endl;
                cout << " Nbi		: "; cin >> LOL[a].nbi;
                cout << " Nama		: "; cin >> LOL[a].nama;
                cout << " Alamat		: "; cin >> LOL[a].alamat;
                cout << " Nilai teori	: "; cin >> Nt;
                cout << " Nilai prak	: "; cin >> Np;
                
                		// Fungsi menghitung nilai akhir
      				  	Na = (Nt*70/100) + (Np*30/100);
				    	

       				 	 
		// Seleksi Nilai Akhir & Output Hasil
       if( Na > 45)
       {
	   cout<<" Total Nilai Akhir : "<<Na<<" .......Dan Selamat, Anda dinyatakan Lulus."<<endl;
       }
       else
       {
	   cout<<" Total Nilai Akhir : "<<Na<<" .......Mohon maaf, Anda dinyatakan tidak lulus."<<endl;
	
       }
}

}
                          	

