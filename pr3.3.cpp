#include<stdio.h>

main()

{
	int c=0,n;
	printf("enter number=");
	scanf("%d",&n);
	
	do
	{
		n /=10;
		c++;
	}while(n  !=0);
	
	printf("number of digit=%d",c);
}
	
