#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 0;

char s[1005];

void solution()
{
    scanf("%s",s);
    int n = strlen(s);
    int check = 0;
    for(int i = 0; i < n; i++)
    {
        char a = s[i];
        char b = s[i + 1];
        if((a == '(' && b ==')') || (a == '[' && b ==']') || (a == '{' && b =='}'))
    }
    if(check == n/2)
        printf("1");
    else
    printf("0");    
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

