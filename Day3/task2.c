#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){
	int i;
	int number, avr;
	int sum = 0;
	int min = 21;
	int max = 0;
	

	srand (time(NULL));
	
	for(i = 1; i <=20; i++) {
		number= rand()%20;
		sum+=number;
			
		if (max < number) {
			max = number;
		}
		if (min > number) {
			min = number;
		}
		
		printf("%d ", number);
	}

	printf("\nSum = %d\n", sum);
	printf("Avr = %d\n", sum / (i - 1));
	printf("Min = %d\n", min);
	printf("Max = %d\n", max);

	return 0;
}