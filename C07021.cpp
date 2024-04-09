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

struct Sinhvien
{
    int stt;
    char ten[1000];
    double diem1, diem2, diem3;
    double tongdiem;
};
typedef struct Sinhvien sinhvien;

int cmp (const void* a, const void* b)
{
    sinhvien *x = (sinhvien*)a;
    sinhvien *y = (sinhvien*)b;

    return x -> tongdiem - y -> tongdiem;
}

sinhvien sv[1000];

void solution()
{
    int cnt = 1;
    while(1)
    {
        int n = input();
        if(n == 1)
        {
            int t = input();
            getchar();
            while(t--)
            {
                sv[cnt].stt = cnt;
                gets(sv[cnt].ten);
                scanf("%lf%lf%lf",&sv[cnt].diem1,&sv[cnt].diem2,&sv[cnt].diem3);
                getchar();
                sv[cnt].tongdiem = sv[cnt].diem1 + sv[cnt].diem2 + sv[cnt].diem3;
                ++cnt;
            }
        }
        else if(n == 2)
        {
            int t = input();
            gets(sv[t].ten);
            scanf("%lf%lf%lf",&sv[t].diem1,&sv[t].diem2,&sv[t].diem3);
            getchar();
            sv[t].tongdiem = sv[t].diem1 + sv[t].diem2 + sv[t].diem3;
        }
        else if(n == 3)
        {
            break;
        }
        qsort(sv,1000,sizeof(sinhvien),cmp);
        
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