#include <iostream>

using namespace std;

typedef struct orang
{
    char nama[30];
    short umur;
}
org;
main(){
    org saya[1];
    int i,x;
    for(i=0; i<=	1; i++)
    {
        cout<<"Nama : ";cin>>saya[i].nama;
        cout<<"Umur : ";cin>>saya[i].umur;
        cout<<endl;
    }
   for(x=0; x<=1; x++)
   {
       cout<<"Data ke ["<<x<<"] "<<"bernama "<<saya[x].nama<<" dan berumur "<<saya[x].umur<<" tahun";
       cout<<endl;
   }
}
