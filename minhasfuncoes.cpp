# include "minhasfuncoes.h"

// .
// .
// .
// .
// .
// A SUA PROGRAMA��O DEVE FICAR DEPOIS DESSA MENSAGEM. DEIXE 5 LINHAS ACIMA SEM PROGRAMA��O
// ========================================================================================

// R1 em R1
double funcaopadrao(double x)
{
    return x*x;
}




// fun��o Rn em R1
double funcaopadrao( Matriz &X )
{
   return 2*pow(X.saida(0,0), 2)*X.saida(0,1);
}

// funcao de Rn em Rn
void funcaopadrao(Matriz &X, Matriz &OUT)
{

}


// Fun��o de elevar a 2
double xquadrado (double x)
{
    return x*x;
}

double xcubo (double x)
{
    return x*x*x;
}


double parabol(Matriz X)
{
    return pow( X.saida(0,0) , 2) + pow(X.saida(0,1),2);
}


int fatorial (int n)
{
    //Fatorial de um n�mero inteiro positivo
    if(n<0)
    {
      cout << "Numero negativo, funcao fatorial, abortando...";
      abort();
    }

    if(floor(n) != ceil(n))
    {
        cout << "Numero nao inteiro, funcao fatorial, abortando...";
        abort();

    }

    if(n==0)
    {
        return 1;
    }

    int k, temp=1;

    for(k=1; k<=n; k++)
    {
        temp = temp*k;

    }

    return temp;







}







// ========================================================================================
// A TUA PROGRAMA��O DEVE FICAR ANTES DESSA MENSAGEM. DEIXE 5 LINHAS ABAIXO SEM PROGRAMA��O
// .
// .
// .
// .
// .
