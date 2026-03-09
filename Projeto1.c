#include <stdio.h>
#include "FILA.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>

void Inserir(Fila* f, int valor, int valor2)
{
    int idade1;
    char nome1[MAX_NOME];
    char espec1[MAX_ESP];
    int dia,mes,ano;
    printf("Digite o Nome de seu Pet: ");
    scanf("%s",nome1);
    printf("Digite a espécie de seu Pet: ");
    scanf("%s",espec1);
    do
    {
    printf("Digite a idade de seu Pet em anos: ");
    scanf("%d",&idade1);
            if (idade1<0 || idade1>150)
        {
            printf("\nIdade Inválida, digite novamente: \n");
        }
    } while (idade1<0 || idade1>150);

    do
    {
        printf("Digite o dia do nascimento de seu Pet: ");
        scanf("%d",&dia);
        if (dia<1 || dia>31)
        {
            printf("\nDia Inválido, digite novamente: \n");
        }
    }while(dia<1 || dia>31);

    do
    {
    printf("Digite o mês de nascimento de seu Pet: ");
    scanf("%d",&mes);
    if (mes<1 || mes>12)
    {
        printf("\nMês Inválido, digite novamente: \n");
    }
    }while(mes<1 || mes>12);

    do
    {
    printf("Digite o ano de nascimento de seu Pet: ");
    scanf("%d",&ano);
    if (ano<1875 || ano>2025 || 2025-idade1!=ano)
    {
        printf("Ano Inválido, digite novamente: \n");
    }
    }while(ano<1875 || ano>2025 || 2025-idade1!=ano);

    InsereFila(f,valor,nome1,espec1,idade1,valor2,dia,mes,ano);
}

