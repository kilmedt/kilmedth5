#include <stdio.h>

struct Book
{
    char title[128];
    char author[40];
    float price;
    unsigned int date;
    char publisher[40];
};
/*
也可以这样定义
}book;
此时book作为一个全局变量存在
*/
int main()
{
    struct Book book;
    //此时book作为一个局部变量存在
    printf("请输入书名：");
    scanf("%s",book.title);
    printf("请输入作者：");
    scanf("%s",book.author);
    printf("请输入售价：");
    scanf("%f",&book.price);
    printf("请输入出版日期：");
    scanf("%d",&book.date);
    printf("请输入出版社：");
    scanf("%s",book.publisher);

    printf("===数据录入完毕===\n");

    printf("书名：%s\n",book.title);

    return 0;
}