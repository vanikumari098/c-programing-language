#include <stdio.h>
#include<math.h>
int main() {
int principal=2300;
int rate=7;
int time=4;
int amount=principal*(pow((1+rate/100), time));
int ci= amount - principal;
printf("compound interest is:%2f",ci);
return 0;
}
