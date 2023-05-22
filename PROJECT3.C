#include<stdio.h>
#include<conio.h>

main()

{
   char i;
   clrscr();
   printf("\n the alphabet from A to Z are : \n");

   i='A';

   do
   {
     printf("%c\t,",i);
     i++;
   } while(i<'Z');
   getch();
}