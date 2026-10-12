/*
Факториал

Для целого числа k(0≤k≤12) посчитать k!

Входные данные:
Одно целое число k, (0≤k≤12).

Выходные данные:
Значение факториала числа k.
*/
#include <stdio.h>
int main(void){
int k = 0, fk = 1;
scanf("%d", &k);
for(int i = 1; i <= k; i++ ){
    fk = i * fk;
}
printf("%d\n", fk);
    return 0;
}