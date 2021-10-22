#include<stdio.h>
int main()
{
    long long int n , a;
    a = 1;
    printf("enter the n th value:");
    scanf("%lld",&n);
    long long int sum_pattern = (((n + 1 )*n)/2);
    printf("%lld",sum_pattern);

    return 0;
}
