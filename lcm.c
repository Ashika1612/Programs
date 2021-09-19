#include<stdio.h>
int lcm(int,int); 
int main()
{
    int a,b,res;
    printf("INPUT FIRST NUMBER: ");
    scanf("%d",&a);
    printf("INPUT SECOND NUMBER: ");
    scanf("%d",&b);
    res=lcm(a,b);    
    printf("\nLCM OF %d AND %d IS: %d",a,b,res);
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
