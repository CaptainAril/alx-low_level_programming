#include <stdio.h>

int bitCheck(int val, int pos)
{
    return (bit & (1 << pos))
}


int main(void)
{
    int val, pos, ret;

    val = 15; // 15 = 10001
    pos = 2;

    ret = bitCheck(val, pos);

    printf("Bit at pos %d is %d\n", pos, val)
}