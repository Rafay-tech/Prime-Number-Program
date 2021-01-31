#include <stdio.h>
#include <math.h>
/* Function declarations */
int isprime(int num);
int main()
{
	int num;	
	printf("Enter any number: ");
	scanf("%d", &num);
	
	// Call isprime() functons
	if (isprime(num))
	{
		printf("%d is Prime number.\n", num);
	}
	else
	{
		printf("%d is not prime number.\n", num);
	}	
	return 0;
}
/**
* Check whether a number is prime or not.
* Return 1 if thr number is prime otherwise 0.
*/
int isprime(int num)
{
	int i;	
	for (i=2; i<=num/2; i++)
	{
		/*
		* If the number is divisible by any number
		* other than  and self then it is not prime
		*/
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
