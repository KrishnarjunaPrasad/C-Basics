//printing all the arthmetical operations
#include<stdio.h>
void main()
{
	int a, b, s, d, p, div, moddiv;
	a=12;
	b=25;
	s=a+b;                 //adittion
	d=a-b;                //subtracation
	p=a*b;               // multipilication
	div=a/b;            // division
	moddiv=a%b;        // percentage
	printf("sum of %d and %d is %d\n", a,b,s);
	printf("difference of %d and %d is %d\n",a,b,d);
	printf("product of %d and %d is %d is %d\n", a,b,p);
	printf("division of %d and %d and %d\n", a,b,div);
	printf("moudle division of %d and %d is %d", a,b,moddiv);

}
