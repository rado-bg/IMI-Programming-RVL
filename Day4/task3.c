#include <stdio.h>

int main(){

   float numbers[10];
   float sum = 0;
   int num = 0;
   
   for (int i = 0; i < 10; i++) {
	    printf("\nEnter number %d : ", i+1); 
		scanf("%f", &numbers[i]);
   }
	   
   for (int i = 0; i < 10; i++){   		
		if ((numbers[i] >= 5) && (numbers[i] <= 10)) {
			num++;
			sum += numbers[i];
		}	
   }
   
   printf("\n\nSum = %f ", sum);  
   printf("\nCount[10>x<5] = %d ", num);

   return 0;
}