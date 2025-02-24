#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7};
    int sum = A[0] + A[1] + A[5];
    printf("The sum is: %d \n", sum);
    A[4] = 100;
    for(int i = 0; i<6; i++)
    {
        printf("A[%d] = %d \n", i, A[i]);
    }
    return 0;
}
