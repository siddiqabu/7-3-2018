#include<stdio.h>
int main()
{
           int n,digit,mu=1;
           scanf("%d",&n);
           while(n!=0)
           {
           	digit=n%10;
           	mu=mu*digit;
           	n/=10;
           }
           printf("%d",mu);
	return 0;
}
