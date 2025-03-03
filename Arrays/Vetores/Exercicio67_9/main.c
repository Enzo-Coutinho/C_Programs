#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10] = {0}, B[10] = {0}, C[10] = {0};
    for(int i=0; i<10; i++)
    {
        scanf("%d %d", &A[i], &B[i]);
        C[i] = A[i] - B[i];
    }
    for(int i=0; i<10; i++)
    {
        printf("C[%d] is: %d \n", i, C[i]);
    }
    return 0;
}
