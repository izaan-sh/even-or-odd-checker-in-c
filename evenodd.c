#include <stdio.h>

int main()
{
    int N;
    printf("Num:");
    scanf("%d%*c", &N);

    if(N%2==0)
        printf("num is even");
    else
        printf("num is odd");
    
    return(0);
}