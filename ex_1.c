/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3 
   ROLL NO - 131
   DATE - 12/09/2026*/

// This is ANSI C book's ch7 - array's 1st programming example//

#include<stdio.h>
int main()
{
	int i;
	float x[10],value,total;

	printf("ENTER 10 NUMBERS\n");

	for(i=0;i<10;i++)
	{
		scanf("%f",&value);
		x[i] = value;
	}
	
	total = 0.0;
	for(i=0;i<10;i++)
		total = total + (x[i] * x[i]);
	printf("\n");

	for(i=0;i<10;i++)
		printf("x[%d] = %.2f\n",i+1,x[i]);

	printf("\nTotal = %.2f",total);
	

	return 0;
}