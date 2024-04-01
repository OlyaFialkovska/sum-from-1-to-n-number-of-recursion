#include <stdio.h>
#include <stdlib.h>

int summ=0;
int sum(int a)
{
    if(a!=3)
         sum(a+1);
    summ+=a;
return summ;
}


int main() {
    // Write C code here
    int a=2;
    int result= sum(a);
    printf("%d",result);
    return 0;
}
