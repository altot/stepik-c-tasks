/*
Для заданного числа N проверить, является ли оно простым.

Входные данные:
Одно натуральное число N, отличное от 1.

Выходные данные:
1 -- если число простое
0 -- если число составное
*/
#include <stdio.h>
int main(void){
int n = 0, count = 0;
scanf("%d", &n);
for(int i = 2; i * i <= n; i++){
    if((n % i == 0) ){
        count++;
        break;
    }
}
if(count > 0){
    printf("0\n");
}
else{
    printf("1\n");
}
    return 0;
}