#include<stdio.h>

main()

{
	int n,sum=0,lastdigit,firstdigit;
	printf("enter number=");
	scanf("%d",&n);
	
	lastdigit=n % 10;
	
	while(n>=10)
	{
		n /=10;
	}
	
	firstdigit =n;
	
	sum = firstdigit +lastdigit;
	
	printf("sum is=%d",sum);
}
	
