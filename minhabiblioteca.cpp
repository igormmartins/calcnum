// Arquivo .cpp: é o arquivo onde iremos programar as funções que desejamos.
// Sempre, antes de rodar o programa, precisamos declarar o protótipo
// de cada função no arquivo .h (header ou cabeçalho), que funciona como
// um sumário das funções disponíveis na biblioteca


// inclusão do cabeçalho que aponta para esse arquivo
#include <iostream>
using namespace std;

# include "minhabiblioteca.h"
# include "matriz.h"
# include "minhasfuncoes.h"
# include <math.h>
// .
// .
// .
// .
// .
// A TUA PROGRAMAÇÃO DEVE FICAR DEPOIS DESSA MENSAGEM. DEIXE 5 LINHAS ACIMA SEM PROGRAMAÇÃO
// ========================================================================================


// LISTA DE FUNÇÕES A SEREM CRIADAS:

// Valores máximo e mínimo de um vetor
// Valores máximo e mínimo de uma matriz

// média dos valores de um vetor
// média dos valores de uma matriz


// Soma de matrizes     Matriz SOMA(Matriz A, Matriz B);
// Soma de vetores      a função de cima deve já servir;


// Multiplicação de matrizes
// produto interno entre vetores
// produto vetorial entre vetores
// mutiplicação de matriz por vetor
// transposição de vetores e matrizes
// Copiar uma linha de uma matriz para um vetor
// copiar uma coluna de uma matriz para um vetor


// Cria uma matriz identidade
void Identidade ( Matriz &ID )
{
    int L, C, i;
    L = ID.dim('l'); //Padrao que diz quantas linhas tem a Matriz
    C = ID.dim('c'); // Padrao que diz quantas colunas tem a Matriz



     //conferindo se a matriz e quadrada
     if(L!=C)// se numero de linhas diferente de colunas, aborta pois nao e quadrada
     {
         cout << "Matriz nao e quadrada, abortando... \n";
         abort();
     }

    for(i=0; i<L; i++)
    {
        ID.entrada(i,i,1); //alterando o valor da matriz, (int L, int C, double IN) primeiro um inteiro, segundo inteiro e terceiro double
    }




}

// Copia a Matriz A para a matriz B.
void Copia (Matriz &C , Matriz &D)
{
    int LA, LB, CA, CB, i, j;
    //souble temp
   LA = C.dim('l');
   LB = D.dim('l');
   CA = C.dim('c');
   CB = D.dim('c');

if (LA != LB || CA!=CB)
   {
       cout << "As matrizes nao tem dimensoes iguais. Abortando... \n\n";
       abort();
   }

   for(i=0; i<LA; i++)// percorrendo todas as linhas
   {
       for(j=0; j<CA; j++)//percorrendo a coluna
       {
           D.entrada(i, j, C.saida(i,j)); //associa ao i e j o valor de A


           //temp = C.saida(i,j);
           //D.entrada(i,j, temp); mesma coisa que em cima
       }
   }

   //comando .dim verifica a dimensao da matriz, linhas e colunas
}

void SOMA(Matriz &C , Matriz &D, Matriz &E)
{
    // Checar se as dimensões de A e B são Iguais
    // Criar uma nova Matriz onde cada elemento resulta da soma de cada elemento correspondente nas matrizes
    // deve retornar uma matriz

     int LA, LB, LC, CA, CB, CC, i, j ;
    //double temp
   LA = C.dim('l');
   LB = D.dim('l');
   LC = E.dim('l');
   CA = C.dim('c');
   CB = D.dim('c');
   CC = E.dim('c');

if (LA != LB || CA!=CB)//verifica as dimensoes
   {
       cout << "As matrizes nao tem dimensoes iguais. Abortando... \n\n";
       abort();
   }

   if (LA != LC || CA!=CC)//verifica as dimensoes
   {
       cout << "As matrizes nao tem dimensoes iguais. Abortando... \n\n";
       abort();
   }

   for(i=0; i<LA; i++)// percorrendo todas as linhas
   {
       for(j=0; j<CA; j++)//percorrendo a coluna
       {
           E.entrada(i, j, C.saida(i,j)+ D.saida(i,j)); //associa ao i e j o valor de A
           //temp = C.saida(i,j)+ D.saida(i,j);
           //E.entrada(i,j, temp); mesma coisa que em cima


}
   }
}

