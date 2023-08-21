 #include<stdio.h>
 #include<string.h>

int main()
{
char *p,*s="balonku ada lima.",*t;
int i,j,a,l,count=0;

// program membalik kata (char) dari belakang ke depan

l=strlen(s);

p=&s[l-1];

t=&s[-1];
while(*t)
   {
      if(*t==' ')
     count++;
     t++;
   }
   a=count;
  while(l!=0)
   {
for(i=0;*p!=' '&&t!=p;p--,i++);
   p++;

  for(;((*p)!='.')&&(*p!=' ');p++)
    printf("%c",*p);
  printf(" ");
  if(a==count)
   {
     p=p-i-1;
     l=l-i;
   }
  else
   {
     p=p-i-2;
     l=l-i-1;
   }

count--;

  }
printf("\n");
printf("\n");
printf("follow me adnanaw_ on ig");
return 0;  
}
