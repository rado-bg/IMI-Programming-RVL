#include <stdio.h>

int main(){
	int i;
	for(int i = 0; i <=20; i++) {
		printf("%d ", i);
	}	
	printf("\n");
	
	i = 0;
	while(i <= 20) {
		printf("%d ", i++);	
	}
	printf("\n");
	
	i = 0;
	do {
		printf("%d ", i);	
	} while (++i <= 20);
	printf("\n\n");
	
//---------------------------------------
	
	for(int i = 20; i <=30; i++) {
		printf("%d ", i);
	}	
	printf("\n");
	
	i = 20;
	while(i <= 30) {
		printf("%d ", i++);	
	}
	printf("\n");
	
	i = 20;
	do {
		printf("%d ", i);	
	} while (++i <= 30);
	printf("\n\n");

//---------------------------------------	
	
	for(int i = 10; i <=100; i+=5) {
		printf("%d ", i);
	}	
	printf("\n");
	
	i = 10;
	while(i <= 100) {
		printf("%d ", i);
		i+=5;
	}
	printf("\n");

	i = 10;
	do {
		printf("%d ", i);
		i+=5;
	} while (i <= 100);
	printf("\n\n");	
	
//---------------------------------------		
	
	for(int i = 20; i >= 10; i--) {
		printf("%d ", i);
	}
	printf("\n");
	
	i = 20;
	while(i >= 10) {
		printf("%d ", i--);	
	}
	printf("\n");
	
	i = 20;
	do {
		printf("%d ", i);	
	} while (--i >= 10);
	printf("\n\n");
	
//---------------------------------------		
	
	for(int i = 1000; i >= 0; i-=100) {
		printf("%d ", i);
	}
	printf("\n");
	
	i = 1000;
	while(i >= 0) {
		printf("%d ", i);
		i-=100;
	}
	printf("\n");
	
	i = 1000;
	do {
		printf("%d ", i);
		i-=100;
	} while (i >= 0);
	printf("\n\n");
	
	return 0;
}