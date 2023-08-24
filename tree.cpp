#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

struct tree{
	int NBI;
	char nama[30];
	
	tree *kanan, *kiri;
};

int dat;
tree *akar = NULL, *baru;

void post_order(tree *pohon);
void in_order(tree *pohon);

void menambah(){
	cout << "Input NBI  : ";
	cin >> dat;
	cout << "Input Nama : ";
	scanf(" %[^\n]s", &baru->nama);
	
} 

void tambah(){
	
	tree *simpul, *node;
	baru = new tree;
	baru->kiri = baru->kanan = NULL;
	menambah();
	baru->NBI = dat;
	
	if (akar == NULL){
		akar = baru;
	} else {
		simpul = node = akar;
		while(simpul != NULL && simpul->NBI != baru->NBI){
			node = simpul;
			if (simpul->NBI < baru->NBI){
				simpul=simpul->kanan;
			} else {
				simpul=simpul->kiri;
			}
		}
		if( node->NBI == baru->NBI ){
			cout<<"Data sudah ada";
		} else{
			if (node->NBI > baru->NBI){
				node->kiri=baru;
			} else{
				node->kanan=baru;
			}
		}
	} 	
}

int main(){
	int pil;
	while (pil != 5){
		system("cls");
		cout << "1. Tambah Urut" << endl;
		cout << "2. Tampil PRE_ORDER" << endl;
		cout << "3. Tampil IN_ORDER" << endl;
		cout << "4. Tampil POST_ORDER" << endl;
		cout << "5. Exit" << endl;
		cout << "Pilihan Anda = ";
		cin >> pil;
		
		if (pil == 1){
			tambah();
		} else if (pil == 2){
			
		} else if (pil == 3){
			in_order(akar);
		} else if (pil == 4){
			post_order(akar);		
		}
		getch();
	}
}

void in_order(tree *pohon){
	
	if(pohon!=NULL){
		
    in_order(pohon->kiri);
    cout<<pohon->NBI<< " : " << pohon->nama <<"  " << endl;
    in_order(pohon->kanan);
	
	}
}

void post_order(tree *pohon){
	if(pohon!=NULL){
		
    post_order(pohon->kiri);
    post_order(pohon->kanan);
    cout<<pohon->NBI<< " : " << pohon->nama <<"  " << endl;
    
	}
}

