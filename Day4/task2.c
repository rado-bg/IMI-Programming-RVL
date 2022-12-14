#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   srand(time(NULL));
   int numbers[100];
   int max = -11;
   int min = 11;
   
   for (int i = 0; i < 100; i++){
		numbers[i] = rand() % 21 - 10;
		printf("%d ", numbers[i]);
		
		if (min > numbers[i]) {
			min = numbers[i];
		}
		
		if (max < numbers[i]) {
			max = numbers[i];
		}
   }
   
   printf("\nMin = %d ", min);  
   printf("\nMax = %d ", max);

   return 0;
}