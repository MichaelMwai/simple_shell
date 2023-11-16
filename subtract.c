#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program.
 *
 * This function takes user input, performs subtraction,  displays result.
 *
 * Return: 0 if the program executed successfully.
 */
int main(void)
{
	/* Declare variables to store the numbers */
	int num1, num2;
	pid_t ppid;

	/* Prompt the user to enter the first number */
	printf("Enter the first number: ");
	scanf("%d", &num1);

	/* Prompt the user to enter the second number */
	printf("Enter the second number: ");
	scanf("%d", &num2);

	/* Calculate the difference of the two numbers */
	int difference = num1 - num2;
	
	/* Get shells ppid */
	ppid = getppid();

	/* Display the result */
	printf("The difference of %d and %d is: %d\n", num1, num2, difference);

	/* Display ppid */
	printf ("My ppid is %u\n", ppid);

	/* Return 0 to indicate successful execution */
	return (0);
}

