/*
Минимум из двух

Напишите программу для поиска минимального из двух чисел.

Входные данные:

Два целых числа a и b.

Выходные данные:

Одно число -- минимум среди чисел  a и b.



Наставление: постарайтесь обойтись без инструкции switch
*/
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    int res1 = a <= b;
    res1 = res1 * a;
    int res2 = b < a;
    res2 = res2 * b;
    int res3 = res1 + res2;

    printf("%d\n", res3);
    return 0;
}
