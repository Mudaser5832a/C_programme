# include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter three integers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&b==c)
	{
		printf("all three number are equal.\n");
		
	}
	else if(a==b)
	{
		printf("first and second number are equal.\n");
		printf("largest=%d\n",a>b?b:b);
		
 	}
 	else if(a==c)
 	{
 		printf("first and third numbersare equal.\n");
 		printf("largest=5d\n",a>b?a:b);
	 }
	else if (b==c)
	{
		printf("second and third numbers are equal.\n");
		printf("largest=%d\n",b>a?b:a);
	}
	else if(a>b)
	{
		if(a>c)
		   printf("largest=%d\n",a);
		else
		   printf("largest=%d\n",c); 
	}
	else 
	{
		if(b>c)
		   printf("largest==%d\n",b);
		else
		   printf("largest=%d\n",c);
	}
	return 0;
}