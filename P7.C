// João Victor Oliveira Ferreira	
// 11721EAU006

#include <stdio.h>

int ackerman(int, int);
int main()
{	int m, n;
	printf("Digite os valores para m e n, respectivamente: ");
	scanf("%d %d", &m, &n);

	printf("Saida = %d ", ackerman(m, n));
	return 0;
}
int ackerman(int m, int n)
{	if(m==0){	return n + 1;	}
	else if(m > 0 && n==0) {	ackerman(m-1, 1);	}
	else if(m > 0 && n > 0) {	ackerman(m - 1, ackerman(m, n - 1));
	}
}
