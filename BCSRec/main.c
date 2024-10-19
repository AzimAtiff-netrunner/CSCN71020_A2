#include <stdio.h>
#include <stdbool.h>

#include "main.h"

void main() {
	int length = 1;
	int width = 1;
	bool continueProgram = true;
	while (continueProgram) {
		printWelcomeMenu();

		printOptions();

		int menuInput;
		menuInput = getIntInput("Enter menu option number:");

		switch (menuInput)
		{
			case 1:
			{
				printf("\nThe Rectangle has a length of %i and a width of %i\n\n", length, width);
				break;
			}
			case 2:
			{
				int input = getIntInput("Please enter the length of the rectangle:");
				setLength(input, &length);
				break;
			}
			case 3:
			{
				int input = getIntInput("Please enter the width of the rectangle:");
				setWidth(input, &width);
				break;
			}
			case 4:
			{
				printf("\nThe Rectangle has a perimeter of %i\n\n", getPerimeter(&length, &width));
				break;
			}
			case 5:
			{
				printf("\nThe Rectangle has an area of %i\n\n", getArea(&length, &width));
				break;
			}
			case 6:
			{
				continueProgram = false;
				break;
			}
			default:
			{
				printf("\nInvalid value entered.\n\n");
				break;
			}
		}
	}
	return 0; 
}

int getIntInput(const char message[]) {
	int input;
	int scannedValues;
	do {
		printf("\n%s\n",message);
		scannedValues = scanf_s("%i", &input);
		
		while ( getchar() != '\n');
	} while (scannedValues != 1);
	return input;
}



void setLength(int input, int* length) {
	if (input >= 0 && input < 100) {
		*length = input;
	}
}

void setWidth(int input, int* width) {
	if (input >= 0 && input < 100) {
		*width = input;
	}
}

int static getPerimeter(int length, int width) {
	int perimeter = 2 * (length + width);
	return perimeter;
}

int getArea(int* length, int* width) {
	int area = (*length) * (*width);
	return area;
}

int Add(int x, int y) {

	int Sum = 0;
	Sum = x + y;
	return Sum;
}

int Multiply(int a, int b) {

	int Product = 0;
	Product = (a) * (b);
	return Product;
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**     Welcome to     **\n");
	printf("**    Assignment 02   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Get Rectange Length & Width\n");
	printf("2. Change Rectangle Length\n");
	printf("3. Change Rectangle Width\n");
	printf("4. Get Rectangle Perimeter\n");
	printf("5. Get Rectangle Area\n");
	printf("6. Exit\n");
}