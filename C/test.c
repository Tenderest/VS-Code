#include<stdio.h>
void fun(void);
int main(void)
{
    int a;
    for (int index = 0; index < 3; index++)
    {
        printf("%d\n", a);
        a ++;
        fun();
    }
    return 0;
}
void fun(void)
{
    printf("Hello\n");
    printf("Yes\n");
    printf("No\n");
}