#include <iostream>
#include <string>

using namespace std;

int main (){
	string nama;
	string alamat;
	string nim;
	string jurusan;
	
	cout<<"\n===============mulai==============="<<endl<<endl;
	cout<<" Masukan Data Anda : "<<endl<<endl;
	cout<<" Nama         : ";
	getline (cin, nama); 
	 
	cout<<" Alamat       : ";
	getline (cin, alamat); 
	 
	cout<<" Tahun Lahir  : ";
	getline (cin, jurusan); 
	
	cout<<endl;
	cout<<" Data Anda Adalah"<<endl; 
	
	cout<<" Nama         : "<<nama<<endl;
	cout<<" Alamat       : "<<alamat<<endl;
	cout<<" Tahun Lahir  : "<<jurusan<<endl;
	
	cout<<"\n===============selesai==============="<<endl;
}