void ProcuraPet(Fila*f,Fila*f1,Fila *f2)
{
    Nos* aux=f->ini;
    Nos* aux2=f1->ini;
    Nos* aux3=f2->ini;
    int x,y,k;
    char nome[MAX_NOME];
    printf("Deseja procurar seu Pet pelo Nome ou ID(digite 0 para nome ou 1 para ID):  ");
    scanf("%d",&x);

    if(x==1)
    {
        printf("Digite o ID: ");
        scanf("%d",&y);
        while(aux!=NULL)
        {
            if(aux->info->id==y)
            {
            printf("Encontrado na Fila de Atendimento Emergencial: \n");
            printf("%d - ",aux->info->id);
            printf("%s - ",aux->info->nome);
            printf("%s - ",aux->info->espec);
            printf("%d  ",aux->info->idade);
            printf("prioridade: %d (0-Emergencial / 1-Consulta Padrao- ",aux->info->prioridade);
            printf("dia: %d -",aux->info->aniversario->dia);
            printf("mês: %d  -",aux->info->aniversario->mes);
            printf("ano: %d  \n",aux->info->aniversario->ano);
            }
            aux=aux->prox;
        }
        while(aux2!=NULL)
        {
            if(aux2->info->id==y)
            {
            printf("Encontrado na Fila de Atendimento Padrao: \n");
            printf("%d - ",aux2->info->id);
            printf("%s - ",aux2->info->nome);
            printf("%s - ",aux2->info->espec);
            printf("%d  ",aux2->info->idade);
            printf("prioridade: %d (0-Emergencial / 1-Consulta Padrao- ",aux2->info->prioridade);
            printf("dia: %d -",aux2->info->aniversario->dia);
            printf("mês: %d  -",aux2->info->aniversario->mes);
            printf("ano: %d  \n",aux2->info->aniversario->ano);
            }
            aux2=aux2->prox;
        }
        while(aux3!=NULL)
        {
            if(aux3->info->id==y)
            {
            printf("Encontrado na Fila de Atendidos: \n");
            printf("%d - ",aux3->info->id);
            printf("%s - ",aux3->info->nome);
            printf("%s - ",aux3->info->espec);
            printf("%d  ",aux3->info->idade);
            printf("prioridade: %d (0-Emergencial / 1-Consulta Padrao- ",aux3->info->prioridade);
            printf("dia: %d -",aux3->info->aniversario->dia);
            printf("mês: %d  -",aux3->info->aniversario->mes);
            printf("ano: %d  \n",aux3->info->aniversario->ano);
            }
            aux3=aux3->prox;
        }
    }
    if(x==0)
    {
        printf("Digite o Nome de seu pet: ");
        scanf("%s",nome);
        while(aux!=NULL)
        {
            k=strcmp(aux->info->nome,nome);
            if(k==0)
            {
            printf("Encontrado na Fila de Atendimento Emergencial: \n");
            printf("%d - ",aux->info->id);
            printf("%s - ",aux->info->nome);
            printf("%s - ",aux->info->espec);
            printf("%d  ",aux->info->idade);
            printf("prioridade: %d (0-Emergencial / 1-Consulta Padrao)- ",aux->info->prioridade);
            printf("dia: %d -",aux->info->aniversario->dia);
            printf("mês: %d  -",aux->info->aniversario->mes);
            printf("ano: %d  \n",aux->info->aniversario->ano);
            }
            aux=aux->prox;
        }
        while(aux2!=NULL)
        {
            k=strcmp(aux2->info->nome,nome);
            if(k==0)
            {
            printf("Encontrado na Fila de Atendimento Padrao: \n");
            printf("%d - ",aux2->info->id);
            printf("%s - ",aux2->info->nome);
            printf("%s - ",aux2->info->espec);
            printf("%d  ",aux2->info->idade);
            printf("prioridade: %d (0-Emergencial / 1-Consulta Padrao)- ",aux2->info->prioridade);
            printf("dia: %d -",aux2->info->aniversario->dia);
            printf("mês: %d  -",aux2->info->aniversario->mes);
            printf("ano: %d  \n",aux2->info->aniversario->ano);
            }
            aux2=aux2->prox;
        }
        while(aux3!=NULL)
        {
            k=strcmp(aux3->info->nome,nome);
            if(k==0)
            {
            printf("Encontrado na Fila de Atendidos: \n");
            printf("%d - ",aux3->info->id);
            printf("%s - ",aux3->info->nome);
            printf("%s - ",aux3->info->espec);
            printf("%d  ",aux3->info->idade);
            printf("prioridade: %d (0-Emergencial / 1-Consulta Padrao)- ",aux3->info->prioridade);
            printf("dia: %d -",aux3->info->aniversario->dia);
            printf("mês: %d  -",aux3->info->aniversario->mes);
            printf("ano: %d  \n",aux3->info->aniversario->ano);
            }
            aux3=aux3->prox;
        }
    }

}

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int x,id=0,n;
    int prio1=1;
    int prio0=0;
    Pet *animais = NULL;
    Fila *fn=CriaFila();
    Fila *feme=CriaFila();
    Fila *flix=CriaFila();

    printf("                                 +------------------------------+\n");
    printf("                                 |       Clínica Veterinaria    |\n");
    printf("                                 +------------------------------+\n\n");

    printf("                                  Bem Vindo a Clínica Veterinária\n\n");
    while(1)
    {
    printf("\t  /\\_/\\                /^ ^\\                           /^ ^\\              ,_,\n");

    // Linha 2
    printf("\t ( o.o )              / 0 0 \\    Clínica RicArtPia    / 0 0 \\            (O,O)\n");

    // Linha 3
    printf("\t  > ^ <               V\\ Y /V                         V\\ Y /V            (   )\n");

    // Linha 4
    printf("\t                       / - \\                           / - \\              \" \"\n");

    // Linha 5
    printf("\t><(((*>                |    \\                          /    |\n");

    // Linha 6
    printf("\t                      || (__V                          V__) ||          ><(((*>\n\n");

    printf("\n\n\t\t\t\tDigite o número da opção desejada: ");
    printf("\n\n\t\t\t\t0-Emergência\n");
    printf("\t\t\t\t1-Consulta Padrão\n");
    printf("\t\t\t\t2-Atender Pet\n");
    printf("\t\t\t\t3-Buscar Pet\n");
    printf("\t\t\t\t4-Imprimir todos os Pets registrados\n");
    printf("\t\t\t\t5-Imprimir Próximo Pet a ser Atendido\n");
    printf("\t\t\t\t6-Imprimir Pets Atendidos\n");
    printf("\t\t\t\t7-Finalizar o Sistema\n");
    printf("\t\t\t\t");
        scanf("%d",&x);
        switch (x)
        {
            case 0:  //Emergencia
               id=CodigoID(feme);
               Inserir(feme,id,prio0);
               imprime1termoFila(feme);
               printf("\n");
               system("pause");
               system("cls");
                break;

            case 1:  //Atendimento Padrao
               id=CodigoID(fn);
               Inserir(fn,id,prio1);
               imprime1termoFila(fn);
               printf("\n");
               system("pause");
               system("cls");
                break;

            case 2:  //Atender Pet
                if (!VaziaFila(feme))
                {
                    RetiraFila(feme,flix);
                    printf("Paciente de Emergência Atendido");
                    imprime1termoFila(flix);
                }
                else
                {
                    RetiraFila(fn,flix);
                    printf("Paciente de Consulta Padrão Atendido");
                    imprime1termoFila(flix);
                }
                  printf("\n");
                  system("pause");
                  system("cls");
                break;

            case 3:  //Buscar Pet
                ProcuraPet(feme,fn,flix);
                printf("\n");
                system("pause");
                system("cls");
                break;

            case 4:  //Imprimir todos os Pets Registrados
                printf("Fila de Emergência: \n");
                imprimeFila(feme);
                printf("Fila de Atendimento Padrão: \n");
                imprimeFila(fn);
                printf("\n");
                system("pause");
                system("cls");
                break;

            case 5:  //Imprimir Prox Pet
            if (!VaziaFila(feme))
            {
                imprime1termoFilaIni(feme);
            }
            else if (!VaziaFila(fn))
            {
                imprime1termoFilaIni(fn);
            }
            else
            {
                printf("Nenhum paciente a ser atendido.\n");
            }
                printf("\n");
                system("pause");
                system("cls");
            break;

            case 6:  //Imprimir Pets Atendidos
                printf("Fila de Atendidos: \n");
                imprimeFila(flix);
                printf("\n");
                system("pause");
                system("cls");
                break;

            case 7: //Finaliza Programa
                exit(1);
                break;


            default:
                printf("\n\topção inválida");
                break;
        }

    }
return 0;
    }
