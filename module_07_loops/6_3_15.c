/*
Страты

Написать программу, которая анализирует данные о возрасте и относит человека к одной из четырех групп:

    preschooler
    schoolchild
    worker
    pensioner

preschooler <= 6
 7 <= schoolchild <= 18
19 <= worker <= 59
pensioner >= 60




Входные данные:
Одно целое число от 1 до 119 -- возраст человека.

Выходные данные:
Одно слово. Название категории, к которой относится человек.
*/
#include <stdio.h>
int main(void)
{
    int age = 0;
    scanf("%d", &age);
    if (age <= 6)
    {
        printf("preschooler\n");
        return 0;
    }
    if (age >= 60)
    {
        printf("pensioner\n");
        return 0;
    }
    if (age >= 7 && age <= 18)
    {
        printf("schoolchild\n");
        return 0;
    }
    if (age >= 19 && age <= 59)
    {
        printf("worker\n");
        return 0;
    }
    return 0;
}