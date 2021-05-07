#include <iostream>
#include <string>

#include "sistema.hpp"
#include "data.hpp"
#include "node.hpp"
#include "list.hpp"

using namespace std;

//Construtor
Sistema::Sistema(){
    this->lista = new List();
}

//Destrutor
Sistema::~Sistema(){
    
}

void Sistema::inserirDadosSistema(float numero_matricula , string nome_estudante, string nome_curso, float nota1, float nota2, float nota3, float media ){
    Data *dados = new Data( numero_matricula , nome_estudante, nome_curso,  nota1,  nota2,  nota3,  media);
    this->lista->insereDados(dados);
}
