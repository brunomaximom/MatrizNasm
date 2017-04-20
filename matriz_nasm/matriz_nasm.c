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
    int VEZES; //Quantas vezes repetir o programa (p/ medir de tempo de execu√ß√£o)
    VEZES= 2;    
    int TAM; //Ordem das matrizes
        TAM=3;
 
        int i,j,c;
        int final;

//________________________________________________________________________________________________________
     
        //CRIA«√O MATRIZ A
        for(c=1;c<=VEZES;c++){
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                //PREENCHENDO COM VALORES ALEATORIOS ENTRE VALORES DETERMINADOS 
                vet1[i][j]= RandomInteger( MIN, MAX);
            } 
        }

        //EXIBI«√O MATRIZ A
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
     
        //CRIA«√O MATRIZ B
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
            
                //PREENCHENDO COM VALORES ALEATORIOS ENTRE VALORES DETERMINADOS 
                vet2[i][j]= RandomInteger( MIN, MAX);
            } 
        }
        //EXIBI«√O MATRIZ B
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
     
        //CRIA«√O MATRIZ C  
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {

                //PREENCHENDO COM VALORES ALEATORIOS ENTRE VALORES DETERMINADOS
                vet3[i][j]= RandomInteger( MIN, MAX);
            } 
        }

        //EXIBI«√O MATRIZ C
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
         
        int g[TAM],h[TAM],k[TAM];	//VETORES QUE RECEBER√O OS VALORES DA DIAGONAL
        
	    //TRANSFORMA OS VALORES DO VET1 e VET2 EM INT
	    for(i=0;i<TAM;i++)				
	    {
		    g[i]=vet1[i][i];    
		    h[i]=vet2[i][i];		
	    }

        // NASM - SOMA E MULTIPLICA«√O POR ESCALAR 5(A+B)
	    for(i=0;i<TAM;i++)
	    {
	        extern int add_asm (int, int);	
	        g[i]= add_nasm(g[i],h[i]);		
	    }
	    
//________________________________________________________________________________________________________
        
        //TRANSFORMA OS VALORES DO VET3 EM INT	                                                                                                  
        for(i=0;i<TAM;i++)						
	    {				     
		    h[i]=vet3[i][i];      
	    }

	    
        // NASM - SOMA MATRIZ C 5(A+B) + C
        for(i=0;i<TAM;i++)
	    {
	        extern int add2_asm (int, int);	
	        g[i]= add2_nasm(g[i],h[i]);		
	    }

//________________________________________________________________________________________________________	
	
        int r;            // r RECEBE O MENOR VALOR DA DIAGONAL
     
        //CALCULO DO MENOR VALOR DA DIAGONAL PRINCIPAL                                                                                      
        for(i=0;i<TAM;i++)
	    {
	        extern int cmp_asm (int, int);
  	        r = cmp_nasm(g[i],r);
	    }
	    
	    printf("O menor valor da matriz utilizando nasm eh: %d",r); 

//________________________________________________________________________________________________________	

        printf ("\n\n\n");
        printf("PROGRAMA EXECUTADO %d VEZES\n", c);
        }
        system ("pause");
        return 0;
        
        
    }



     
     
     
     
     
     
     
     
     
     
     
     
