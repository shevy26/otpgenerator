#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    // random OTP Generator
    srand(time(0));
    int num=rand()%26+97,num2=rand()%26+65,num3=rand()%10+0,num4=rand()%26+97,num5=rand()%10+0;
    printf("Your OTP is %c%c%d%c%d\n",num,num2,num3,num4,num5);
}
