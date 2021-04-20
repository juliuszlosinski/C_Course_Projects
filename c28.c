#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCALLS 10000000 /* Number of function calls */
#define NCOLS 8 /* Number of columns */
#define NLINES 3 /* Number of lines */

int main(void)
{
    int i = 0, val;
    long begin, diff, end;

    begin=time(NULL);
    srand(time(NULL));
    printf("\nTIMING TEST: %d calls to rand() \n\n", NCALLS);

    while(i<=NCALLS)
    {
        val = rand();
        if(i<= NCOLS * NLINES)
        {
           printf("%7d",val);
           if(i%NCOLS == 0)
           putchar('\n'); 
        }
        else if(i == NCOLS * NLINES + 1)
        {
            printf("%7s \n\n", "....");
        }
        i++;
    }

    end = time(NULL);
    diff = end - begin;
    printf("%s%ld\n%s%ld\n%s%ld\n%s%0.10f\n\n", " end time: ", end, "begin time: ", begin, "elapsed time: ", diff, "time for each: ", (double)diff/NCALLS);
    return 0;
}