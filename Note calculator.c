#include <stdio.h>

void main() {



while(1)
{
    int x;
    int a=0, b=0, c=0, d=0, e=0,f=0,g=0; //a=500, b=100, c=50, d=20, e=10, f=5, g=1
    printf("Enter an amount: ");
    scanf(" %d",&x);

    while (x>=500)
    {
        x=x-500; a=a+1;
    }
    while (x>=100)
    {
        x=x-100; b+=1;
    }
    while (x>=50)
    {
        x=x-50; c+=1;
    }
    while (x>=20)
    {
        x=x-20; d+=1;
    }
    while (x>=10)
    {
        x=x-10; e+=1;
    }
    while (x>=5)
    {
        x=x-5; f+=1;
    }
    while (x>=1)
    {
        x=x-1; g+=1;
}
printf("500 taka = %d \n100 taka = %d \n50 taka = %d \n20 taka = %d \n10 taka = %d \n5 taka = %d \n1 taka = %d\n\n", a, b, c, d, e, f, g);

    }


}
