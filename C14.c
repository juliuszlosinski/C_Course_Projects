/*
    Testing typedef and struct
    by JŁ
    9.12.2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int INT ;
typedef double DOUBLE;
typedef float FLOAT;
typedef char CHAR;
typedef struct STRUCT;

typedef STRUCT Book
{
    char title[20];
    char author[20];
    double age;
    double price;
} BOOK;

typedef struct Sword
{
    DOUBLE price;
    DOUBLE length;
    CHAR material[20];
} SWORD;

typedef struct Person
{
    CHAR name[20];
    CHAR lastName[20];
    DOUBLE age;
    DOUBLE height;
} PERSON

void PrintBook(Book book)
{
    printf("\nDescription of book: \nTitle: %s\nAuthor: %s\nAge: %2.2lf\nPrice: %2.2lf\n",book.title,book.author,book.age,book.price);
}

int main(void)
{

    INT n=5;
    DOUBLE value=20.5;
    BOOK book;

    return 0;
}