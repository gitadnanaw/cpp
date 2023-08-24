#include <stdio.h>
#include <iostream>
using namespace std;

void reverse(char* string, int length){

    int i;
    for (i = 0; i < length/2; i++){
        string[length - 1 - i] ^= string[i] ;
        string[i] ^= string[length - 1 - i];
        string[length - 1 - i] ^= string[i];
    }   
}

int main () {

char string []= " nama saya";

char *ptr;
int i = 0;
int word = 0;
ptr = (char *)&string;
printf("%s\n", string);
int length=0;
while (*ptr++){
    ++length;
}
reverse(string, length);
printf("%s\n", string);

for (i=0;i<length;i++){
    if(string[i] == ' '){
       reverse(&string[word], i-word);
       word = i+1;
       }
}   
reverse(&string[word], i-word); //for last word             
printf("\n%s\n", string);
return 0;
}
