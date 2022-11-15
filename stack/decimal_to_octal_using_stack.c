#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
 
long decToOct(long n);
int main() {
    long dec;
    printf("Enter a decimal number\n");
    scanf("%ld", &dec);
    printf("Octal number of %ld is %ld", dec, decToOct(dec));
      return 0;
}
 

long decToOct(long n) {
    int rem; 
 long octal = 0, i = 1;
  
    while(n != 0) {
        rem = n%8;
        n = n/8;
        octal = octal + (rem*i);
        i = i*10;
    }
    return octal;
}