

    #include <stdio.h>
    #include <stdlib.h>
//    #include <iostream>

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
    int VEZES; //Quantas vezes repetir o programa (p/ medir de tempo de execução)
    VEZES= 2;    
    int TAM; //Ordem das matrizes
        TAM=3;
 
        int i,j,c;
        int final;
        //float a1,a2,a3 //Valores iniciais para inserção de numeros consecutivos
        //a1= 1;
        //a2= 2;
        //a3= 3;

        //CRIAÇÃO MATRIZ A
        for(c=1;c<=VEZES;c++){
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
            //PREENCHENDO COM VALORES CONSECUTIVOS CRESCENTES
            // a1++; 
            // vet1[i][j]=a1; 

            //INSERINDO VALORES MANUALMENTE
            //scanf("%.2f", vet1[i][j]);

            //PREENCHENDO COM VALORES ALEATORIOS ENTRE VALORES DETERMINADOS 
                vet1[i][j]= RandomInteger( MIN, MAX);
            } 
        }

        //EXIBIÇÃO MATRIZ A
        printf ("__________MATRIZ A__________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet1[i][j]);
            }
            printf("\n");
        }

        printf ("\n\n\n");

        //CRIAÇÃO MATRIZ B

        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
            //PREENCHENDO COM VALORES CONSECUTIVOS CRESCENTES
            // a2++; 
            // vet2[i][j]=a2; 

            //INSERINDO VALORES MANUALMENTE*/
            //scanf("%.2f", vet2[i][j]);

            //PREENCHENDO COM VALORES ALEATORIOS ENTRE VALORES DETERMINADOS 
                vet2[i][j]= RandomInteger( MIN, MAX);
            } 
        }
        //EXIBIÇÃO MATRIZ B
        printf ("__________MATRIZ B__________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet2[i][j]);
            }
            printf("\n");
        }
        
        printf ("\n\n\n");

        //CRIAÇÃO MATRIZ C
        
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
            //PREENCHENDO COM VALORES CONSECUTIVOS CRESCENTES
            // a3++; 
            // vet3[i][j]=a3; 

            //INSERINDO VALORES MANUALMENTE
            //scanf("%.2f", vet3[i][j]);



            //PREENCHENDO COM VALORES ALEATORIOS ENTRE VALORES DETERMINADOS
                vet3[i][j]= RandomInteger( MIN, MAX);
            } 
        }

        //EXIBIÇÃO MATRIZ C
        printf ("__________MATRIZ C__________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet3[i][j]);
            }
            printf("\n");
        }
        printf ("\n\n\n");
        //system ("pause");
        printf ("\n\n\n");
        
        
  /*1      //SOMANDO MATRIZES (A+B)
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                vet1[i][j] += vet2[i][j];    //soma das matrizes
            } 
        }

        //EXIBIÇÃO MATRIZ RESULTANTE (A+B)
        printf ("__________MATRIZ (A+B)__________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet1[i][j]);
            }
            printf("\n");
        }
        
        printf ("\n\n\n");
        //system ("pause");
        printf ("\n\n\n");
        
        //MULTIPLICAÇÃO POR ESCALAR 5(A+B)
        
        for (i=0;i<TAM;i++)
        {
            for (j=0;j<TAM;j++)
            {
                vet1 [i][j]= 5*(vet1[i][j]);
            }
        }
        
        //EXIBIÇÃO MATRIZ RESULTANTE 5(A+B)
        printf ("__________MATRIZ 5(A+B)__________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet1[i][j]);
            }
            printf("\n");
        }
        
        printf ("\n\n\n");
        //system ("pause");
        printf ("\n\n\n");
        
        //SOMANDO MATRIZES 5(A+B)+C
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                vet1[i][j] += vet3[i][j];    //soma das matrizes
            } 
        }
        
            
        //EXIBIÇÃO MATRIZ RESULTANTE 5(A+B)+C
        printf ("__________MATRIZ 5(A+B)+C__________\n\n");
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                printf("%.2f ",vet1[i][j]);
            }
            printf("\n");
        } 				*/
//////////////////////////////////////////////////////////////////////////        
	
	int g[TAM],h[TAM],k[TAM];		//g recebe valor
	
	for(i=0;i<TAM;i++)						// NASM
	{
		g[i]=vet1[i][i];    //transforma o vetor em int
		h[i]=vet2[i][i];	
			
	}


	for(i=0;i<TAM;i++)
	{
	 extern int add_asm (int, int);	
	 g[i]= add_nasm(g[i],h[i]);		//DIAGONAL DA SOMA E MULTIPLICAÇÃO DE 5(A+B)
	}

//////////////////////////////////////////////////////////////////////////

	for(i=0;i<TAM;i++)						// NASM
	{				    //transforma o vetor em int
		h[i]=vet3[i][i];	
	}

	for(i=0;i<TAM;i++)
	{
	 extern int add2_asm (int, int);	
	 g[i]= add2_nasm(g[i],h[i]);		//DIAGONAL DA SOMA E MULTIPLICAÇÃO DE 5(A+B)+C
	}
	

	
        

//////////////////////////////////////////////////////////////////////////                                                     //

             
		int r;
	for(i=0;i<TAM;i++)
	{
	extern int cmp_asm (int, int);
  	r = cmp_nasm(g[i],r);
	}
	printf("O menor valor da matriz utilizando nasm eh: %d",r); 
/////////////////////////////////////////////////////////////////////////        
   /*     



     
        final = vet1[1][1];
        printf("__________MENOR VALOR DA DIAGONAL PRINCIPAL__________\n\n\n");  //c
        
        for(i=0;i<TAM;i++)
        {
        if (final>vet1[i][i])
         {
         final = vet1[i][i];
         } 
        }                     
        
        
        printf("O MENOR VALOR EH= %d", final); */
///////////////////////////////////////////////////////////////////////////


        
        printf ("\n\n\n");
        printf("PROGRAMA EXECUTADO %d VEZES\n", c);
        }
        system ("pause");
        return 0;
        
        
    }

