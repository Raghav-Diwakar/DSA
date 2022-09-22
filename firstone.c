

#include<stdio.h>

int main(){ // (i-l1)(u2-l2 +1) + (j-l2)
    int a[5][5];  // l
    int i= 3 , j=4 , x;
    printf("%u\n",a[0]);
    printf("%u\n",&a[3][4]);
    x = 3*5+ 4  ;
    printf("%d\n",x);
    printf("%u",a[0] + x);

    return 0 ;
}
