// # import math
// # a = int(input())
// # b = round(float(math.sqrt(a)),2)
// # print(b)

#include <stdio.h>
#include<math.h>
#include <stdlib.h>
float squrt(float n)
{
    float i, b;
    for (i = 0; i < n; i++)
    {
        if (i * i == n)
            b = i;
    }
    return b ;
}
int main()
{
    double n,x;
    scanf("%lf", &n);
    // float b = squrt(n);
    x= sqrt(n);
    printf("%.2f", x);
}