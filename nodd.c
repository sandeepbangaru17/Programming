/* step-1: start
step-2: print "How many odd numbers you want to print? : "
step-3: read Count
step-4: print "The first " + Count + " odd numbers are "
step-5: OddCounter  = 1
step-6: OddNumber = 1
step-7: if OddCounter < Count:
           print OddNumber + ", "
           OddNumber = OddNumber + 2
           OddCounter = OddCounter + 1
           goto step-7
step-8: print OddNumber + ".\n"
step-9: stop
*/

#include<stdio.h>

int main()
{
	int count, oddcounter, oddnumber;

	printf("Hou many odd numbers you want to print? : ");
	scanf("%i", &count);
	printf("The first %i odd numbers are ", count);


	oddcounter = 1;
	oddnumber = 1;

	while(oddcounter < count)
	{
	  printf("%i,", oddnumber);
	  oddnumber = oddnumber + 2;
	  oddcounter = oddcounter + 1;
	}

	printf("%i.\n", oddnumber);

	return 0;
}           