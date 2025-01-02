#include <stdio.h>

#include <ctype.h>

/* Print out a temperature conversion table for a range of values between 0-300*/

int main() {
	const int LOWER = 0; 
	int UPPER = 300;
	char unit;

	printf("Enter the unit C\\F:");
	scanf(" %c", &unit);
	unit = toupper(unit);
	printf("The value that you entered is: %c ", unit);

	if (unit == 'F') {
		printf("\n");
		printf("Celsius\tFahrenheit\n");

		for (int i = LOWER; i <= UPPER; i=i+20) {
			float celsius;
			celsius = (5.0 / 9.0) * ((float)i - (float)32);
			printf("%d\t %.2f\n", i, celsius);
		}
	} else if (unit == 'C') {
		printf("\n");
		printf("Celsius\tFahrenheit\n");

		for (int i = LOWER; i <= UPPER; i = i + 20) {
			float fahr;
			fahr = ((9.0 / 5.0) * (float) i) + (float) 32; //  casting to float to avoid data loss
			printf("%d\t %.2f\n", i, fahr);

	} else {
		printf("Please enter a valid unit!\n");
	}

	return 0;
}
