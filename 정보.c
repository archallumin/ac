#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = (a + b + c) / 3.0;
    printf("%.1f\n", (double) d);
    return 0;
}