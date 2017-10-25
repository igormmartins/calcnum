// Arquivo de cabe�alho minhabiblioteca.h. Cont�m os prot�tipos das fun��es
#ifndef MINHABIBLIOTECA
#define MINHABIBLIOTECA

# include <cassert>
# include <cstdlib>
# include "matriz.h"
// .
// .
// .
// .
// .
// A TUA DECLARA��O DE PROT�TIPOS DEVE FICAR DEPOIS DESSA MENSAGEM. DEIXE 5 LINHAS ACIMA SEM PROGRAMA��O
void Identidade (Matriz &);
void Copia (Matriz & , Matriz&);
void SOMA(Matriz & , Matriz &, Matriz &);
void SUBTRAI(Matriz & , Matriz &, Matriz &);
void MULTIPLICA (Matriz &, Matriz &, Matriz &);
Matriz TRANSPOSTA(Matriz &);
double e2xTAYLOR (double, int);
double eaxTAYLOR (double , double, double , int );
double esxTAYLOR (double , double ,  int );
double elxTAYLOR (double , double , int );
double derivPROG (double, double=0.01);
double derivREG( double , double=0.01);
double derivCEN( double , double=0.01);
double derivPARC( Matriz , int , double=0.01);
void TriangSup (Matriz , Matriz  , Matriz &);
void EliminGauss (Matriz , Matriz , Matriz &, Matriz &);
void EliminGaussPivot(Matriz , Matriz , Matriz &, Matriz &);
void Jacobi ( Matriz , Matriz , Matriz , Matriz &, double=0.000001, int=1000);
void SOR(Matriz , Matriz , Matriz , double , double, double , Matriz , int = 0 );
void gradvet (Matriz, int, Matriz &, double=0.0001);

// TUA DECLARA��O DE PROT�TIPOS AQUI......................

// A TUA DECLARA��O DE PROT�TIPOS DEVE FICAR ANTES DESSA MENSAGEM. DEIXE 5 LINHAS ABAIXO SEM PROGRAMA��O
// .
// .
// .
// .
// .

// Fun��o de teste. mantenha essa fun��o no fim do arquivo. N�o a apague.
void TesteDeFuncaoComCabecalho (void);

#endif // MINHABIBLIOTECA
