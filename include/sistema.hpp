#ifndef SISTEMA_HPP
#define SISTEMA_HPP


#include "list.hpp"

using namespace std;

class Sistema{
    public:
    List *lista;

    Sistema();
    ~Sistema();


    bool inserirDadosSistema(float numero_matricula , string nome_estudante, string cpf, string nome_curso, float nota1, float nota2, float nota3, float media);

    void trocaNomeSistema(string nome_antigo, string cpf, string nome_novo );
    void trocaCursoSistema(string nome_antigo, string cpf, string nome_novo);
    void trocaCpfSistema(string cpf, string cpf_novo);

    void deletaCadastroSistema(string nome, string cpf);

    void verificaNotasSistema(string nome, string cpf);
    
    void alteraNotasSistema(string nome, string cpf, float nota1, float nota2, float nota3);

    void listaDadosSistema();

    void listaSituacaoEstudantesSistema();

    void printaNoArquivoSistema(ofstream &arquivo);


};


#endif
