#include <stdio.h>

#include <ctype.h>

/* Print out a temperature conversion table for a range of values between 0-300,
 * The unit is in Celsius (C) or Fahrenheit (F) and the user will enter the unit,
 * Entering the unit F implies that the range of values is in Fahrenheit,
 * It will give the conversion in Celsius and vice versa.
 */

int main() {
	const int LOWER = 0; // To ensure that the values do not change
	const int UPPER = 300;
	char unit;

	printf("Enter the unit C\\F:");
	scanf(" %c", &unit); // We get the users input here
	unit = toupper(unit); // To avoid case sensitivity
	printf("The value that you entered is: %c \n", unit); // Gives feedback to the user incase they made an error

	if (unit == 'F') {
		printf("Celsius\tFahrenheit\n"); // table headers
		for (int i = LOWER; i <= UPPER; i+=20) {
			float celsius;
			celsius = ((float)(5.0 / 9.0)) * (i - 32); //  casting to float to avoid data loss
			printf("%d\t %.2f\n", i, celsius);
		}
	}
	else if (unit == 'C') {
		printf("Celsius\tFahrenheit\n");
		for (int i = LOWER; i <= UPPER; i+=20) {
			float fahr;
			fahr = ((float)(9.0/5.0))* i + 32;
			printf("%d\t %.2f\n", i, fahr);
		}
	}
	else {
		printf("\n"); // To separate what the user enter with what is required of them
		printf("Please enter a valid unit!\n");
	}

	return 0;
}