void SUBTRAI(Matriz &C , Matriz &D, Matriz &E)
{
    // Checar se as dimensões de A e B são Iguais
    // Criar uma nova Matriz onde cada elemento resulta da soma de cada elemento correspondente nas matrizes
    // deve retornar uma matriz

     int LA, LB, LC, CA, CB, CC,  i, j;
    //double temp
   LA = C.dim('l');
   LB = D.dim('l');
   LC = E.dim('l');
   CA = C.dim('c');
   CB = D.dim('c');
   CC = E.dim('c');

if (LA != LB || CA!=CB)//verifica as dimensoes
   {
       cout << "As matrizes nao tem dimensoes iguais. Abortando... \n\n";
       abort();
   }

   if (LA != LC || CA!=CC)//verifica as dimensoes
   {
       cout << "As matrizes nao tem dimensoes iguais. Abortando... \n\n";
       abort();
   }

   for(i=0; i<LA; i++)// percorrendo todas as linhas
   {
       for(j=0; j<CA; j++)//percorrendo a coluna
       {
           E.entrada(i, j, C.saida(i,j) - D.saida(i,j)); //associa ao i e j o valor de A
           //temp = C.saida(i,j)+ D.saida(i,j);
           //E.entrada(i,j, temp); mesma coisa que em cima


}
   }
}

void MULTIPLICA (Matriz &A, Matriz &B, Matriz &C)
{
    // Checar se as dimensões SÃO COMPATÍVEIS
    // deve retornar uma matriz

    int LA, CA, LB, CB, LC, CC;

    LA= A.dim('l'); // LA linhas da matriz A
    CA= A.dim('c');  // CA colunas da matriz A

    LB= B.dim('l');
    CB= B.dim('c');

    LC= C.dim('l');
    CC= C.dim('c');

    if (( CA != LB) || (LC != LA)  ||  (CC != CB))

    {
        cout << "Dimensoes inconsistentes. Funcao Multiplica. Abortando...\n\n";
        abort();
    }


    int i, j, k;
    double somatorio;

    for(i=0; i<LA; i++)
    {
        for (j=0; j<CB; j++)
           {
                somatorio = 0.0;
                for (k=0; k<CA; k++)

                {
                    somatorio = somatorio + A.saida(i,k)*B.saida(k,j);
                 }

                 C.entrada (i,j, somatorio);

        }


    }








}

Matriz TRANSPOSTA(Matriz &A)
{
    // deve retornar uma matriz
}


double e2xTAYLOR (double x , int n)
{
    //SÉRIE DE tAYLOR DA FUNÇÃO e^{-2x}
    int i;
    double somat=0;

    //n nao pode ser negativo

    for(i=0; i<=n; i++)

    {
        somat = somat + ((pow(-2, i))/(fatorial(i))*(pow(x,i)));
    }
    return somat;



}

double eaxTAYLOR (double x, double x0, double a, int n)// f(x) e de alfa x ponto em que eu quero calcular, ponto de onde eu parti, a e i=numero de termos
{
//funçao e^(-ax)
    int i;
    double somat = exp(a*x0);


    if(n<1)
    {
        cout << "\n\nN Nao pode ser negativo, abortando\n\n ";
        abort();
    }

    if(a>0)

    {
        cout << "\n\nAlfa nao pode ser negativo, abortando\n\n";
        abort();
    }

    //n nao pode ser negativo

    for(i=1; i<=n; i++)

    {
        somat = somat + (pow(a,i)*exp(a*x0)*pow(x-x0, i))/fatorial(i);
    }
    return somat;



}

//
//double esxTAYLOR (double x, double x0, int n)
//
//{
//    int i;
//    double somat =  sin(x0);
//
//
//    if(n<1)
//    {
//        cout << "\n\nN Nao pode ser negativo, abortando\n\n ";
//        abort();
//    }
//
//
//    //n nao pode ser negativo
//
//    for(i=1; i<=n; i++)
//
//    {
//        somat = somat + ((pow(-1,i/2))*(pow(sin(x0), (i+1)%2))*(pow(cos(x0), i%2))*(pow(x-x0, i))/fatorial(i) );
//
//        //erro de aproximaçao na serie de taylor
//
//    }
//    return somat;
//}
//
//double elxTAYLOR (double x, double x0, int n)
//
//{
//    int i;
//    double somat =  log10(x0);
//
//
//
//    if(n<1)
//    {
//        cout << "\n\nN Nao pode ser negativo, abortando\n\n ";
//        abort();
//    }
//
//
//    //n nao pode ser negativo
//
//    for(i=1; i<=n; i++)
//
//    {
//        somat = somat + ((pow(-1, i))*(pow(x-x0, i))/(i*pow(x0,i)) );
//    }
//    return somat;
//}

//calculo da derivada progressiva



double derivPROG( double x, double h)

{
    return (funcaopadrao(x+h) - funcaopadrao(x))/(h);

}



double derivREG( double x, double h)

{
    return (funcaopadrao(x) - funcaopadrao(x-h))/(h);

}



double derivCEN( double x, double h)

{
    return (funcaopadrao(x+h) - funcaopadrao(x-h))/(2*h);

}

