#include<stdio.h>//Biblioteca de comunica��o com o usuario
#include<stdlib.h>//Biblioteca de aloca��o de espa�o
#include<locale.h>//Biblioteca de aloca��o de texto por regi�o
#include<string.h>//Biblioteca responsavel por cuidar dos strings

int registro()//Fun��o respons�vel pelo cadastro dos usu�rios no sistema
{    //Inic�o da cria��o de vari�veis/string
	    char arquivo[40];
	    char cpf [40];
	    char nome[40];
	    char sobrenome[40];
	    char cargo[40];
	//Final da cria��o de vari�veis/string
	    
	    printf("Digite o CPF a ser cadastrado ");//Coletando informa��o do usu�rio
	    scanf("%s", cpf);//%s se refere a string
	    
	    strcpy(arquivo, "w");//Responsavel por copiar os valores das strings
	    
	    FILE *file;//Cria o arquivo
	    file = fopen(arquivo, "w");
	    fprintf(file,cpf);//Salva o valor da variavel
	    fclose(file);//Fecha o arquivo
	    
	    file = fopen(arquivo, "a");
	    fprintf(file,",");
	    fclose(file);
	    
	    printf("Digite o nome a ser cadastrado: ");
	    scanf("%s", nome);
	    
	    file = fopen(arquivo,"a");
	    fprintf(file,nome);
	    fclose(file);
	    
	    file = fopen(arquivo, "a");
	    fprintf(file,",");
	    fclose(file);
	    
	    printf("Digite o sobrenome a ser cadastrado: ");
	    scanf("%s",sobrenome);
	    
	    file = fopen(arquivo,"a");
	    fprintf(file,sobrenome);
	    fclose(file);
	    
	    file = fopen(arquivo, "a");
	    fprintf(file,",");
	    fclose(file);
	    
	    printf("Digite o cargo a ser cadastrado: ");
	    scanf("%s",cargo);
	    
	    file = fopen(arquivo,"a");
	    fprintf(file,cargo);
	    fclose(file);
	    
	    system("pause");
}
int consulta()
{
	setlocale(LC_ALL,"Portuguese");
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file=fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("N�o foi possivel abrir o arquivo , n�o localizado!.\n");
	}
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("\nEssas s�o as informa��es do usuario: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	system("pause");

}
int deletar()
{
	    char cpf[40];
		
		printf("Digite o CPF do usu�rio a ser deletado: ");
		scanf("%s",cpf);
		
		remove(cpf);//serve apenas para deletar do sistema
		FILE *file;//FILE:entra no campo da biblioteca que fala sobre a fun��o FILE/*file puxar os arquivos dentro dela
		file=fopen(cpf,"r");//Abre a pasta e procura o arquivo que ir� ser passado/"r"-pedir para ler
		
		if(file==NULL);
		{
			printf("O usu�rio n�o se encontra no sistema!\n");// \n barra ao contr�rio sistema entende como comando
			system("pause");
		}
			
}
int main()
{
	int opcao=0;
	int x=1;//X=la�o
	for(x=1;x=1;)
    {
	 system("cls");
	 
	 setlocale(LC_ALL,"Portuguese");//Definindo a linguagem
	
	 printf("#####Cart�rio da EBAC####\n\n");//Inicio do menu
	 printf("Escolha a sua op��o desejada no menu:\n\n");
	 printf("\t1- Registrar nomes:\n");
	 printf("\t2- Consultar nomes:\n");
	 printf("\t3- Deletar   nomes:\n");
	 printf("\t4- Sair do sistema:\n\n");//Fim do menu
	 printf("Qual op��o deseja selecionar: ");
	 scanf("%d",&opcao);//armazenamento de escolhas do usu�rio
	
	 system("cls");//respons�vel por limpar a tela
	
	 switch(opcao)
	 {
	 	case 1:
	 	registro();//chamada de fun��es
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf("Obrigado por utilizar o nosso sistema!\n");
		return 0;
		break;
		
		default:
		printf("Essa op��o n�o esta dispon�vel!\n");
		system("pause");
		break;
	 }
	 
	 }
     }
