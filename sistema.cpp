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

void Sistema::inserirDadosSistema(float numero_matricula , string nome_estudante, string cpf, string nome_curso, float nota1, float nota2, float nota3, float media ){
    Data *dados = new Data( numero_matricula , nome_estudante, cpf, nome_curso,  nota1,  nota2,  nota3,  media);
    this->lista->insereDados(dados);

}

void Sistema::trocaNomeSistema(string nome_antigo, string nome_novo){
    this->lista->trocaNome(nome_antigo, nome_novo);
}

void Sistema::deletaCadastroSistema(string nome, string cpf){
    this->lista->deletaCadastro(nome, cpf);
}

void Sistema::verificaNotasSistema(string nome, string cpf){
    this->lista->verificaNotas(nome, cpf);
}

void Sistema::alteraNotasSistema(string nome, string cpf, float nota1, float nota2, float nota3){
    this->lista->alteraNotas(nome, cpf,  nota1,  nota2,  nota3);
}

void Sistema::listaDadosSistema(){
    this->lista->listaDados();
}
