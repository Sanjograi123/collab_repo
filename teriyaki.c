#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter first,second and third number");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("largest value is %f",a);
		else
		printf("largest value is %f",b);
	}
	getch();
}
