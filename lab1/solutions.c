#include <stdio.h>
#include <math.h>
#include "lab2.h"
//for 9z
int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;  
    if (n % 2 == 0) return 0;  
    
    // Проверяем нечетные делители от 3 до sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; 
}

//функция проверки четности
int is_even(int n) {
    return n % 2 == 0;
}

//функция поиска максимума из трех чисел
int max_of_three(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

//функция определения знака числа
int sign_of_number(int n){
    if (n<0)
        {return -1;}
    if (n>0)
        {return 1;}
    if (n==0)
        {return 0;}
}

//функция абсолютного значения 
int absolute_value(int n){
    if (n<0)
        {return n*(-1);}
}

//функция проверки существования на треугольник
int triangle_exists(int a, int b, int c)
{
    if (a+b>c)
        {return 1;}
    if (b+c>a)
        {return 1;}
    if (a+c>b)
        {return 1;}
    else{
        return 0;
    }
}


//функция оценок
const char* get_grade(int score){
    if (score >= 90 && score <= 100) {
        return "отлично";
    }
    else if (score >= 74 && score <= 89) {
        return "хорошо";
    }
    else if (score >= 60 && score <= 73) {
        return "удовлетворительно";
    }
    else if (score >= 0 && score < 60) {
        return "неудовлетворительно";
    }
    else {
        return "выход за диапазон";
    }
}

//функция "евклидово расстояние"
double euclidean_distance(double x1, double y1, double x2, double y2)
    {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

//функция "манхэттенское расстояние"
int manhattan_distance(int x1, int y1, int x2, int y2)
    {
        return (abs(x2 - x1) + abs(y2 - y1));
    }

//функция среднее значение всех простых чисел на промежутке
double average_primes_in_interval(int a, int b) {
    int c;
    float number;
    if (a>b) {
        return 0;
    } else {
        for (int i=a;i<=b;i++) {
            if (is_prime(i)) {
                c+=i;
                number++;
                }
            }
        if (c == 0)
            {return 0;}
        return c/number;
        }
    }

//подсчет чисел кратных k из интервала [start;end]
int count_multiples(int start, int end, int k){
if (start > end){
    return 0;
}
if (k == 0) 
{return 0;}
int count = 0;
for (int i = start; i <= end; ++i)
{if (i%k==0) ++count;}
{return count;}
}

//високосный год
int is_leap_year(int year)
{
if (year%4==0 && year%100!=0 || year%400==0)
{return 1;}
else
{return 0;}
}

//сезон по числу месяца
const char* season_by_month(int month)
{
    switch(month) {
        case 12:
        case 1:
        case 2:
            return("Зима\n");
            break;
        case 3:
        case 4:
        case 5:
            return("Весна\n");
            break;
        case 6:
        case 7:
        case 8:
            return("Лето\n");
            break;
        case 9:
        case 10:
        case 11:
            return("Осень\n");
            break;
        default:
            return("Некорректно\n");
    }
    
    return 0;
}

//день недели по номеру
const char* day_of_week(int day_num)
{
switch (day_num)
{
    case 1:
        return ("понедельник");
        
    case 2:
        return ("вторник");
        
    case 3:
        return ("среда");
        
    case 4:
        return ("четверг");
        
    case 5:
        return ("пятница");
        
    case 6:
        return ("суббота");
        
    case 7:
        return ("воскресенье");
    default:
        return "некорректно";
        
}
}

//количество цифр в числе
int count_digits(int n)
{
    if (n<0){
        n = -n;
    }
    int count = 0;
    do {
        count++;
        n/=10;
    }
    while (n!=0);
    return count;
}

//переворот числа
int reverse_number(int n) {
    int reversed = 0;
    do {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    } while (n != 0);
    
    return reversed;
}