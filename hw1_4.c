#include <stdio.h>
#include <Windows.h>

int main(){
	
	int num1 = -20;
	int num2 = 30;
	
	printf("Number 1 = %d, Number 2 = %d\n", num1, num2);
	
	int numTemp = num1;
	num1 = num2;
	num2 = numTemp;
	
	printf("Number 1 = %d, Number 2 = %d\n\n", num1, num2);
	
	system("pause");
	return 0;
}