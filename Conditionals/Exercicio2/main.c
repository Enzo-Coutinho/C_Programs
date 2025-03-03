#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if(n1 > n2) printf("The max value is: %d", n1);
    else if(n1 < n2) printf("The max value is: %d", n2);
    else printf("The values are equals");
    return 0;
}