double derivPARC( Matriz X0, int i, double h)

{
    int dim = X0.dim('c');      //encontra a dimensao do problema


    Matriz H(1,dim), X0H(1,dim);


    H.entrada(0,i,h); // faz a i esima entrada de H vaer h, o resto e 0

//    cout << "\n\n";
//    H.imprime();


    SOMA(X0, H, X0H);    //faz a soma de X0 e h e armazena em X0H

    double fh, f;

    fh= funcaopadrao(X0H);

    f= funcaopadrao(X0);

    return(fh-f)/h;


}

//resolve um sistema triangular superior
void TriangSup (Matriz A , Matriz b , Matriz &X)

{
    //verificar se a e quadrada
    //verificar se as dimensoes de A e b sao compativeis
    //verificar se as dimensoes de b e X sao compativeis
    //verificar o algoritimo
    int n = A.dim('c');
    int i, j;
    double bn_ann, somat, temp ;


    bn_ann = b.saida(0,n-1)/A.saida(n-1,n-1);

    X.entrada(0, n-1, bn_ann);


    //for que percorre as linhas de baixo para cima

    for (i=n-2 ; i>=0; i--)
    {

        somat = 0.0;

        //resolver o somatorio
        for(j=i+1; j<=n-1; j++)
        {
            somat = somat + A.saida(i,j)*X.saida(0,j);

        }

        temp = (b.saida(0,i)-somat)/A.saida(i,i);
        X.entrada(0,i, temp);


    }
}

//realiza eliminaçao gaussiana
void EliminGauss (Matriz A, Matriz b, Matriz &AA, Matriz &bb)

{
    //verificar se a e quadrada
    //verificar se as dimensoes de A e b sao compativeis
    //verificar se as dimensoes de A e AA sao iguais
    //verificar se as dimensoes de b e bb sao iguais
   Copia(A, AA);
   Copia(b, bb);


   int i,j,k,n;
   double m, temp_AA, temp_bb;


   n = b.dim('c');



   for (k=0; k<=n-2; k++)
   {
       for (i=k+1; i<=n-1; i++)
       {
           m = AA.saida(i,k)/ AA.saida(k,k);
           AA.entrada(i,k,0);

           for(j=k+1; j<=n-1; j++)
           {
               temp_AA= AA.saida(i,j)- m*A.saida(k,j);
               AA.entrada(i,j, temp_AA);
               temp_bb= bb.saida(0,i)- m*b.saida(0,k);


           }


               bb.entrada(0,i, temp_bb);

       }


   }




}


void EliminGaussPivotParc (Matriz A, Matriz b, Matriz &AA, Matriz &bb)
    {
        // Verificar se A é quadrada
        //Verificar se as dimensoes de A e b são compativeis

        //verificar se as dimensoes de A e AA são iguais
        //Verificar se as dimensoes de B e bb são iguais

        Copia(A,AA);
        Copia(b,bb);

        int i, j, k, n;
        double m, temp_AA, temp_bb;

        //n é a dimensão do problema
        n = b.dim('c');

        for(k=0; k<=n-2; k++)
        {
            //procurar a linha que contem o maior pivo, contando a partir da linha k ate a ultima linha.


            for(i=k+1; i<=n-1; i++)
            {
                m = AA.saida(i,k) / AA.saida(k,k);
                AA.entrada(i,k, 0);

                for(j=k+1; j<=n-1; j++)
                {
                 //Aij - mAkj
                 temp_AA = AA.saida(i,j) - m*AA.saida(k,j);
                 AA.entrada(i,j, temp_AA);

                 //bi - mbk
                 temp_bb = bb.saida(0,i) - m*bb.saida(0,k);

                }
                bb.entrada(0,i, temp_bb);
            }
        }

    }






void EliminGaussPivot(Matriz A, Matriz b, Matriz &AA, Matriz &bb)
{

    Copia(A,AA);
    Copia(b,bb);

    int i,j,k,n, linha_pivot;
    double w,x,m, temp_AA, temp_bb;

    x = A.saida(j,k);
    n = b.dim('c');


    for(k=0; k<=n-2; k++)
    {
        w = A.saida(k,k);
        for(j=k-1; j<=n-1; j++)
        {
            if (x>=w-1)
            {
                w = x;
                linha_pivot = j;
            }

        }

        for(i=k; i<=n-1; i++)
        {

           m = A.saida(i,k)/A.saida(k,k);
           temp_bb= bb.saida(0,i)- m*b.saida(0,k);

            for(j=k; j<=k-1; j++)
            {
                temp_AA = AA.saida(i,j)- m*A.saida(k,j);
            }

            bb.entrada(0,i, temp_bb);



        }
    }



}




