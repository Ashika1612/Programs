#include<stdio.h>
int lcm(int,int); 
int main()
{
    int a,b,res;
    printf("Enter 2 integers to find LCM of: ");
    scanf("%d%d",&a,&b);
    res=lcm(a,b);    
    printf(" LCM of %d and %d is: %d",a,b,res);
    return 0;
}

int lcm(int a,int b) 
{
    static int temp = 1;    
    if(temp%a==0 && temp%b==0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcm(a,b);
        return temp;
    }
}
