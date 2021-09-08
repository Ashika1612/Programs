#include<stdio.h>
int main()
{
	int a,b;
	printf("Value of a before swapping:"); //taking input from the user
	scanf("%d",&a); //store the value of a.
	printf("Value of b before swapping:"); //taking input from the user
	scanf("%d",&b); // storing the value of b.
  //let's assume that a is 10 and b is 20.
	a=a+b; //a is 10, b is 20, so a+b would be 30. This 30 will be stored in a. now the value of a is 30 not 10.
	b=a-b; // a is 30, b is 20 so a-b would be 10. Now b's value is 10 not 20 and a is still 30.
	a=a-b; // a is 30, b is 10 so a-b would be 20. a's value is now 20. 
  // as we can see the value of a and b has been swapped 
	printf("\nValue of a after swapping: %d\n",a); //prints the value to the output screen.
	printf("Value of b after swapping: %d",b); //prints teh value to the output screen.
	return 0;	
}
