#include<iostream>
#include<string.h>
using namespace std;

int main () {
	
	int nbi,Nt,Np,Na,jmlmhs=0;
	char nama [50], alamat [50];
	
	cout << "jumlah hitung = "; cin >> jmlmhs;
    	for(int a=1; a<=jmlmhs; a++)
        {
                cout << "input data mahasiswa ke - " << a << ":" << endl;
                cout << "nbi : "; cin >> nbi;
                cout << "nama : "; cin >> nama;
                cout << "alamat : "; cin >> alamat;
                cout << "nilai teori : "; cin >> Nt;
                cout << "nilai prak : "; cin >> Np;
                          
        }	
}
