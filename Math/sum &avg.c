#include <stdio.h>
char input[1000];
float temp; /* temporary storage for numbers entered */
int num_count; /* number to divide total by */
float total; /* Total of numbers entered */
float average; /* 'total' divided by 'num_count' */

int main() {
/* Tell user what program does */
printf("I will find the average of however many numbers you enter.\n");
printf("Enter number now (00 to quit): ");

/* Accept first input from user */
fgets(input, sizeof(input), stdin);
temp = atof(input);

/* Initalize Variables */
num_count = 0;
total = 0.0;
average = 0.0;

while ( temp != 00.0 ) {
++num_count; /* increases with each number entered */
total += temp; /* adds all numbers entered to total */

printf("Enter next number now (00 to quit): ");
fgets(input, sizeof(input), stdin);
temp = atof(input);
}
average = ( total / num_count );
printf("You entered %d numbers. The average of those numbers is %f.\n", num_count, average);

return 0;
}
