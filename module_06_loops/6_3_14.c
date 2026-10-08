/*
Даты

Определить правильность даты, введенной с клавиатуры (число — от 1 до 31, месяц — от 1 до 12). Если введены некорректные данные, то сообщить об этом.

Входные данные:
Два натуральных числа: первое -- число в месяце, второе -- номер месяца в году.

Выходные данные:
Строка correct, если дата правильная, и строка error, если подобной даты не может быть.

Уточнение:
Предполагаем, что в феврале 29 дней.
*/
#include <stdio.h>
int main(void)
{

    int number_day = 0, number_month = 0;
    scanf("%d%d", &number_day, &number_month);
    if (

        (
            (
                (number_month == 1) || (number_month == 3) || (number_month == 5) ||
                (number_month == 7) || (number_month == 8) || (number_month == 10) || (number_month == 12)) &&
            (number_day < 32)))
    {
        printf("correct\n");
        return 0;
    }
    if (

        (
            (
                (number_month == 4) || (number_month == 6) || (number_month == 9) || (number_month == 11)) &&
            (number_day < 31)))
    {
        printf("correct\n");
        return 0;
    }
    if (

        (
            (
                (number_month == 2)) &&
            (number_day < 30)))
    {
        printf("correct\n");
        return 0;
    }
    printf("error\n");
    return 0;
}