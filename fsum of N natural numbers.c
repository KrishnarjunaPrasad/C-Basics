// sum of first n natural numbers
#include<stdio.h>
void main()
{
	int n, sum, odd, even;
	n= 20;
	sum = n*(n+1)/2 ;            // sum of n natural numbers
	odd = n*(n-1);
	even = n*(n);
	printf("sum of %d natural numbers is %d\n", n,sum);
	printf("sum of first %d odd numbers is %d\n", n, odd);
	printf("sum of first %d even natural numbers is %d", n, even);
}
