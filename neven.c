/* step-1: start
step-2: print "How many even numbers you want to print? : "
step-3: read Count
step-4: print "The first " + Count + " even numbers are "
step-5: EvenCounter  = 1
step-6: EvenNumber = 0
step-7: if EvenCounter < Count:
           print EvenNumber + ", "
           EvenNumber = EvenNumber + 2
           EvenCounter = EvenCounter + 1
           goto step-7
step-8: print EvenNumber + ".\n"
step-9: stop
*/

#include<stdio.h>

int main()
{
	int count, evencounter, evennumber;

	printf("Hou many even numbers you want to print? : ");
	scanf("%i", &count);
	printf("The first %i even numbers are ", count);


	evencounter = 0;
	evennumber = 0;

	while(evencounter < count - 1)
	{
	  printf("%i,", evennumber);
	  //evennumber = evennumber + 2;
	  evencounter = evencounter + 1;
	  evennumber = evennumber + 2;
	}

	printf("%i.\n", evennumber);

	return 0;
}           