# POC_Chap5_5
Write a function that will store a given value into specified bit positions of an integer. It should have this prototype:
int store_bit_field( int original_value, int value_to_stor, unsigned starting_bit, unsigned ending_bit );
Assume that the bits in an integer are numbered from right to left. Thus, the starting bit position may not be less than the ending bit position.

0x0    0x1    4 4 0x10\n
0xffff 0x123 15 4 0x123f
0xffff 0x123 13 9 0xc7ff
