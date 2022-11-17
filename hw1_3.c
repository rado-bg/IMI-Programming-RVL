#include <stdio.h>
#include <Windows.h>

int main(){
	
	float base1, base2, height, area;
	
	printf("Input trapezoid's down base 1: ");
	scanf("%f", &base1);
	printf("Input trapezoid's down base 2: ");
	scanf("%f", &base2);
	printf("Input trapezoid's height: ");
	scanf("%f", &height);
	
	area = ((base1 + base2) / 2 ) * height;
	printf("\nTrapezoid's area = %f\n", area);

	system("pause");
	return 0;
}