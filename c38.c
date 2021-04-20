

#define NDEBUG //goes before <assert.h>
#define SQ(x) ((x)*(x))
#define ADD(x,y) ((x)+(y))
#define SUB(x,y) ((x)-(y))
#define MUL(x,y) ((x)*(y))
#define INT int

#include <stdio.h>
#include <assert.h>

int main(void)
{
    INT result = MUL(SQ(5) + ADD(SQ(5),SQ(10)) + SUB(10,5),5);
    int res = SQ(5);
    assert(res<0);
    printf("RES: %d",result);
    return 0;
}
