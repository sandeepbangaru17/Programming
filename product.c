/*step-1: start
step-2: print "To multiply three numbers.\n"
step-3: print "Enter the first number: "
step-4: read Number1
step-5: print "Enter the second number: "
step-6: read 
step-7: print "Enter the third number: "
step-8: read Number3
step-9: Product = Number1 * Number2 * Number3
step-10: print "The product of " + Number1 + ", " + Number2 + " and " + Number3 + " is " + Product + ".\n"
step-11: stop
*/

#include<stdio.h>
 
int main()
{

	int Number1, Number2, Number3, Product;

	printf("To multiply three numbers.\n");
	printf("Enter the first number: ");
	scanf("%i", &Number1);
	printf("Enter the second number: ");
	scanf("%i", &Number2);
	printf("Enter the third number: ");
	scanf("%i", &Number3);
	Product = Number1 * Number2 * Number3;
	printf("The product of %i, %i and %i is %i.\n", Number1, Number2, Number3, Product);

	return 0;
}