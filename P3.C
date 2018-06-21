// João Victor Oliveira Ferreira	
// 11721EAU006


#include <stdio.h>

int dec_all(int num, int vet[256])
{	int resto[100], guarda, i=0, j=0, base=2, num1=0;
	if(num < 0)
	{ num1 = num;
	  num = (-num) - 1;
	  guarda = num;		}
	else if(num >= 0)
	{	num1 = num;
		guarda = num;	}
	resto[0] = 1;
	for(i=0; num >= base; i++)
	{	resto[i] = num%base;	
		num = num/base;
		if(num < base)
		{	i++;
			resto[i] = num;		} 
	}	if(guarda>base){ i--;	}
	num = guarda;	
	guarda = 32;
	for(j=0; j<guarda; j++)
	{	if(j < (guarda-(i+1)))
		{	vet[j] = 0;		}
		else
		{	vet[j] = resto[i];
			i--;
		}
		if(num1 < 0)
		{	if(vet[j] == 0){	vet[j] = 1;		}
			else if(vet[j] == 1){	vet[j] = 0;			}
		}
	}
		return j; 
}

int main ()
{
	int opcao, i=0, j, k, num1, num2, num3, vet_n[256], vet_n1[256], vet_c[256];

	do
	{	printf("CALCULADORA BITWISE");
		printf("\n###  1-NOT                ###");
		printf("\n###  2-AND                ###");
		printf("\n###  3-OR                 ###");
		printf("\n###  4-XOR                ###");
		printf("\n###  5-RIGHT SHIFT        ###");
		printf("\n###  6-LEFT SHIFT         ###");
		printf("\n###  7-Sair do programa   ###");
		printf("\nSua opcao e: ");
		scanf("%d", &opcao);
		
		if(opcao == 7){return 0;}
		else if(opcao != 1 && opcao <= 7)
		{	printf("\nDigite os dois valores que serao operados na Calculadora Bitwise: ");
			scanf("%d %d", &num1, &num2);
			getchar();	}
		else if(opcao == 1)
		{	printf("\nDigite o valor que sera operado na Calculadora Bitwise: ");
			scanf("%d", &num1);
			getchar();
		}
			
		switch(opcao)
		{	case 1:
				j = dec_all(num1, vet_n);
				printf("\nNOT %d (", num1);
				for(i=0; i<j; i++){	printf("%d", vet_n[i]); if(i==(j-1)){	printf(") : ");	}	}
				num1 = ~num1;
				 j = dec_all(num1, vet_n1);
				printf(" %d (", num1);
				for(i=0; i<j; i++){	printf("%d", vet_n1[i]);  if(i==(j-1)){	printf(") ");	}	}
					printf("\n\n");
				break;
			case 2:
	 			j = dec_all(num1, vet_n);
				printf("\n%d (", num1);
				for(i=0; i<j; i++){	printf("%d", vet_n[i]); if(i==(j-1)){	printf(") AND");	}	}
				 j = dec_all(num2, vet_n1);
				printf(" %d (", num2);
				for(i=0; i<j; i++){	printf("%d", vet_n1[i]);  if(i==(j-1)){	printf(") :");	}	}
				 num3 = num1 & num2;
				j= dec_all(num3, vet_c);
				printf(" %d (" ,num3);
				for(i=0; i<j; i++){	printf("%d", vet_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 3:
				j = dec_all(num1, vet_n);
				printf("\n%d (", num1);
				for(i=0; i<j; i++){	printf("%d", vet_n[i]); if(i==(j-1)){	printf(") OR");	}	}
				 j = dec_all(num2, vet_n1);
				printf(" %d (", num2);
				for(i=0; i<j; i++){	printf("%d", vet_n1[i]);  if(i==(j-1)){	printf(") :");	}	}
				 num3 = num1 | num2;
				j= dec_all(num3, vet_c);
				printf(" %d (" ,num3);
				for(i=0; i<j; i++){	printf("%d", vet_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 4:
				j = dec_all(num1, vet_n);
				printf("\n%d (", num1);
				for(i=0; i<j; i++){	printf("%d", vet_n[i]); if(i==(j-1)){	printf(") XOR");	}	}
				 j = dec_all(num2, vet_n1);
				printf(" %d (", num2);
				for(i=0; i<j; i++){	printf("%d", vet_n1[i]);  if(i==(j-1)){	printf(") :");	}	}
				 num3 = num1 ^ num2;
				j= dec_all(num3, vet_c);
				printf(" %d (" ,num3);
				for(i=0; i<j; i++){	printf("%d", vet_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 5:
				j = dec_all(num1, vet_n);
				printf("\n%d (", num1);
				for(i=0; i<j; i++){	printf("%d", vet_n[i]); if(i==(j-1)){	printf(") >>");	}	}
				 j = dec_all(num2, vet_n1);
				printf(" %d (", num2);
				for(i=0; i<j; i++){	printf("%d", vet_n1[i]);  if(i==(j-1)){	printf(") :");	}	}
				 num3 = num1 >> num2;
				j= dec_all(num3, vet_c);
				printf(" %d (" ,num3);
				for(i=0; i<j; i++){	printf("%d", vet_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 6:
				j = dec_all(num1, vet_n);
				printf("\n%d (", num1);
				for(i=0; i<j; i++){	printf("%d", vet_n[i]); if(i==(j-1)){	printf(") >>");	}	}
				 j = dec_all(num2, vet_n1);
				printf(" %d (", num2);
				for(i=0; i<j; i++){	printf("%d", vet_n1[i]);  if(i==(j-1)){	printf(") :");	}	}
				 num3 = num1 << num2;
				j= dec_all(num3, vet_c);
				printf(" %d (" ,num3);
				for(i=0; i<j; i++){	printf("%d", vet_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			default:
				break;
		}
	}while(1);
} 
