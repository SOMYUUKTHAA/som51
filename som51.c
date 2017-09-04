#include<stdio.h>
int main()
{
int a,b,c;
printf("ENTER  ANY THREE NUMBERS:");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>c && a>b)
printf("VALUE a IS BIG");
else if(b>c)
printf("VALUE b IS BIG");
else
printf("VALUE c IS BIG");
return 0;
}
