#include <iostream>
#include <string>
#include <fstream>
#include <thread>
#include <chrono>

using namespace std;

#include "../include/sistema.hpp"
#include "../include/node.hpp"
#include "../include/list.hpp"
#include "../include/data.hpp"

float calculaMedia(float a, float b, float c){
    return (a+b+c)/3;
}

void imprimeMenu(){
    std::cout << "===== SISTEMA ESCOLA BLA BLA BLA =========================================" << std::endl;
    std::cout << "    1 - CADASTAR ESTUDANTE                                  [ 0 - Fechar ]" << std::endl;
    std::cout << "    2 - ATUALIZAR INFORMAÇÃO DO ESTUDANTE" << std::endl;
    std::cout << "    3 - DELETAR CADASTRO" << std::endl;
    std::cout << "    4 - VERIFICAR NOTAS DO(A) ESTUDANTE" << std::endl;
    std::cout << "    5 - ALTERAR NOTA" << std::endl;
    std::cout << "    6 - LISTAR DADOS" << std::endl;
    std::cout << "    7 - LISTAR SITUAÇÃO DOS ESTUDANTES" << std::endl;
    std::cout << "==========================================================================" << std::endl;
}

int main(){
    ofstream archive;

    
    Sistema *sistema = new Sistema();
    
    int op;
    char opchar;
    
    // Variáveis para armazenar os nomes do estudante e curso
    string nome_estudante, nome_curso, cpf, auxtrocar;

    // Variáveis para armazenar os números de matrículas, notas e média
    float numero_matricula = 0, nota1, nota2, nota3, media;

    system("clear");
    
    while(1){
        
        imprimeMenu();
        cout << "Escolha uma opção : ";
        cin >> op;
        cout << endl;

        if( op == 0 ){
            
            archive.open("dados.txt");
            
            if(archive.is_open()){
                archive << "Nome, Curso, Cpf, Nota1, Nota2, Nota3, Média, Matrícula" << endl;
                sistema->printaNoArquivoSistema(archive);
                cout << "Dados gravados no arquivo :D" << endl;
                archive.close();
            }
            else{
                cout << "Não foi possível abrir o arquivo :C, encerrando programa" << endl;
            }
            break;
        }
        else if( op == 1 ){
            
            //Entradas do usuário
            fflush(stdin); // Limpa o buffer
            cout << "Digite o nome do estudante: ";
            getline(cin, nome_estudante);

            fflush(stdin); // Limpa o buffer
            cout << "Digite o nome do curso: ";
            getline(cin, nome_curso);

            fflush(stdin); // Limpa o buffer
            cout << "Digite o cpf(sem hífen e ponto final): ";
            getline(cin, cpf);

            fflush(stdin); // Limpa o buffer
            cout << "Digite as três notas (separadas por espaço): ";
            cin >> nota1 >> nota2 >> nota3;
            cout << endl;
            //Entradas do usuário


            media = calculaMedia(nota1, nota2, nota3);
            
            //Chama a função de inserir os dados
            if(sistema->inserirDadosSistema(numero_matricula, nome_estudante, cpf, nome_curso, nota1, nota2, nota3, media)){
                cout << "Dados cadastrados " << endl << "o número da matrícula é : " << numero_matricula << endl << endl;
                numero_matricula++;
            }
            else{
                cout << "Já existe um cadastro com esse número de cpf!" << endl;
            }
        }
        else if( op == 2 ){
            if(sistema->lista->checaListaNula()){
                cout << "Não há estudantes cadastrados !!" << endl;
            }
            else{
                
                //Entradas do usuário
                fflush(stdin); // Limpa o buffer
                cout << "Qual informação você deseja alterar ?" << endl << "(a - nome do estudante)"
                << endl << "(b - nome do curso)" << endl << "(c - cpf)" << endl;
                cin >> opchar;

                cout << "Qual é o nome do estudante: " << endl;
                fflush(stdin);
                getline(cin, nome_estudante);
                cout << endl;

                cout << "Qual é o cpf do estudante: " << endl;
                fflush(stdin);
                getline(cin, cpf);
                cout << endl;
                //Entradas do usuário

                if(opchar == 'a' or opchar == 'A'){
                    cout << "Qual é o novo nome do estudante: " << endl;
                    fflush(stdin);// Limpa o buffer
                    getline(cin, auxtrocar);
                    cout << endl;
                    
                    sistema->trocaNomeSistema(nome_estudante, cpf, auxtrocar);
                }
                else if(opchar == 'b' or opchar == 'B'){
                    cout << "Qual é novo curso: ";
                    fflush(stdin); // Limpa o buffer
                    getline(cin,auxtrocar);
                    cout << endl;

                    sistema->trocaCursoSistema(nome_estudante, cpf,  auxtrocar);
                }

                else if(opchar == 'c' or opchar == 'C'){
                    cout << "Qual é novo CPF: ";
                    fflush(stdin); // Limpa o buffer
                    getline(cin,auxtrocar);
                    cout << endl;

                    sistema->trocaCpfSistema(cpf, auxtrocar);
                }
            }    
        }
        else if( op == 3 ){
            if(sistema->lista->checaListaNula()){
                cout << "Não há estudantes cadastrados !!" << endl;
            }
            else{
                cout << "Qual é o nome do estudante: ";
                fflush(stdin); // Limpa o buffer
                getline(cin,nome_estudante);
                cout << endl;

                cout << "Qual é o cpf do estudante: ";
                fflush(stdin);
                getline(cin,cpf);
                cout << endl;
                
                sistema->deletaCadastroSistema(nome_estudante, cpf);
            }
        }
        else if( op == 4 ){            
            if(sistema->lista->checaListaNula()){
                cout << "Não há estudantes cadastrados !!" << endl;
            }
            else{
                cout << "Qual é o nome do estudante: ";
                fflush(stdin); // Limpa o buffer
                getline(cin,nome_estudante);
                cout << endl;

                cout << "Qual é o cpf do estudante: ";
                fflush(stdin);
                getline(cin,cpf);
                cout << endl;
                
                sistema->verificaNotasSistema(nome_estudante, cpf); 
            }
            
        }
        else if( op == 5 ){
            if(sistema->lista->checaListaNula()){
                cout << "Não há estudantes cadastrados !!" << endl;
            }
            else{
                cout << "Qual é o nome do estudante: ";
                fflush(stdin); // Limpa o buffer
                getline(cin,nome_estudante);
                cout << endl;

                cout << "Qual é o cpf do estudante: ";
                fflush(stdin);
                getline(cin,cpf);
                cout << endl;
                
                //poderia fazer uma fuinção para buscar antes o cadastro antes
                //de pedir as três notas, mas a preguiça bateu :D
                
                fflush(stdin); // Limpa o buffer
                cout << "Digite as três notas (separadas por espaço): ";
                cin >> nota1 >> nota2 >> nota3;
                cout << endl;
                //Entradas do usuário

                sistema->alteraNotasSistema(nome_estudante, cpf, nota1, nota2, nota3); 
            }
    
        }
        else if( op == 6 ){
            if(sistema->lista->checaListaNula()){
                cout << "Não há estudantes cadastrados !!" << endl;
            }
            else{
                sistema->listaDadosSistema();
            }
        }
        else if( op == 7 ){
            if(sistema->lista->checaListaNula()){
                cout << "Não há estudantes cadastrados !!" << endl;
            }
            else{
                sistema->listaSituacaoEstudantesSistema();
            }
        }
        else{
            cout  << "ERRO : digite uma opção válida!" << endl;
        }

    }   
    return 0;
}

