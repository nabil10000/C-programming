#include<stdio.h>
int main()
{
int x, t , sum = 0;
    scanf("%d",&x);
    for( ;x!=0; ){
    t = x% 10;
    sum = sum+t;

    x = x/10;

    }
    printf("%d\n",sum);

}
