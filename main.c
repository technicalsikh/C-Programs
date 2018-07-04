//Program to add all five digits of single number entered by user

#include <stdio.h>

int main() {
    int number=12345,one,two,three,four,five,add;
    five=number%10;

    four=number/10;
    four=four%10;

    three=number/100;
    three= three%10;

    two=number/1000;
    two= two%10;

    one=number/10000;
    one= one%10;


    add=one+two+three+five+four;
            printf("Digits to add : %d %d %d %d %d\n",one,two,three,four,five);
            printf("Total of all digits of number : %d",add);
    return 0;
}