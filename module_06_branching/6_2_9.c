/*
Сравнение чисел

Напишите программу, сравнивающую два целых числа.

Входные данные:
Два целых числа x, y

Выходные данные:
1 -- если x=yx=y
0 -- если x≠yx=y
*/
#include <stdio.h>
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    int res = x == y;
    printf("%d\n", res);

    return 0;
}
