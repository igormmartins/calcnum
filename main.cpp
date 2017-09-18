// Arquivo de programação contendo o main
// Neste arquivo você deverá implementar a EXECUÇÃO das funções
// de cada atividade proposta. Este arquivo não deverá conter
// implementação de funções e sim as chamadas das funções, a fim
// de se utilizá-las e obter resultados. Esse é basicamente um
// arquivo de parâmetros a serem rodados e obtidos resultados.

// ATALHOS INTERESSANTES:
// Comentar linhas: Ctrl + SHIFT + c
// Descomentar linhas: Ctrl + SHIFT + x


// Inclusão de bibliotecas usadas em cada programa
#include <iostream>
using namespace std;

// Biblitoeca desenvolvida durante o curso
# include "matriz.h"
# include "minhabiblioteca.h"
# include "minhasfuncoes.h"


// Início da função main. Apenas esta função poderá estar nesse arquivo.
// Nenhuma outra função poderá estar aqui.


int main()
{
    // =============================================
//     INICIE  SUA PROGRAMAÇÃO ABAIXO DESTA MENSAGEM
    // =============================================


    double MA[25] = {2,5,1,1,3,    8,-2,3,-3,-5,    4,-4,7,1,-1,   1,1,1,-4,2,   -1,-2,2,2,4};
    double Vb[5] = {56,-12,-48,6,-15};
    double EST[5] ={0,0,0,0,0};

    Matriz A(MA,5,5);
    Matriz b(Vb,1,5);
    Matriz X0(EST,1,5);
    Matriz X(1,5);


    SOR(A,b,X0,0.5,100,0.000001,X,1);


//    double MA[25]={2,3,-1,5,5,  5,-10,11,13,-1,  8,1,1,1,2,  11,5,-3,-3,1,  2,2,1,7,-14};
//    double Mb[5]={-4,25,-4,7,150};
//
//
//    Matriz A(MA,5,5);
//    A.imprime();
//    cout << "\n\n";
//    Matriz b(Mb,1,5);
//    b.imprime();
//
//    Matriz X(1,5);
//
//    Matriz AA(5,5);
//    Matriz bb(1,5);
//
//    cout << "\nA partir daqui:\n\n";
//
//    EliminGaussPivo(A,b,X,AA,bb);
//    cout << "\n\n\n\n";


















    // ============================================
    // TERMINE SUA PROGRAMAÇÃO ACIMA DESSA MENSAGEM
    // ============================================
}
