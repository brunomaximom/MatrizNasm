

    #include <stdio.h>
    #include <stdlib.h>


    double vet1[10][10];
    double vet2[10][10];
    double vet3[10][10];


    int RandomInteger( int MIN, int MAX)
    {
        int k;
        double d;
        d = (double) rand( ) / ((int) RAND_MAX);
        k = d * MAX - MIN + 1;
        return MIN + k;
    }

    int main()
    {
    int MAX,MIN; //Valores limites para numeros aleatorios
        MAX=9;
        MIN=0;
    int VEZES; //Quantas vezes repetir o programa (p/ medir de tempo de execu챌찾o)
    VEZES= 2;    
    int TAM; //Ordem das matrizes
        TAM=3;
 
        int i,j,c;
        int final;

//________________________________________________________________________________________________________
     
        //CRIA플O MATRIZ A
        for(c=1;c<=VEZES;c++){
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                //PREENCHENDO COM VALORES ALEATORIOS ENTRE VALORES DETERMINADOS 
                vet1[i][j]= RandomInteger( MIN, MAX);
            } 
        }

        //EXIBI플O MATRIZ A
        printf ("_____________MATRIZ A_____________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet1[i][j]);
            }
            printf("\n");
        }

        printf ("\n\n\n");

//________________________________________________________________________________________________________
     
        //CRIA플O MATRIZ B
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
            
                //PREENCHENDO COM VALORES ALEATORIOS ENTRE VALORES DETERMINADOS 
                vet2[i][j]= RandomInteger( MIN, MAX);
            } 
        }
        //EXIBI플O MATRIZ B
        printf ("_____________MATRIZ B_____________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet2[i][j]);
            }
            printf("\n");
        }
        
        printf ("\n\n\n");

//________________________________________________________________________________________________________
     
        //CRIA플O MATRIZ C  
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {

                //PREENCHENDO COM VALORES ALEATORIOS ENTRE VALORES DETERMINADOS
                vet3[i][j]= RandomInteger( MIN, MAX);
            } 
        }

        //EXIBI플O MATRIZ C
        printf ("_____________MATRIZ C______________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet3[i][j]);
            }
            printf("\n");
        }
        printf ("\n\n\n");
        
//________________________________________________________________________________________________________
             
        
        //SOMANDO MATRIZES (A+B)
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                vet1[i][j] += vet2[i][j];    //soma das matrizes
            } 
        }

        //EXIBI플O MATRIZ RESULTANTE (A+B)
        printf ("____________MATRIZ (A+B)___________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet1[i][j]);
            }
            printf("\n");
        }
        
        printf ("\n\n\n");
        
//________________________________________________________________________________________________________
     
        //MULTIPLICA플O POR ESCALAR 5(A+B)    
        for (i=0;i<TAM;i++)
        {
            for (j=0;j<TAM;j++)
            {
                vet1 [i][j]= 5*(vet1[i][j]);
            }
        }
        
        //EXIBI플O MATRIZ RESULTANTE 5(A+B)
        printf ("___________MATRIZ 5(A+B)___________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet1[i][j]);
            }
            printf("\n");
        }
        
        printf ("\n\n\n");

//________________________________________________________________________________________________________ 
        
        //SOMANDO MATRIZES 5(A+B)+C
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                vet1[i][j] += vet3[i][j];    //soma das matrizes
            } 
        }
        
            
        //EXIBI플O MATRIZ RESULTANTE 5(A+B)+C
        printf ("__________MATRIZ 5(A+B)+C__________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet1[i][j]);
            }
            printf("\n\n\n");
        } 			

//________________________________________________________________________________________________________
        
        //CALCULO DO MENOR VALOR DA DIAGONAL PRINCIPAL                                                                                            
        final = vet1[1][1];
        printf("____________MENOR VALOR____________\n\n\n");  //c
        for(i=0;i<TAM;i++)
        {
            if (final>vet1[i][i])
            {
                final = vet1[i][i];
            } 
        }                     
               
        printf("O MENOR VALOR DA DIAGONAL PRINCIPAL EH= %d", final);

//________________________________________________________________________________________________________

        
        printf ("\n\n\n");
        printf("PROGRAMA EXECUTADO %d VEZ/VEZES\n\n\n", c);
        }
        system ("pause");
        return 0;
        
        
    }

