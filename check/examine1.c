#include <stdio.h>

int main() {
    setbuf(stdout, NULL);
    
    int num[5];
    
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", num, num + 1, num + 2, num + 3, num + 4);
    
    printf("%d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4]);

    if ((((num[0] && num[1])) || (num[2] && num[3])) && num[4]) {
        printf("\nLAMP ON");
    } else {
         printf("\nLAMP OFF");
    }
    return 0;
} 