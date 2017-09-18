// Arquivo de cabeçalho minhabiblioteca.h. Contém os protótipos das funções
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
// A TUA DECLARAÇÃO DE PROTÓTIPOS DEVE FICAR DEPOIS DESSA MENSAGEM. DEIXE 5 LINHAS ACIMA SEM PROGRAMAÇÃO
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
void Jacobi ( Matriz , Matriz , Matriz , Matriz &, double=0.000001, int=1000);
void EliminGaussPivo(Matriz , Matriz , Matriz &, Matriz &, Matriz &, int DBGVIEW = 0);
void SOR (Matriz , Matriz , Matriz , double , double , double , Matriz &, int DBG_VIEW = 0);
void delf (Matriz,  Matriz,  Matriz &,  Matriz &, Matriz &, double mx,  double tol, int DBG_VIEW = 0 );

// TUA DECLARAÇÃO DE PROTÓTIPOS AQUI......................

// A TUA DECLARAÇÃO DE PROTÓTIPOS DEVE FICAR ANTES DESSA MENSAGEM. DEIXE 5 LINHAS ABAIXO SEM PROGRAMAÇÃO
// .
// .
// .
// .
// .

// Função de teste. mantenha essa função no fim do arquivo. Não a apague.
void TesteDeFuncaoComCabecalho (void);

#endif // MINHABIBLIOTECA
