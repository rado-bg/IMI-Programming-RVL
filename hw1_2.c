#include <stdio.h>
#include <Windows.h>

int main(){
	
	int width, heigh, area, perimeter;
	
	printf("Input squire's width: ");
	scanf("%d", &width);
	printf("Input squire's heigh: ");
	scanf("%d", &heigh);
	
	area = width * heigh;
	perimeter = width * 2 + heigh * 2;
	
	printf("\nSquire's area = %d\n", area);
	printf("Squire's perimeter = %d\n\n", perimeter);
	
	system("pause");
	return 0;
}