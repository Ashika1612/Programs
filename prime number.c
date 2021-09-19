#include <stdio.h>
int prime(int n,int i);
int main()
{
    int n,res;
    printf("Enter a number: ");
    scanf("%d", &n);
    res=prime(n,n/2);
    if (res==1)
    {
        printf("%d IS A PRIME NUMBER\n", n);
    }
    else
    {
        printf("%d IS NOT A PRIME NUMBER\n", n);
    }
    return 0;
}
 
int prime(int num,int i)
{
    if (i == 1)
    {
        return 1;
    }
    else if (num % i == 0)
	{
		return 0;
	}
	else
	{
		return prime(num,i-1);
	}
}
