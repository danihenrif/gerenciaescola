#include <iostream>

#include "sistema.hpp"

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

void Sistema::trocaNomeSistema(string nome_antigo, string cpf, string nome_novo){
    this->lista->trocaNome(nome_antigo, cpf ,nome_novo);
}

void Sistema::trocaCursoSistema(string nome_antigo, string cpf, string nome_novo){
    this->lista->trocaCurso(nome_antigo, cpf ,nome_novo);
}

void Sistema::trocaCpfSistema(string cpf, string cpf_novo){
    this->lista->trocaCpf(cpf, cpf_novo);
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

void Sistema::listaSituacaoEstudantesSistema(){
    this->lista->listaSituacaoEstudantes();
}
