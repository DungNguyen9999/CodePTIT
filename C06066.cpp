#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef long long ll;

char s[205];
char s1[205];
char s2[205];

int main()
{
    gets(s);
    int sum;
    if (strlen(s) <= 36)
    {
        for (int i = 0; i < strlen(s)/2; i++)
        {
            s1[i] = s[i];
        }
        for (int i = strlen(s)/2 + 1; i < strlen(s); i++)
        {
            s2[i] = s[i];
        }
        ll a = atoll(s1);
        ll b = atoll(s2);
        
    }
}