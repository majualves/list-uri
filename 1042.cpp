#include<stdio.h>
#include<stdlib.h>

int main()
{
int aux, n1,n2,n3,a,b,c;
 scanf("%d %d %d",&n1,&n2,&n3);	
  a = n1; 
  b = n2;
  c = n3;
if (n1>n2) {
 	aux  = n1;
 	n1 = n2;
	n2 = aux; 
 }
if(n1>n3){
	aux = n1;
	n1 = n3;
	n3 = aux;
} 
if (n2>n3){
	aux = n2;
	n2 = n3;
	n3 = aux;
}
	printf("%d\n",n1);
	printf("%d\n",n2);
	printf("%d\n",n3);
	printf("\n");
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
system("pause");	
}
