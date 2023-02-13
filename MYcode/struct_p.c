#include <stdio.h>

//结构体的嵌套
struct Date
{
    int year;
    int month;
    int day;
};
struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
} book = {
    "《kilmedt的c语言》",
    "kilmedt",
    20,
    {2023,2,13},
    "kilmedt出版社"

};

int main()
{
    printf("name = %s",book.title);
    printf("date=%d-%d-%d",book.date.year,book.date.month,book.date.day);
    return 0;
}