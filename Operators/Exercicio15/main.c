#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    printf("Enter the number to reverse: ");
    scanf("%d", &value);
    int reverse = (100 *(value%10)) + (10 * ((value%100)/ 10)) + (value / 100);
    printf("The reverse number is: %d", reverse);
    return 0;
}
