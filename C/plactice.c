#include <stdio.h>
int main(void)
{
    int sum=0;
    printf("sum=%d\n",sum);
    for(int an=10;an<=1000;an++)
    {
        sum+=an;
    }
    printf("sum=%d\n",sum);
    return 0;
}