// João Victor Oliveira Ferreira
// 11721EAU006

#include <stdio.h>

int soma(int*, int*);
float divide(float, float);
int main ()
{
	int vet[20], i=0, k;
	int *p, *q;
	float j, i1;
	printf("\nDigite um numero entre 5 e 20, que definira o tamanho do vetor: ");
	do{	scanf("%d", &k);}while(k<5 || k>20);
	do{ vet[i] = 0; i++; }while(i<k);
	i=0;
	while(i<k)
	{	printf("\nDigite o valor %d do vetor: ", i+1);
		scanf("%d", &vet[i]);	i++;	}
	p = vet;	q = vet+k-1;	i=k;
    j = float(soma(p, q));
    i1 = float(i);
	printf("\n\n Media = %.1f", divide(i, j));
	return 0;
}
int soma(int *p, int *q)
{	return (*q) + ((q==p) ? 0 : soma(p, q-1));	}
float divide(float p, float q)
{	return q/p;	}
