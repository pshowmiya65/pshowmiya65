#include <stdio.h>
int main()
{
    int L, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&L);

    for(i=1; i <= L; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}

