#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 0;

char s1[105];
char s2[105];

void solution()
{
    fgets(s1,105,stdin);
    s1[strlen(s1) - 1] = NULL;
    fgets(s2,105,stdin);
    s2[strlen(s2) - 1] = NULL;
    
}

int main()
{
    int t;
    if(CHECK)
    {
        scanf("%d",&t);
        getchar();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}