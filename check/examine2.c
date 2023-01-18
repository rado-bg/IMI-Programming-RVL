#include <stdio.h>
#include <stdint.h>

int readBit(int8_t mask, int bit) {
    return !!(mask&(1ULL<<bit));
}

double current(int8_t mask1) {
 
  double voltage = 5000; //mV
  int resistence = 0;

  if (!readBit(mask1,0)) {
      return 0; // open
  }
  
  if ((readBit(mask1,6)) && ((readBit(mask1,7)))) {
      
      //printf("6,7\n");
      if (readBit(mask1,5)) {
          return -1; //short
      } else {
          return voltage / 100.0;
      }   
  }
  
  for (int i = 1; i <=5; i++) {
       if (readBit(mask1,i)) {
           resistence += 100;
       }   
  }
  printf("\nres = %lf\n", resistence);
  if (resistence != 0.0) {
      return voltage / resistence;
  } else {
      return -1; //short
  }
}

int main() {
    setbuf(stdout, NULL);
    
    int8_t mask = 0b10011111;

    printf("\nCurrent = %lf\n", current(mask));  

    return 0;
} 