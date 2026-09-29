/*
Произведение цифр

Напишите программу считающую произведение цифр заданного k-значного числа X.

Входные данные: Два целых числа.
Первое число k -- количество цифр в числе X. 1≤k≤4
Второе число  k-значное число X.

Выходные данные:
Целое число. Произведение цифр числа X.
*/
#include <stdio.h>
int main(void)
{
    int k, x1, x2, x3, x4, x;
    scanf("%d\n", &k);
    switch (k)
    {
    case (4):
        scanf("%1d%1d%1d%1d", &x1, &x2, &x3, &x4);
        x = x1 * x2 * x3 * x4;
        printf("%d\n", x);
        break;
    case (3):
        scanf("%1d%1d%1d", &x1, &x2, &x3);
        x = x1 * x2 * x3;
        printf("%d\n", x);
        break;
    case (2):
        scanf("%1d%1d%", &x1, &x2);
        x = x1 * x2;
        printf("%d\n", x);
        break;
    case (1):
        scanf("%1d", &x1);
        printf("%d\n", x1);
        break;

    default:
        break;
    }
    return 0;
}