void Jacobi ( Matriz A, Matriz b, Matriz X0, Matriz &X, double tol, int maximo)
{

    //checar se o elemento da diagonal, em modulo, e o maior elemento de sua
    //checar consistencia do problema(a tem que ser quadrada)
    //checar se as dim de A,b , X0, e X sao compativeis
    int n = A.dim('c'), k, i, j, m;
    double somatorio , temp, MAXI;

    Matriz Xk(1,n), Xk1(1,n);
    // na primeira iteraçao o vetor xk e igual ao x0
    Copia(X0, Xk);
    //contador de iteraçoes
    for(k=0; k<maximo; k++)
    {
        for (i=0;i<n; i++)
        {
        //incognitas a serem calculadas
        somatorio = 0.0;

        for(j=0; j<n; j++)
        {
            if ( j != i)
            {
                somatorio = somatorio + A.saida(i,j)*Xk.saida(0,j);
            }
        }

         temp = (b.saida(0,i) - somatorio)/A.saida(i,i);
        Xk1.entrada(0,i, temp);
        }
        //criterio de parada


        MAXI = abs(Xk1.saida(0,0)- Xk.saida(0,0));
        for(m=1; m<n; m++)
        {
            if(abs(Xk1.saida(0,m)- Xk.saida(0,m))> MAXI)
            {
                MAXI = abs(Xk1.saida(0,m) - Xk.saida(0,m));
            }
        }
        //se o maior dos erros for menor que a tolerancia parar o loop de iteraçoes
        if( MAXI < tol)
        {

            break;
        }



        Copia(Xk1, Xk);


    }
    if(k==maximo)
    {
        cout << "\n\nNao houve convergencia, Algoritimo Jacobi";
    }

    Copia(Xk1, X);




}





void SOR(Matriz A, Matriz b, Matriz X0, double w, double mx, double tol, Matriz X, int DBG_VIEW)
{


    if (A.dim('l')!= A.dim('c')) //verifica se a matriz e quadrada
    {
        cout << "A Matriz nao e quadrada. Abortando...\n";
        abort();
    }

    if (A.dim('c')!= b.dim('c')) //verificar seo numero de colunas da matriz A e do vetor sao iguais
    {
        cout << "O numero de colunas da matriz A nao e igual ao do vetor. Abortando\n";
        abort();
    }

    //declaracao de variaveis
    int n = A.dim('c'),i,j,k;
    double  somat1, somat2;
    Matriz Xk, Xk1(0,n);


    Copia(X,X0);


    for (k=0; k<mx; k++) //limita o numero de iteracoes em mx
    {
        for (i=1; i<n; i++)
        {
            somat1 = 0;
            somat2 = 0;
            for (j=0;j<(i-1); i++)
            {
                somat1 = somat1 + A.saida(i,j)*Xk1.saida(0,j);
            }
            for (j=(i+1);j<n;j++)
            {
                somat2 = somat2 + A.saida(i,j)*Xk.saida(0,j);
            }
        Xk1.entrada(0,i,(1-w)*Xk.saida(0,i)+(w/A.saida(i,i))*(b.saida(0,i)-somat1-somat2));
        }

        double somat = 0;

        for(i=0;i<n;i++)
        {
            somat = somat + (Xk1.saida(0,i)-Xk.saida(0,i)); //soma os termos dos vetores
        }

        if (somat<0) //faz o modulo
        {
            somat = somat * -1;
        }

        if (somat<tol) //verifica se o resultado alcancou a tolerancia
        {
            cout << "Solucao:\n";
            Xk1.imprime();
            break;
        }

        if (DBG_VIEW==1)
        {
            if (somat >= tol)
            {
                cout << "A estimativa obtida para a iteracao " << k+1 << " e: \n";
                Xk.imprime(10);
                cout << "\n";
            }
        }

        if (k==mx)
        {
            cout << "Nao houve convergencia\n";
            break;
        }
        Xk=Xk1;
    }
}

void gradvet (Matriz X, int i, Matriz &OUT, double h)
{
    //a
}





// Transposição de Matriz


// ========================================================================================
// A TUA PROGRAMAÇÃO DEVE FICAR ANTES DESSA MENSAGEM. DEIXE 5 LINHAS ABAIXO SEM PROGRAMAÇÃO
// .
// .
// .
// .
// .

// Função de teste. mantenha essa função no fim do arquivo. Não a apague.
// apenas programa acima dela.
void TesteDeFuncaoComCabecalho (void)
{
    // o protótipo da função foi declarada no arquivo .h (header)
    // nesse arquivo (.cpp) é onde iremos realizar a programação do que
    // queremos que a função faça. Nessa função de teste, ela irá apenas
    // imprimir um pequeno texto na tela.

    cout << "Esta e uma funcao de teste." << endl;
}

