/*Програма призначена для обчислення і виведення на екран значення функції , де задані сталі
величини a=-50, b=4, c=9. 
*/
#include <stdio.h>//підключення потрібних для роботи бібліотек
#include <math.h>

int main() {    //Вводимо змінні та данні 
    int a = -50;
    int b = 4;
    int c = 9;
    float y;

    y = (c * a) / (float)(a + b) + (b * c) / (float)(c + a); // обчислюємо значення функціїі

    printf("Значення функції y = %.2f", y); // виводимо результат на екран з точністю до двох знаків після коми

    return 0;//Кінець програми...
}
