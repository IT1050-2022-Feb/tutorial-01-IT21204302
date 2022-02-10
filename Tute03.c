/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
	int input, total, x;

	printf("enter input : ");
	scanf("%d", &input);

	total = 0;
	x = 1;
	while (x <= input)
	{
		total = total + x;
		x++;
	}

	printf("the sum of the numbers : %d", total);
	return 0;
}


