#include<stdio.h>

int main() {

float celsius, farenheit;

printf("\nEnter temp in celcius: ");
scanf("%f", &celsius);

farenheit = (1.8 * celsius) + 32;

printf("\nTemperature in Farenheit: %f", farenheit);

return 0;

}
