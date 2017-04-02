#include <stdio.h>
int main()
{
    float acum=0, M[12][12];
    char T[2];
    int linha2,linha,coluna;
    scanf("%d", &linha2);
    fflush(stdin);
	scanf("%s", &T);
    for(linha=0;linha<=11;linha++)
    {
        for(coluna=0;coluna<=11;coluna++)
        {
        scanf("%f",&M[linha][coluna]);
        if(linha==linha2)
        acum+=M[linha][coluna];
        }
    }
    if(T[0]=='S')
        printf("%.1lf\n",acum);
    else if(T[0]=='M')
    {
        acum=acum/12.0;
        printf("%.1lf\n",acum);
    }
    return 0;
}
