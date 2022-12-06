#include <stdio.h>

int main(){

	int number;
	double res;
	double series = 0;
	double parallel = 0;

	
	printf("Enter number of the resistors: ");
	scanf("%d", &number);
	printf("\n");
	for(int i = 1; i <= number; i++) {
		
		printf("Resistor %d: ", i);
		scanf("%lf", &res);
		
		series += res;
		parallel += 1 / res;
		
	}

	printf("\nEquivalent series resistance = %lf", series);
	printf("\nEquivalent resistance in parallel = %lf",  1 / parallel);

	return 0;
}