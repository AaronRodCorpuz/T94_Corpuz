#include <stdio.h>

int main()
{
    int i;
    int j;
    
    for(int i=1; i<=9; i++)
    {

        for(int j=i; j<=9; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
