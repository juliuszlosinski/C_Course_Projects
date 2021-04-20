/*
    Testing structs.
    by JL
    15.02.2021
*/

#include <stdio.h>

typedef struct
{
    short posX;
    short posY;
} Point;

typedef struct
{
    Point downLeft;    
    Point upperLeft;
    Point downRight;
    Point upperRight;
} Rectangle;

typedef struct
{
    int number;
    char suit;
} Card;

typedef struct 
{
    int weight;
    int area;
} Box;

void Print_Box(Box box)
{
    printf("\nBOX:\nWeight: %d\nArea: %d\n",box.weight,box.area);
}

void Test_Box()
{
    Box box = {25,30};
    Box *ptr;
    ptr = &box;
    ptr -> weight = 15;

    Print_Box(box);
}

void Print_Card(Card c)
{
    //TODO: Print info about card.
    printf("\nNumber: %d\nSuit: %c\n",c.number,c.suit);
}

void Print_Deck(Card dec[], int n)
{
    //TODO: Print deck.
    int i = 0;
    while(i<n)
    {
        Print_Card(dec[i]);
        i++;
    }
}

void Test_Card()
{
    //TODO: Test cards.
    Card dec[]={{5,'S'},{10,'D'},{12,'A'},{4,'B'}};
    Print_Deck(dec,4);
}

void Print_Rectangle(Rectangle rec)
{
    //TODO: Print info about rectangle.
    int width = rec.downLeft.posX + rec.downRight.posX;
    int height = rec.downLeft.posY + rec.upperLeft.posY;
    int area = width * height;
    printf("\nRECTANGLE: \nWidth: %d\nHeight: %d\nArea: %d\n",width,height,area);
}

void Test_Rectangle()
{
    //TODO: Test rectangle.
    Rectangle rec = {{5,5},{10,5},{5,15},{10,15}};
    Print_Rectangle(rec);
}

void Print_Point(Point p)
{
    //TODO: Print info about point.
    printf("\nPOINT: \nX: %d\nY: %d",p.posX,p.posY);
}

int Compare_Points(Point p1, Point p2)
{
    //TODO: Compare two points.
    if(p1.posY==p2.posY && p1.posX == p2.posX)
    {
        return 0;
    }
    else if(p1.posY==p2.posY)
    {
        return (p1.posX>p2.posX)? 1:-1;
    }
    else
    {
        return (p1.posY>p2.posY)? 1:1;
    }
}

void Test_Points()
{
    //TODO: Test points.
    Point p1 = {4,5}, p2 = {5,4};
    if(Compare_Points(p1,p2)>0)
    {
        printf("Is bigger!\n");
        Print_Point(p1);
    }
    else if(Compare_Points(p1,p2)<0)
    {
        printf("Is bigger!\n");
        Print_Point(p2);
    }
    else
    {
        printf("Equals!\n");
        Print_Point(p1);
        Print_Point(p2);
    }
}

int main(void)
{
    //TODO: Do operations.
    //Test_Points();
    //Test_Rectangle();
    //Test_Card();
    Test_Box();
    return 0;
}