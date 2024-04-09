#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;

int CHECK = 0;

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

int check[100005];

int kogiam(int n)
{
    while(n)
    {
        int sophai = n % 10;
        int sotrai = n / 10 % 10;
        if(sophai <= sotrai)
            return 0;
        n /= 10;
    }
    return 1;
}

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

void solution()
{
    int cnt = 0;
    do
    {
        ++cnt;
        int n = input();
        ++check[n];
        if(getchar() == '\n')   break;
    } while(1);
    qsort(check,cnt,sizeof(int),cmp);
    for(int i = 0; i < cnt; i++)
    {
        printf("%d %d\n",check[i],i);
    }
}

int main()
{
    int t;
    if(CHECK)   t = input();
    else    t = 1;
    while(t--)
    {
        solution();
    }
}