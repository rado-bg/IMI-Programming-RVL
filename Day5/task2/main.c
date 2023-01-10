#include "bitwise.h"

void studentNumberSet(uint64_t* attendance, int setClear) {
	
	int number;
	printf("\nEnter student's number [1..64]:");
	scanf("%d", &number);
	
	if((number > 0) && (number < 65)) {
		if (setClear == 1) {
			setBit(attendance, number - 1);
		} else {
			clearBit(attendance, number - 1);
		}		
	} else {
		printf("\nInvalid number");
	}
	printf("\n");
}

int main(){
	
	uint64_t attendance = 0;
    int option;
	
    while (1) {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Absent students info\n");
		printf("4. Presentt students info\n");
        printf("5. Change attendance status\n");
        printf("6. Exit\n\nChoose an option: ");
        scanf("%d", &option);
        if (option == 1) {
			studentNumberSet(&attendance, 1);
        }
        else if (option == 2) {
            studentNumberSet(&attendance, 0);		
        }
        else if (option == 3) {
			printf("\nThe numbers of absent students: ");
			for (int i = 0; i < 64; i++) {
				if (checkBit(attendance, i) == 0) {
					printf("%d ", i + 1);
				}
			}
			printf("\n\n");
        }
		else if (option == 4) {
			printf("\nThe numbers of students present: ");
			for (int i = 0; i < 64; i++) {
				if (checkBit(attendance, i) == 1) {
					printf("%d ", i + 1);
				}
			}
			printf("\n\n");
        }
		else if (option == 5) {
            int number;
            printf("\nEnter student's number [1..64]:");
			scanf("%d", &number);
			if((number > 0) && (number < 65)) {
				toggleBit(&attendance, number - 1);
			} else {
				printf("\nInvalid number");
			}
			printf("\n");	
        }
		else if (option == 6) {
            return 0;
        } else {
			printf("\nInvalid option!\n\n");
		}
    } 
}