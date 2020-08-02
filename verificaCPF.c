#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Faz a validação do primeiro digito*/

int Valida_cpf1(int cpf[11])
{

    int i,somador = 0,d1,result1;

    for (i=0;i<9;i++)
    {
        somador = somador + cpf[i]*(10-i);
    }
    result1 = somador%11;
    if ((result1 == 0) || (result1 == 1))
    {
        d1 = 0;
    }
        else
        {
            d1 = 11 - result1;
        }
    return d1;

}
/*Faz a validação do segundo digito*/
int Valida_cpf2(int cpf[11])
{
    int i,somador = 0,d2,result2;

    for (i=0;i<10;i++)
    {
        somador = somador + cpf[i]*(11-i);
    }
    result2 = somador%11;
    if ((result2 == 0) || (result2 == 1))
    {
        d2 = 0;
    }
        else
        {
            d2 = 11 - result2;
        }


    return d2;

}
/*faz a checagem se os números do CPF são todos iguais*/
int num_igual(int x[11])
{

    if ((x[0] == 0)&&( x[1] == 0) &&( x[2] == 0) &&( x[3] == 0)&&( x[4] == 0)&&( x[5] == 0 )&&( x[6] == 0)&&( x[7] == 0)&&( x[8] == 0) &&( x[9] == 0) &&( x[10] == 0))
    {
        system("cls");
        printf("CPF invalido!\n");
        exit (0);
    }
    if ((x[0] == 1)&&( x[1] == 1)&&( x[2] == 1) &&( x[3] ==1) &&( x[4] == 1) &&( x[5] == 1) &&( x[6] == 1 )&&( x[7] == 1 )&&( x[8] == 1)&&( x[9] == 1)&&( x[10] == 1))
    {
        system("cls");
        printf("CPF invalido!\n");
        exit (0);
    }

    if ((x[0] == 2)&&( x[1] == 2 )&&( x[2] == 2 )&&( x[3] == 2 )&&( x[4] == 2) &&( x[5] == 2)&&( x[6] == 2 )&&( x[7] == 2) &&( x[8] == 2) &&( x[9] == 2) &&( x[10] == 2))
    {
        system("cls");
        printf("CPF invalido!\n");
        exit (0);
    }

    if ((x[0] == 3)&&( x[1] == 3) &&( x[2] == 3) &&( x[3] == 3) &&( x[4] == 3) &&( x[5] == 3) &&( x[6] == 3) &&( x[7] == 3) &&( x[8] == 3) &&( x[9] == 3) &&( x[10] == 3))
    {
        system("cls");
        printf("CPF invalido!\n");
        exit (0);
    }
    if ((x[0] == 4)&&( x[1] == 4) &&( x[2] == 4) &&( x[3] == 4) &&( x[4] == 4) &&( x[5] == 4) &&( x[6] == 4) &&( x[7] == 4) &&( x[8] == 4) &&( x[9] == 4) &&( x[10] == 4))
    {
        system("cls");
        printf("CPF invalido!\n");
        exit (0);
    }
    if ((x[0] == 5)&&( x[1] == 5) &&( x[2] == 5) &&( x[3] == 5) &&( x[4] == 5) &&( x[5] == 5) &&( x[6] == 5) &&( x[7] == 5) &&( x[8] == 5) &&( x[9] == 5) &&( x[10] == 5))
    {
        system("cls");
        printf("CPF invalido!\n");
        exit (0);
    }
    if ((x[0] == 6)&&( x[1] == 6) &&( x[2] == 6)&&( x[3] == 6) &&( x[4] == 6) &&( x[5] == 6) &&( x[6] == 6) &&( x[7] == 6) &&( x[8] == 6) &&( x[9] == 6) &&( x[10] == 6))
    {
        system("cls");
        printf("CPF invalido!\n");
        exit (0);
    }
    if ((x[0] == 7)&&( x[1] == 7) &&( x[2] == 7) &&( x[3] == 7) &&( x[4] == 7)&&( x[5] == 7) &&( x[6] == 7) &&( x[7] == 7) &&( x[8] == 7) &&( x[9] == 7) &&( x[10] == 7))
    {
        system("cls");
        printf("CPF invalido!\n");
        exit (0);
    }
    if ((x[0] == 8)&&( x[1] == 8) &&( x[2] == 8) &&( x[3] == 8) &&( x[4] == 8) &&( x[5] == 8) &&( x[6] == 8) &&( x[7] == 8)&&( x[8] == 8) &&( x[9] == 8) &&( x[10] == 8))
    {
        system("cls");
        printf("CPF invalido!\n");
        exit (0);
    }

    if ((x[0] == 9)&&( x[1] == 9) &&( x[2] == 9) &&( x[3] == 9) &&( x[4] == 9) &&( x[5] == 9)&&( x[6] == 9 )&&( x[7] == 9) &&( x[8] == 9) &&( x[9] == 9) &&( x[10] == 9))
    {
        system("cls");
        printf("CPF invalido!\n");
        exit (0);
    }

}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arqCPF;
    char cpf[14];
    int i_cpf[11];
    int d1,d2,i,op=1;
    system("cls");
    printf("Digite um CPF usando os pontos <.> e traços <->:\n");
    scanf("%s",&cpf);
    /*FAz a conversão de char pra int*/
    for (i=0;i<14;i++)
    {
        switch(i)
        {
            case 0: i_cpf[0] = cpf[i] - '0';
                break;
            case 1: i_cpf[1] = cpf[i] - '0';
                break;
            case 2: i_cpf[2] = cpf[i] - '0';
                break;
            case 4: i_cpf[3] = cpf[i] - '0';
                break;
            case 5: i_cpf[4] = cpf[i] - '0';
                break;
            case 6: i_cpf[5] = cpf[i] - '0';
                break;
            case 8: i_cpf[6] = cpf[i] - '0';
                break;
            case 9: i_cpf[7] = cpf[i] - '0';
                break;
            case 10: i_cpf[8] = cpf[i] - '0';
                break;
            case 12: i_cpf[9] = cpf[i] - '0';
                break;
            case 13: i_cpf[10] = cpf[i] - '0';
                break;
        }
    }
    num_igual(i_cpf);
    d1 = Valida_cpf1(i_cpf);
    d2 = Valida_cpf2(i_cpf);
    system("cls");
    /* Compara os dois ultimos digitos do CPF,
     e cria o arquivo para salvar o CPF caso o resultado sejá verdadeiro */
    if ((d1 == i_cpf[9])&&(d2 == i_cpf[10]))
    {
        printf("O CPF %.14s é valido.\n\n",cpf);
        arqCPF = fopen("CPF.txt","w");
        fprintf(arqCPF,"%.14s",cpf);
        fclose(arqCPF);
            if (arqCPF == NULL)
            {
                printf("ERRO! O arquivo não foi aberto!\n");
            }
                else
                {
                    printf("O arquivo foi aberto com sucesso!\n");
                }
    }
        else
        {
            printf("O CPF %.14s é invalido!\n",cpf);
        }
    while(op == 1)
    {
        printf("\nTentar novamente digite <1> sair digite <0>:\n");
        scanf("%d",&op);
        if(op == 1)
        {
            main();
        }
            else
            {
                exit(0);
            }
    }
    system("pause");
    return 0;
}