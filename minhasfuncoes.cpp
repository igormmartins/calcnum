# include "minhasfuncoes.h"
# include "minhabiblioteca.h"

// .
// .
// .
// .
// .
// A SUA PROGRAMAÇÃO DEVE FICAR DEPOIS DESSA MENSAGEM. DEIXE 5 LINHAS ACIMA SEM PROGRAMAÇÃO
// ========================================================================================

// R1 em R1
double funcaopadrao(double x)
{
    return (x*x)-2;
}




// função Rn em R1
double funcaopadrao( Matriz &X )
{
   return 2*pow(X.saida(0,0), 2)*X.saida(0,1);
}



// Função de elevar a 2
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
    //Fatorial de um número inteiro positivo
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


double Bissecao(double a,double b, int mx, double tol, double dbgview)
{
    int k,j;
    double c,aa,bb,Xr;

    aa=a;
    bb=b;

    for (k=0;k<=mx;k++)
    {
        c=(aa+bb)/2;
        if ((funcaopadrao(aa)*funcaopadrao(c))<0)
        {
            bb=c;
        }
        else
        {
            aa=c;
        }
        if (abs(bb-aa)<tol)
        {
                return ((aa+bb)/2);
        }
    }
}

double MN1(double x0, double tol, int mx)
{
    int k;
    double xk1, xk;
    for (k=0;k<mx;k++)
    {
        xk1 = (xk-(funcaopadrao(xk)/(derivCEN(xk))));
        if (abs(funcaopadrao(xk1)));
        {
            return (xk1);
        }
        if (abs(xk1-xk)<tol)
        {
            return (xk+1);
            cout << "Nao houve convergencia";
        }
    }
}


double metsec(double xk, double xk1, double tol, int mx, int dbgview)
{
    double xk2;
    int i;

    for (i=0;i<mx;i++)
    {
        if (dbgview == 1)
        {
            cout << "\nxk-1: " << xk;
        }
        xk2 = ((xk*funcaopadrao(xk1)-(xk1*funcaopadrao(xk))/(funcaopadrao(xk1)-funcaopadrao(xk))));
        xk = xk1;
        xk1 = xk2;
        if (dbgview == 1)
            {
                cout << "\nxk: " << xk;
                cout << "\nxk1: " << xk1;
                cout << "\nxk2: " << xk2;
                cout << "\n\n";
            }
        if (abs(funcaopadrao(xk2))<tol)
        {
            return (xk1);
        }
    }
}

void funcaopadrao (Matriz X, Matriz &OUT)
{
    double temp, x1, x2, x3, x4;

    x1 = X.saida(0,0);
    x2 = X.saida(0,1);
    x3 = X.saida(0,2);
    x4 = X.saida(0,3);

    temp = x1*x1;
    OUT.entrada(0,0,temp);

    temp = x1+x2*x2-x4;
    OUT.entrada(0,1,temp);

    temp = x1*x2*x3;
    OUT.entrada(0,2,temp);

    temp = x3+x4*x4;
    OUT.entrada(0,3,temp);
}


// ========================================================================================
// A TUA PROGRAMAÇÃO DEVE FICAR ANTES DESSA MENSAGEM. DEIXE 5 LINHAS ABAIXO SEM PROGRAMAÇÃO
// .
// .
// .
// .
// .
