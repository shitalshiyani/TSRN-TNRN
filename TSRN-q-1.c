#include<stdio.h>

division()
{
	int a;
	printf("Enter value of A=");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("%d is Divisible of 3 & 5",a);
	}
	else
	{
		printf("%d is not Divisible of 3 & 5",a);
	}
	
}

main()
{
	division();
		
}
