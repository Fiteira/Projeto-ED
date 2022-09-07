/** PROJETO ESTRUTURA DE DADOS 2022
 * Base De Dados Coupe
 * ESCOLA SUPERIOR DE TECNOLOGIA E GESTÃO DE VISEU
 * NOMES: Arthur Konrad - 22062
 *        Leandro Dias - 23028
 *        Jesus Betancourt - 22987
 *        Gonçalo Abreu - 22996
 */

#include <stdio.h>
#include <stdlib.h>

#include "BDadosCoupe.h"
#include "Tipos_Dados.h"
#define ficheiro_binario "BD.dat"
#define ficheiro_excel "BD.csv"


/*
Uma Base de dados Relacional é formada por tabelas,
onde cada tabela tem as várias colunas (campos)
e os registos (informação),
um registo é uma coleção de dados.
As tabelas podem ter relacionamentos entre elas
(mas esta parte será dada nas disciplinas de base de dados do 2ªano do curso).
*/
int main()
{

    iniciarPrograma();
    menuPrincipal();

    return 0;
}
