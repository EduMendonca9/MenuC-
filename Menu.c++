#include <stdio.h>

int main()
{
	//Variavel do menu
	int i;
	
	//Variavel do primeiro programa
	int Numero;
	
	//Variavel do quarto programa
	int Ano;
	
	//Variaveis do quinto programa
	int Nota1, Nota2, Nota3, MediaPonderada;
	
	//Variaveis do sexto programa
	float NOTA1, NOTA2, Media;
	
	//Variaveis do oitavo programa
	int NUMERO, m, t = 0;
	
	//Variaveis do nono programa
	int Z, numero, numero1, numero2, numero3;
	
	//Variavel do decimo programa
	int Matricula = 1920026760;

	
	
	do
	{	
		//Menu
		printf("\nMenu dos Programas\n");
		printf("\n1-Programa que identifica se um numero e par ou nao");
		printf("\n2-");
		printf("\n3-");
		printf("\n4-Programa que verifica se o ano e bissexto ou nao");
		printf("\n5-Programa que le 3 notas de um aluno e faz uma media ponderada");
		printf("\n6-Programa que le duas notas e faz uma media se as Duas Notas forem validas");
		printf("\n7-");
		printf("\n8-Programa que le um numero e diz se ele e primo ou nao");
		printf("\n9-Programa que le um numero e mostra os primeiros numeros da sequencia de Fibonacci");
		printf("\n10-Programa que lmprime meu nome e meu numero de matricula em hexadecimal");
		printf("\n\nDigite um dos numeros acima para abrir um dos programas:");
		
		scanf("%d", &i);
		
		//Programas
		switch(i)
		{
			//Programa que verifica se o numero é Par ou Não
			case 1 :
				printf("\nAgora digite um numero: ");
				scanf("%d", &Numero );
				
				if(Numero % 2 == 0)
					printf("\nResposta:O numero e Par\n");
				else
					printf("\nResposta:O numero nao e Par\n");
			break;
			
			//Programa que verifica se o Ano é Bissexto
			case 4 :
				printf("\nDigite o Ano: ");
				scanf("%d", &Ano);
				
				if(Ano % 4 == 0)
					printf("\nResposta:O ano e Bissexto\n");
				else
					printf("\nResposta:O ano nao e Bissexto\n");
			break;
			
			//Programa que le 2 notas de um aluno e faz uma media ponderada
			case 5 :
				printf("\nDigite a primeira Nota: ");
				scanf("%d", &Nota1);
				printf("\nDigite a segunda Nota: ");
				scanf("%d", &Nota2);
				printf("\nDigite a terceira Nota: ");
				scanf("%d", &Nota3);
				
				MediaPonderada = ((Nota1*1)+(Nota2*1)+(Nota3*2))/(1+1+2);
				printf("\nA media ponderada das notas e: %d \n", MediaPonderada);
			
				if(MediaPonderada>=60)
					printf("\nO Aluno esta aprovado\n");
				else
					printf("\nO Aluno esta reprovado\n");
			break;
			
			//Programa que pede duas notas de um aluno, se elas forem validas, o programa imprime a media das notas
			case 6 :
				printf("\nDigite a primeira Nota: ");
				scanf("%f", &NOTA1);
				printf("\nDigite a segunda Nota: ");
				scanf("%f", &NOTA2);
				
				if(NOTA1>=0.0 && NOTA1<=10.0 || NOTA2>=0.0 && NOTA2<=10.0)
				{
					Media = NOTA1/2 + NOTA2/2;
					printf("\nA media das notas e: %f \n", Media);
				}
				else
					printf("\nNOTAS INVALIDAS\n");
			break;
			
			//Programa que le um numero e diz se ele é primo ou não
			case 8 :
				printf("\nDigite um numero: ");
				scanf("%d", &NUMERO);
				
				for(m=1; m<=NUMERO; m++)
				{
					if(NUMERO % m == 0)
					{
						t++;
					}
				}
				if(t == 2)
				{
					printf("\nO numero e primo\n");
				}
				else
					printf("\nO numero nao e primo\n");
				
			break;
			
			//Programa que le um numero e mostra os primeiros numeros da sequência de Fibonacci
			case 9 :
				printf("\nDigite um numero: ");
				scanf("%d", &numero );
				
				for(Z=1; Z<=5; Z++)
				{
					if(Z=1)					
						printf("\nA sequencia de numeros Fibonacci = %d", numero);
					if(Z=2)
						printf(",%d", numero);
					if(Z=3)
						numero1 = numero + numero;
						printf(",%d", numero1);
					if(Z=4)
						numero2 = numero1 + numero;
						printf(",%d", numero2);
					if(Z=5)
						numero3 = numero2 + numero1;
						printf(",%d\n", numero3);
				}
			break;
			
			//Programa que imprime o meu nome e o numero da matricula em Hexadecimal
			case 10 :
				printf("\nMeu nome: Joao Eduardo\n");
				printf("Numero da Matricula em Hexadecimal: %X \n", Matricula);	
			break;
		}
		
		if(i<0 || i>10)
		{		
			printf("\nOPCAO INVALIDA DIGITE OUTRO NUMERO\n");
		}
		
	}
	while(i!=0);
	
	printf("Ate logo!!!!");
}

