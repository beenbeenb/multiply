#include <stdio.h>

int main(void)
{
    int a,b;
    
    for(a=2; a<=9; a++)
    {
        printf("%d단\n" ,a);
        for(b=1; b<=9; b++)
        {
            printf("%d x %d = %d\n", a,b,(a*b));
        }
    }
}
