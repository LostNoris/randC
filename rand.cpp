//  rand.cpp
#include "rand.hpp"
#include <std.h>

main()
{
    int x[300], j, total = 300, srand(), Rnd_rnd(), seed = -8112;
    int bottom = 1;
    int top = 5;
    span = top - bottom + 1;
    srand(seed);
    for (j = 0;j < total; J++)
    {if (j % 15 == 0)
        printf("\n");
        x[j] = Rnd_rnd(bottom,span);
        printf("%d ",x[j])
        }
}

int Rnd_rnd(low, range)
int low, range;
{
    long u;
    
    u = ((rand(rand()) / 32767.) *
         (rand(rand()) / 32767.)) * range + low;
    return u;
}
