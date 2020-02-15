#include <stdio.h>
#include <stdlib.h>
#include  <string.h>


int main()
{

    int opcao,achado=0;
    int coluna1=1,coluna2=1;
    int linha1=1,linha2=1;
    int aux=0;
    int mat1[5][5];
    int mat2[5][5];

    printf("\nBEM VINDO AO PROGRAMA DE MANIPULACAO E INTERACAO DE MATRIZES\n\n");

    do
    {
        printf("\n\n1 - CRIAR MATRIZES\n\n");
        printf("2 - OPERACOES\n\n");
        printf("3 - SAIR\n\n");
        printf("DIGITE SUA OPCAO: ");
        scanf("%d",&opcao);
        printf("\n");

        if (opcao==1)
        {
            printf(" CRIE SUAS MATRIZES \n\n");
            printf(" PRIMEIRA MATRIZ \n\n");
            printf("DIGITE A QUANTIDADE DE LINHAS: ");
            scanf("%d",&linha1);
            do
            {
                if (linha1>5)
                {
                    printf("SEU NUMERO DE LINHAS DEVE SER NO MAXIMO 5: \n");
                    scanf("%d",&linha1);
                }
            }
            while(linha1>5);
            printf("DIGITE A QUANTIDADE DE COLUNAS: ");

            scanf("%d",&coluna1);
            do
            {
                if (coluna1>5)
                {
                    printf("SEU NUMERO DE COLUNAS DEVE SER NO MAXIMO 5: \n");
                    scanf("%d",&coluna1);
                }
            }
            while(coluna1>5);

            printf("\n SEGUNDA MATRIZ \n");
            printf("\nDIGITE A QUANTIDADE DE LINHAS: ");
            scanf("%d",&linha2);
            do
            {
                if (linha2>5)
                {
                    printf("SEU NUMERO DE LINHAS DEVE SER NO MAXIMO 5 ");
                    printf("DIGITE A QUANTIDADE DE LINHAS: ");
                    scanf("%d",&linha2);
                }
            }
            while(linha2>5);
            printf("DIGITE A QUANTIDADE DE COLUNAS: ");
            scanf("%d",&coluna2);
            do
            {
                if (coluna2>5)
                {
                    printf("SEU NUMERO DE COLUNAS DEVE SER NO MAXIMO 5: ");
                    printf("DIGITE A QUANTIDADE DE COLUNAS: ");
                    scanf("%d",&coluna2);
                }
            }
            while(coluna2>5);

            printf("\nDIGITE OS VALORES DA PRIMEIRA MATRIZ \n");

            for (int i=0; i<linha1; i++)
            {
                for (int j=0; j<coluna1; j++)
                {
                    printf("\n");
                    printf("PRIMEIRA MATRIZ: ");
                    scanf("%d",&mat1[i][j]);
                }
            }
            printf("\n");
            for (int i=0; i<linha1; i++)
            {
                for(int j=0; j<coluna1; j++)
                {
                    printf("[%d]",mat1[i][j]);
                }
                printf("\n");
            }

            printf("\nDIGITE OS VALORES DA SEGUNDA MATRIZ \n");

            for (int i=0; i<linha2; i++)
            {
                for (int j=0; j<coluna2; j++)
                {
                    printf("\nSEGUNDA MATRIZ : ");
                    scanf("%d",&mat2[i][j]);
                }
            }
           printf("\n");
            for (int i=0; i<linha2; i++)
            {
                for(int j=0; j<coluna2; j++)
                {
                    printf("[%d]",mat2[i][j]);
                }
                printf("\n");
            }
            achado = 1;
            printf("\n");
            system("pause");
        }

        //FIM DA INSERCAO DE ELEMENTOS NAS MATRIZES

        if (opcao==2)
        {
            if(achado==1)
            {
                int op=0;

                do
                {
                    printf("\n\t  OPERACOES \n\n");
                    printf("\n1 - MULTIPLICACAO\n");
                    printf("2 - SOMA\n");
                    printf("3 - SUBTRACAO\n");
                    printf("4 - UNIAO\n");
                    printf("5 - INTERSECCAO\n");
                    printf("6 - ESCOLHA UM NUMERO PARA REALIZAR OPERACOES\n");
                    printf("7 - MOSTRAR QUANTAS VEZES O NUMERO DESEJADO APARECE NAS MATRIZES\n");
                    printf("8 - VER \n");
                    printf("9 - SAIR\n");
                    printf("DIGITE SUA OPCAO: ");
                    scanf("%d",&op);

                    // MULTIPLICACAO DAS MATRIZES

                    if (op==1)
                    {
                        int mat3[linha1][coluna2];

                        if (coluna1!=linha2)
                        {
                            printf("A MULTIPLICACAO NAO PODE SER REALIZADA \n");
                            printf("A QUANTIDADE DAS COLUNAS E DIFERENTE DA QUANTIDADE DE LINHAS\n");
                        }
                        else
                        {
                            for (int i = 0; i<linha1; i++)
                            {
                                for (int j = 0; j<coluna2; j++)
                                {
                                    aux = 0;
                                    for(int k=0; k<coluna1; k++)
                                    {
                                        aux+= mat1[i][k] * mat2[k][j];
                                    }
                                    mat3[i][j] = aux;
                                }
                            }

                            for (int i=0; i<linha1; i++)
                            {
                                for (int j=0; j<coluna2; j++)
                                {
                                    printf("%d\t",mat3[i][j]);
                                }
                                printf("\n");
                            }
                        }
                        system("pause");
                    }

                    // SOMA DAS MATRIZES

                    if (op==2)
                    {
                        int mat3[coluna1][linha2];
                        if (coluna1!=coluna2 || linha1!=linha2)
                        {
                            printf("A SOMA NAO PODE SER REALIZADA \n");
                            printf("A QUANTIDADE DAS COLUNAS E DIFERENTE DA QUANTIDADE DE LINHAS\n");
                        }
                        else
                        {
                            for (int i = 0; i < linha1; i++)
                            {
                                for (int j = 0; j < linha2; j++)
                                {
                                    mat3[i][j] = mat1[i][j] + mat2[i][j];
                                }
                            }

                            for (int i = 0; i < linha1; i++)
                            {
                                for (int j = 0; j < linha2; j++)
                                {

                                    printf("%d\t",mat3[i][j]);
                                }
                                printf("\n");
                            }

                        }

                        printf("\n");
                        system("pause");

                    }


                    // SUBTRACAO DAS MATRIZES

                    if (op==3)
                    {

                        int opsub;

                        printf("1 - SUBTRAIR SUA PRIMEIRA MATRIZ PELA SEGUNDA MATRIZ\n");
                        printf("2 - SUBTRAIR SUA SEGUNDA MATRIZ PELA PRIMEIRA MATRIZ\n");
                        printf("DIGITE SUA OPCAO : ");
                        scanf("%d",&opsub);



                        if (opsub==1)
                        {
                            if (coluna1!=coluna2 || linha1!=linha2)
                            {
                                printf("A SUBTRACAO NAO PODE SER REALIZADA \n");
                                printf("A QUANTIDADE DAS COLUNAS E DIFERENTE DA QUANTIDADE DE LINHAS\n");
                            }
                            else
                            {
                                int mat3[coluna1][linha2];
                                printf("SUA SUBTRACÃO DA PRIMERA MATRIZ COM A SEGUNDA MATRIZ E :\n\n");

                                for (int i = 0; i < linha1; i++)
                                {
                                    for (int j = 0; j < coluna1; j++)
                                    {
                                        mat3[i][j] = ( mat1[i][j] - mat2[i][j]);
                                    }
                                }

                                for (int i = 0; i < coluna1; i++)
                                {
                                    for (int j = 0; j < linha2; j++)
                                    {

                                        printf("%d\t",mat3[i][j]);
                                    }
                                    printf("\n");
                                }
                            }

                            printf("\n");
                            system("pause");
                        }



                        // SUBTRACAO DA SEGUNDA PELA PRIMEIRA

                        if (opsub==2)
                        {
                            int mat3[linha1][coluna2];

                            if (coluna1!=coluna2 || linha1!=linha2)
                            {
                                printf("A SUBTRACAO NAO PODE SER REALIZADA \n\n");
                                printf("A QUANTIDADE DAS COLUNAS E DIFERENTE DA QUANTIDADE DE LINHAS\n\n");
                            }

                            else
                            {
                                printf("\t SUA SUBTRACÃO DA SEGUNDA MATRIZ COM A PRIMEIRA MATRIZ E :\n");

                                for (int i = 0; i < coluna1; i++)
                                {
                                    for (int j = 0; j < linha2; j++)
                                    {
                                        mat3[i][j] = (mat2[i][j]-mat1[i][j]);
                                    }
                                }

                                for (int i = 0; i < linha1; i++)
                                {
                                    for (int j = 0; j < coluna2; j++)
                                    {

                                        printf("%d\t",mat3[i][j]);
                                    }
                                    printf("\n");
                                }
                            }
                            printf("\n");
                            system("pause");
                        }
                    }



                    // UNIAO DAS MATRIZES . (TIVE DE TRANSFORMAR AS MATRIZES EM VETORES). PS : MUITO CHATO DE FAZER D:


                    if (op==4)
                    {
                        int vet[25],cont=0,repetiu;
                        memset(vet,'\0',25);


                        for (int i = 0; i < linha1; ++i)
                        {
                            for (int j = 0; j < coluna1; ++j)
                            {
                                repetiu = 0;
                                for (int k = 0; k<cont&&repetiu==0; k++)
                                {

                                    if (mat1[i][j]==vet[k])
                                    {
                                        repetiu = 1;
                                    }
                                }
                                if (repetiu==0)
                                {
                                    vet[cont] = mat1[i][j];
                                    cont++;
                                }
                            }
                        }

                        for (int i = 0; i < linha2; ++i)
                        {
                            for (int j = 0; j < coluna2; ++j)
                            {
                                repetiu = 0;
                                for (int k = 0; k<cont&&repetiu==0; k++)
                                {

                                    if (mat2[i][j]==vet[k])
                                    {
                                        repetiu = 1;
                                    }
                                }
                                if (repetiu==0)
                                {
                                    vet[cont] = mat2[i][j];
                                    cont++;
                                }
                            }
                        }

                        for (int k = 0; k<cont; k++)
                        {
                            printf("%d\t",vet[k]);
                        }
                        printf("\n");
                        system("pause");
                    }

                    // INTERSECCAO DAS MATRIZES . TIVE DE TRANSFORMAR AS MATRIZES EM VETORES .

                    if (op==5)
                    {
                        int vet[25], k = 0, k2 = 0, k3 = 0, vet2[25], vet3[25], y = 0;

                        for (int i = 0; i < linha1; ++i)
                        {
                            for (int j = 0; j < coluna1; ++j)
                            {
                                vet[k] = mat1[i][j];
                                k++;
                            }

                        }
                        for (int i = 0; i < linha2; ++i)
                        {
                            for (int j = 0; j < coluna2; ++j)
                            {
                                vet2[k2] = mat2[i][j];
                                k2++;
                            }
                        }

                        //CHECAGEM DE QUAL O MAIOR VETOR PARA USAR NO FOR

                        if (k >= k2)
                        {
                            k3 = k;
                        }
                        else
                        {
                            k3 = k2;
                        }

                        //CHECANDO A INTERSECCAO

                        for (int i = 0; i < k; i++)
                        {
                            for (int j = 0; j < k2; j++)
                            {
                                if (vet[i] == vet2[j])
                                {
                                    vet3[y] = vet[i];
                                    y++;
                                }
                            }
                        }

                        //TIRANDO OS NUMEROS IGUAIS


                        for (int i = 0; i < y; i++)
                        {
                            printf("%d\t", vet3[i]);
                        }

                        for (int i = 0; i < y; ++i)
                        {
                            for (int j = i+1; j < y; ++j)
                            {
                                if (vet3[i] == vet3[j])
                                {
                                    for (int m = j; m < y - 1; ++m)
                                    {
                                        vet3[m] = vet3[m+1];
                                    }
                                }
                                y = y-1;
                            }
                        }

                        printf("\n RESULTADO DA INTERSECCAO DAS DUAS MATRIZES : \n\n");

                        for (int i = 0; i < y; i++)
                        {
                            printf("%d\t", vet3[i]);
                        }
                        printf("\n");
                        system ("pause");
                    }

                    // OPERACAO POR UM NUMERO

                    if (op==6)
                    {

                        int opnumero,opsoma,n;

                        printf("\n\n1 - SOMAR\n");
                        printf("2 - SUBTRACAO\n");
                        printf("3 - MULTIPLICACAO\n");
                        printf("DIGITE SUA OPCAO: ");
                        scanf("%d",&opnumero);

                        // OPERACAO COM NUMEROS

                        if (opnumero==1)
                        {

                            printf("1 - SOMAR A PRIMEIRA MATRIZ COM O NUMERO ESCOLHIDO\n");
                            printf("2 - SOMAR A SEGUNDA MATRIZ COM O NUMERO ESCOLHIDO\n");
                            scanf("%d",&opsoma);


                            // SOMAR UM NUMERO A PRIMEIRA MATRIZ

                            if (opsoma==1)
                            {
                                int matResult[linha1][coluna2];
                                printf("DIGITE SEU NUMERO A SOMAR\n");
                                scanf("%d",&n);

                                for(int i = 0; i< linha1; i++)
                                {
                                    for(int j = 0; j< coluna1; j++)
                                    {

                                        matResult[i][j] = (n + mat1[i][j]);
                                    }
                                }

                                printf("\t RESULTADO DA PRIMEIRA MATRIZ COM O NUMERO %d \n",n);
                                for(int i = 0; i< linha1; i++)
                                {
                                    for(int j = 0; j< coluna1; j++)
                                    {
                                        printf("%d\t",matResult[i][j]);
                                    }
                                    printf("\n\n");
                                }
                                system("pause");

                            }

                            // SOMAR UM NUMERO A SEGUNDA MATRIZ

                            if (opsoma==2)
                            {

                                int n, matResult2[linha1][coluna2];
                                printf("DIGITE SEU NUMERO A SOMAR \n");
                                scanf("%d",&n);

                                for(int i = 0; i< linha2; i++)
                                {
                                    for(int j = 0; j< coluna2; j++)
                                    {
                                        matResult2[i][j] = (n+mat2[i][j]);
                                    }
                                }

                                printf("\t RESULTADO DA SEGUNDA MATRIZ COM O NUMERO %d \n",n);

                                for(int i = 0; i< linha2; i++)
                                {
                                    for(int j = 0; j< coluna2; j++)
                                    {
                                        printf("%d\t",matResult2[i][j]);
                                    }
                                    printf("\n");
                                }
                                system("pause");

                            }
                        }

                        // SUBTRAIR UM NUMERO PELA MATRIZ

                        if (opnumero==2)
                        {
                            int opnumsub;

                            printf("1 - SUBTRAIR A PRIMEIRA COM O NUMERO ESCOLHIDO\n");
                            printf("2 - SUBTRAIR A SEGUNDA MATRIZ COM O NUMERO ESCOLHIDO\n");
                            printf("\nDIGITE SUA OPCAO: ");
                            scanf("%d",&opnumsub);
                            if (opnumsub==1)
                            {
                                int matSub[linha1][coluna2], n;

                                printf("DIGITE SEU NUMERO PARA SUBTRAIR \n");
                                scanf("%d",&n);

                                for(int i = 0; i< linha1; i++)
                                {
                                    for(int j = 0; j< coluna1; j++)
                                    {
                                        matSub[i][j] = (n-mat1[i][j]);
                                    }
                                }

                                printf("\t RESULTADO DA PRIMEIRA MATRIZ COM O NUMERO %d \n",n);
                                for(int i = 0; i< linha1; i++)
                                {
                                    for(int j = 0; j< coluna1; j++)
                                    {
                                        printf("%d\t",matSub[i][j]);
                                    }
                                    printf("\n");
                                }
                                system("pause");

                            }


                            if (opnumsub==2)
                            {
                                int matSub2[linha1][coluna2], n;

                                printf("DIGITE UM NUMERO PARA SUBTRAIR\n");
                                scanf("%d",&n);

                                for(int i = 0; i< linha1; i++)
                                {
                                    for(int j = 0; j< coluna1; j++)
                                    {
                                        matSub2[i][j] = (n-mat2[i][j]);
                                    }
                                }

                                printf("\t RESULTADO DA SEGUNDA MATRIZ COM O NUMERO %d \n",n);
                                for(int i = 0; i< linha1; i++)
                                {
                                    for(int j = 0; j< coluna1; j++)
                                    {
                                        printf("%d\t",matSub2[i][j]);
                                    }
                                    printf("\n");
                                }
                                system("pause");



                            }

                        }


                        if (opnumero==3)
                        {
                            int opnumMult;
                            printf("1 - MULTIPLICACAO DA PRIMEIRA MATRIZ COM O NUMERO ESCOLHIDO \n");
                            printf("2 - MULTIPLICACAO DA SEGUNDA MATRIZ COM O NUMERO ESCOLHIDO\n");
                            printf("\nDIGITE SUA OPCAO\n");

                            scanf("%d",&opnumMult);

                            if (opnumMult==1)
                            {
                                int mult[linha1][coluna2],n;

                                printf("\nDIGITE UM NUMERO PARA MULTIPLICAR\n");
                                scanf("%d",&n);

                                for(int i = 0; i< linha1; i++)
                                {
                                    for(int j = 0; j< coluna1; j++)
                                    {
                                        mult[i][j] = (n*mat1[i][j]);
                                    }
                                }

                                printf("\n\t RESULTADO DA PRIMEIRA MATRIZ COM O NUMERO %d \n",n);

                                for(int i = 0; i< linha1; i++)
                                {
                                    for(int j = 0; j< coluna1; j++)
                                    {
                                        printf("%d\t",mult[i][j]);
                                    }
                                    printf("\n");
                                }
                                system("pause");

                            }

                            if (opnumMult==2)
                            {
                                int mult2[linha1][coluna2],n;
                                printf("DIGITE UM NUMERO PARA MULTIPLICAR\n");
                                scanf("%d",&n);

                                for(int i = 0; i< linha1; i++)
                                {
                                    for(int j = 0; j< coluna1; j++)
                                    {
                                        mult2[i][j] = (n*mat2[i][j]);
                                    }
                                }

                                printf("\t RESULTADO DA SEGUNDA MATRIZ COM O NUMERO %d \n",n);
                                for(int i = 0; i< linha1; i++)
                                {
                                    for(int j = 0; j< coluna1; j++)
                                    {
                                        printf("%d\t",mult2[i][j]);
                                    }
                                    printf("\n");
                                }
                                system("pause");

                            }

                        }
                    }

                    if (op==7)
                    {

                        int vezes, cont=0, cont2=0, total;
                        printf("DIGITE UM NUMERO PARA VEZ QUANTAS VEZES ELE APARECE NA MATRIZ\n");
                        scanf("%d",&vezes);

                        for (int i = 0; i < linha1; ++i)
                        {
                            for (int j = 0; j < coluna1; ++j)
                            {
                                if( vezes == mat1[i][j])
                                {
                                    cont++;
                                }
                            }
                        }
                        printf("SUA PRIMEIRA MATRIZ REPETIU O NUMERO %d : %d VEZES\n",vezes,cont);

                        for (int i = 0; i < linha2; ++i)
                        {
                            for (int j = 0; j < coluna2; ++j)
                            {
                                if( vezes == mat2[i][j])
                                {
                                    cont2++;
                                }
                            }
                        }
                        printf("SUA SEGUNDA MATRIZ REPETIU O NUMERO %d : %d VEZES\n",vezes,cont2);

                        total = cont+cont2;

                        printf("TOTAL DE VEZES REPETIDADAS DAS MATRIZES: %d\n",total);
                        printf("\n");

                        system("pause");


                    }
                    if(op==8)
                    {

                        printf("PRIMEIRA MATRIZ:\n");

                        for (int i=0; i<linha1; i++)
                        {
                            for(int j=0; j<coluna1; j++)
                            {
                                printf("[%d]",mat1[i][j]);
                            }
                            printf("\n");
                        }
                        printf("SEGUNDA MATRIZ:\n");

                        for (int i=0; i<linha2; i++)
                        {
                            for(int j=0; j<coluna2; j++)
                            {
                                printf("[%d]",mat2[i][j]);
                            }
                            printf("\n");
                        }
                        system("pause");
                    }
                }
                while(op!=9);

            }
            else
            {
                printf("NAO FOI POSSIVEL REALIZAR A OPERACAO ,POIS AS MATRIZES NAO FORAM CRIADAS \n");
                system("pause");
            }
        }
    }
    while(opcao!=3);

    return 0;
}
