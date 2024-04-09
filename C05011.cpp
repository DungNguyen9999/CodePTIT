#include<stdio.h>

int a[100][100];
int b[100][100];
int c[100][100];
int n,m;

void input() 
{
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d",&a[i][j]);
}

void cvi()
{
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            b[j][i] = a[i][j];
        }
    }
}
void tich() 
{
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            for(int l = 0; l < m; l++) 
            {
                c[i][j] += a[i][l] * b[l][j];
            }
        }
    }
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

void reset()
{
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            b[j][i] = 0;
        }
    }
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            c[i][j] = 0;
        }
    }
}

int main() 
{
    int t;
    scanf("%d",&t);
    int dem = 1;
    while(t--)
    {
        input();
        cvi();
        printf("Test %d:\n",dem);
        ++dem;
        tich();
        reset();
    }
}