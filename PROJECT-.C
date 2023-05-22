#include<stdio.h>
#include<conio.h>

void main()
{
     clrscr();
     int a,n;
     printf("enternumber=");
     scanf("%d",&n);

     for(a=1;a<=10;a++)
     {
	printf("%d*%d=%d\m",n,a,n*a);
     }
     getch();
}

