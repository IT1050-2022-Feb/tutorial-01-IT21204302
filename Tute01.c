/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

	int marks1, marks2, total;
	float average;

	printf("enter marks 1 : ");
	scanf("%d", &marks1);
	printf("enter marks 2 : ");
	scanf("%d", &marks2);

	total = marks1 + marks2;
	average = total / 2.0;

	printf("average is %.1f", average);
	return 0;
}

