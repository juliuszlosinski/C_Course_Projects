/*
    Calculate the probabilites of getting some configurations of cards.
    by JL
    16.02.2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//TODO: Defining types.
typedef enum
{
    clubs, diamonds, hearts, spades
} Suit;

typedef struct
{
    Suit suit;  // Name of card.
    short pipe; // Between 1-13.
} Card;

int Compare_Card(Card *ptr1, Card *ptr2)
{
    //TODO: Compare to cards.
    return (ptr1->pipe > ptr2->pipe)? 1:-1;
}

void Swap_Card(Card *ptr1, Card *ptr2)
{
    //TODO: Swap cards.
    Card tmp=*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}

void Print_Card(Card *ptr)
{
    //TODO: Print the card.
    printf("\n[=== CARD ===]\n");
    switch(ptr->suit)
    {
        case 0:
        printf("\nClubs ");
        break;
        case 1:
        printf("\nDiamonds ");
        break;
        case 2:
        printf("\nHearts ");
        break;
        case 3:
        printf("\nSpades ");
        break;
    }  
    switch(ptr->pipe)
    {
        case 11:
        printf("Jack\n");
        break;
        case 12:
        printf("Queen\n");
        break;
        case 13:
        printf("King\n");
        break;
        default:
        printf("%d\n",ptr->pipe);
    }
    printf("\n[============]\n");
}

void Print_Max_Card(Card deck[],int size)
{
    //TODO: Get max card.
    Card res = deck[0];
    int i=0;
    while(i<size)
    {
        if(Compare_Card(&res,&deck[i])<0)
        {
            res = deck[i];
        }    
        i++;
    }
    printf("\nMAX:\n");
    Print_Card(&res);
}

void Print_Min_Card(Card deck[],int size)
{
    //TODO: Get min card.
    Card res=deck[0];
    for(int i=0;i<size;i++)
    {
        if(Compare_Card(&res,&deck[i])>0)
        {
            res = deck[i];
        }
    }
    printf("\nMIN: \n");
    Print_Card(&res);
}

long Factorial(int n)
{
    //TODO: Calc factorial.
    return (n>0)? (n*Factorial(n-1)):1;
}

long Calc_Combination(long n, long r)
{
    //TODO: Calc combination.
    return Factorial(n)/(Factorial(r)*Factorial(n-r));
}

void Print_Deck(Card deck[],int n)
{
    //TODO: Print deck.
    printf("\nDECK:\n");
    int i=0;
    while(i<n)
    {
        Print_Card(&deck[i]);
        i++;
    }
}

void Shuffle_Deck(Card deck[],int n)
{
    //TODO: Shuffle the deck.
    int places[7] = {};
    Card second_deck[7]={};
    int i=0, place;
    while(i<n)
    {
        place = rand()%n;
        if(places[place]==0)
        {
            places[place]=1;
            second_deck[i]=deck[place];
            i++;
        }
    }
    for(i=0;i<n;i++)
    {
        deck[i]=second_deck[i];
    }
}

void Test_Cards()
{
    //TODO: Test cards.
    srand(time(0));
    Card hand[7];
    for(int i=0;i<7;i++)
    {
        hand[i].suit= rand()%2;
        hand[i].pipe=(rand()%11)+1;
    }

    printf("\nBEFORE SHUFFLE: \n");
    Print_Deck(hand,sizeof(hand)/sizeof(hand[0]));

    Shuffle_Deck(hand,7);

    printf("\nAFTER SHUFFLE: \n");
    Print_Deck(hand,sizeof(hand)/sizeof(hand[0]));

    double probabiltyOfPair = 13 * Calc_Combination(4,2)*Calc_Combination(12,5)*64;
    probabiltyOfPair/=133784560;
    double probabiltyOfPair_NOT = 1 - probabiltyOfPair;
    double probabiltyOfTwoPair_NOT = 1 - probabiltyOfPair/2;
    printf("\nDon't have pair: %lf\n",probabiltyOfPair_NOT);
    printf("\nDon't have two pairs: %lf\n",probabiltyOfTwoPair_NOT);
}


int main()
{
    //TODO: Perform operations.
    Test_Cards();
    return 0;
}