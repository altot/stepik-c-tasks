/*
Дни недели

Если на вход программе подаётся целое число от 1 до 7, то программа должна выводить английское название соответствующего дня недели:

1 - Monday
2 - Tuesday
3 - Wednesday
4 - Thursday
5 - Friday
6 - Saturday
7 - Sunday





Если вводится какое-то другое число, то программа должна выводить строку ERROR!.

Исправьте ошибки в предложенной программе, чтобы она работала корректно.
*/
#include <stdio.h>
int main(void)
{
    int day;
    scanf("%d", &day);

    switch (day)
    {
    default:
        printf("ERROR!\n");
        break;
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    }

    return 0;
}