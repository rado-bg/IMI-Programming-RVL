# 0 "swap.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "swap.c"
# 1 "swap.h" 1
void swap(int* num1, int* num2);
# 2 "swap.c" 2

void swap(int* num1, int* num2)
{
    *num1 ^= *num2;
    *num2 ^= *num1;
    *num1 ^= *num2;
}
