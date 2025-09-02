/*step-1: start
step-2: print "To add two numbers.\n"
step-3: print "Enter the first number: "
step-4: read Number1
step-5: print "Enter the second number: "
step-6: read Number2
step-7: Sum = Number1 + Number2
step-8: print "The sum of " + Number1 + " and " + Number2 + " is " + Sum + ".\n"
step-9: stop
*/

#include<stdio.h>

int main()
{
	 
	 int Number1, Number2, Sum;

	 printf("To add two numbers.\n");
	 printf("Enter the first number: ");
	 scanf("%i", &Number1);
	 printf("Enter the second number: ");
	 scanf("%i", &Number2);
	 Sum = Number1 + Number2;
	 printf("The sum of %i and %i is %i .\n", Number1, Number2, Sum);


	 return 0;
}