#include<stdio.h>
int sum(int s);
int main()
{
int n,res;
printf("ENTER THE NUMBER: ");
scanf("%d",&n);
res=sum(n);
printf("\nSUM OF DIGITS OF %d IS %d",n,res);
return 0;
}
int sum(int n)
{
if(n!=0)
{
return(n%10 + sum(n/10));
}
else
{
return 0;
}
}
