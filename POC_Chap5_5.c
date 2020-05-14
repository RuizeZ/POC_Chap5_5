/*
RuizeZ
5/12/2020
Write a function that will store a given value into specified bit positions of an integer. It should have this prototype:
int store_bit_field( int original_value, int value_to_stor, unsigned starting_bit, unsigned ending_bit );
Assume that the bits in an integer are numbered from right to left. Thus, the starting bit position may not be less than the ending bit position.

0x0    0x1    4 4 0x10
0xffff 0x123 15 4 0x123f
0xffff 0x123 13 9 0xc7ff
*/
#include <stdio.h>
int store_bit_field( int original_value, int value_to_stor, unsigned starting_bit, unsigned ending_bit );
int main(void)
{
    int inputoriginal_value;
    int inputvalue_to_stor;
    unsigned inputstarting_bit;
    unsigned inputending_bit;
    unsigned final;

    printf("what is the original value?(hex number) ");
    scanf("%x",&inputoriginal_value);
    printf("what is the value to stor?(hex number) ");
    scanf("%x",&inputvalue_to_stor);
    printf("what is the starting bit? ");
    scanf("%d",&inputstarting_bit);
    printf("what is the ending bit? ");
    scanf("%d",&inputending_bit);
    final = store_bit_field(inputoriginal_value, inputvalue_to_stor, inputstarting_bit, inputending_bit);
    printf("%x\n",final);

}
int store_bit_field( int original_value, int value_to_stor, unsigned starting_bit, unsigned ending_bit )
{
    unsigned mask = 0;
    for(int i = starting_bit; i >= ending_bit; i--)
    {
        mask = mask | (1<<i);
    }
    //printf("%x\n", mask);
    mask = ~mask;
    original_value &= mask;
    value_to_stor = value_to_stor<<(ending_bit);
    value_to_stor &= 0xffff;
    original_value |= value_to_stor;

    return original_value;
}