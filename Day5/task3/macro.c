#include <stdio.h>
#include <stdint.h>

#define MAX(x,y,z) (((x)>(y))&&((x)>(z))?x:(z>y)?z:y)
#define MIN(x,y,z) (((x)<(y))&&((x)<(z))?x:(z<y)?z:y)
#define SETBIT(mask,bit) (mask)|=(1ULL<<(bit))
#define CLEARBIT(mask,bit) (mask)&=~(1ULL<<(bit))
#define INVERSEBIT(mask, bit) (mask)^=(1ULL<<(bit))
#define CHECKBIT(mask, bit) !!((mask)&(1ULL<<(bit)))
#define SWAP(a,b) int temp=a; a=b; b=temp

int main(){
    
    int max = MAX(1,10,4);
    printf("max=%d\n", max);
    
    int min = MIN(1,10,4);
    printf("max=%d\n", min);
    
    uint64_t mask = 0;
    mask = SETBIT(mask, 1);
    printf("mask=%llu\n", mask);  
    
    mask = CLEARBIT(mask, 1);
    printf("mask=%llu\n", mask); 
    
    mask = INVERSEBIT(mask, 2);
    printf("mask=%llu\n", mask); 
    
    printf("mask=%d\n", CHECKBIT(mask, 2)); 
    
    int a = 3;
    int b = 5;
    printf("a=%d  b=%d\n", a, b); 
    SWAP(a,b);
    printf("a=%d  b=%d\n", a, b); 
      
}