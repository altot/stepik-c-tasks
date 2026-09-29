/*
Базовый обмен веществ

В третьем уроке был приведён код программы, которая подсчитывает уровень базового обмена веществ по формуле Миффлина-Сан Жеора исходя из данных, которые вы введёте (возраст, рост и вес). Модифицируйте данную программу так, чтобы она дополнительно принимала и учитывала сведения о половой принадлежности человека.

Входные данные:
Один символ и три целых числа.
Символ f (female) или m(male), обозначающий половую принадлежность.
Первое число aa -- целое, возраст человека
Второе число hh -- целое, рост человека в сантиметрах
Третье число ww -- целое, вес человека в килограммах.

Выходные данные:
Вывести уровень базового обмена веществ в таблице, оформленной в соответствии примером ниже. Если первый аргумент не является символом f или m, то необходимо вывести одно слово ERROR!
*/
#include <stdio.h>
int main(void)
{
    int age, height, weight;
    double bmr_male, bmr_female;
    char sex;

    // printf("Enter your gender (m for male, f for female):\n");
    scanf("%c", &sex); // считываем символ в sex

    // printf("Enter your age (in years, integer number):\n");
    scanf("%d", &age); // считываем целое значение в переменную age

    // printf("Enter your height (in centimeters, integer number):\n");
    scanf("%d", &height); // считываем  значение в переменную height

    // printf("Enter your weight (in kilograms, integer number):\n");
    scanf("%d", &weight); // считываем значение в переменную weight

    switch (sex)
    {
    case 'f':
    case 'F':
    {
        bmr_female = 10 * weight + 6.25 * height - 5 * age - 161;
        printf("|  BMR  |\n");
        printf("|%7.2f|\n", bmr_female);
        break;
    }
    break;

    case 'm':
    case 'M':
    {
        bmr_male = 10 * weight + 6.25 * height - 5 * age + 5;
        printf("|  BMR  |\n");
        printf("|%7.2f|\n", bmr_male);
        break;
    }
    break;
    default:
        printf("ERROR!");
        break;
    }

    return 0;
}