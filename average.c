#include <stdio.h>
float findavg();
int main()
{
    
    float avg=findavg();
    printf("Average%f", avg);
    
}
float findavg()
{
    int a,b,c,sum;
    a=10;
    b=20;
    c=30;
    sum=a+b+c;
    float avg=sum/3;
    return avg;
}