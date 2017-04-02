#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,num[100],maior=-999999999,posicao;
	for (i=1;i<=100;i++)
 	{
      scanf("%d",&num[i]);
   	}
	for (i=1;i<=100;i++)
	{
     if(num[i]>maior)
      {
      	maior = num[i];
		posicao = i; 
      }
	}
	printf("%d\n",maior);
	printf("%d\n",posicao);
  system("pause");	
}
