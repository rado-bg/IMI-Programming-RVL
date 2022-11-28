#include <stdio.h>

int main(){
	
	int a =1;
	int b =1;
	int c =1;
	int d =0;
	
	if (((a && b) || (c && d)) && d) {
		printf("Lamp is on!\n");	
	} else {
		printf("Lamp is off!\n");	
	}

	return 0;
}