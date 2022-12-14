#include <stdio.h>

int main(){	

	int numbers[] = {10, 20, 5, 6, 78, 101};
	int arraySize = sizeof(numbers)/sizeof(numbers[0]);
	
	float sum = 0;
	unsigned long multi = 1;
	
	for (int i = 0; i < arraySize; i++){
		sum += numbers[i];
		multi *= numbers[i];
	}

	printf("Sum = %d\n", (int)sum);
	printf("Multiplication = %lu\n", multi);
	printf("Average = %.3f\n", sum / arraySize);

	return 0;
}