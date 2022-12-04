#include <stdio.h>
struct detail
{
    // best 4 per is pending
    char firstname[30];
    char secondname[30];
    int rollno ;
    int m1 , m2 , m3 , m4 , m5  , m6;
};

int main()
{
    struct detail a1 ;
    printf("enter your first name =\t");
    scanf("%s",a1.firstname);
    printf("enter your second name =");
    scanf("%s",a1.secondname);
    printf("enter your roll no =");
    scanf("%d",&a1.rollno);
    printf("enter your english marks =");
    scanf("%d",&a1.m1);
    printf("enter your hindi marks = ");
    scanf("%d",&a1.m2);
    printf("enter your physics marks = ");
    scanf("%d",&a1.m3);
    printf("enter your chem  marks = ");
    scanf("%d",&a1.m4);
    printf("enter your maths marks = ");
    scanf("%d",&a1.m5);
    printf("enter your optional subject marks = ");
    scanf("%d",&a1.m6);

    printf(" first name = %s\n",a1.firstname);
    printf(" second name = %s\n",a1.secondname);
    printf(" your roll no is %d\n",a1.rollno);
    printf("your marks are %d %d %d %d %d %d",a1.m1,a1.m2 , a1.m3 ,a1.m4 ,a1.m5,a1.m6);
    return 0 ;
}