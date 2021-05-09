#include <iostream>
#include <string>

using namespace std;

#include "sistema.hpp"
#include "menu.hpp"
#include "node.hpp"
#include "list.hpp"
#include "data.hpp"

float calculaMedia(float a, float b, float c){
    return (a+b+c)/3;
}

int main(){
    Sistema *sistema = new Sistema();
    
    int op;
    char opchar;
    
    // Variáveis para armazenar os nomes do estudante e curso
    string nome_estudante, nome_curso, cpf, nome_estudante_trocar;

    // Variáveis para armazenar os números de matrículas, notas e média
    float numero_matricula = 0, nota1, nota2, nota3, media;

    
    while(1){
        
        imprimeMenu();
        cout << "Escolha uma opção : ";
        cin >> op;
        cout << endl;

        if( op == 0 ){
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
            sistema->inserirDadosSistema(numero_matricula, nome_estudante, cpf, nome_curso, nota1, nota2, nota3, media);
            cout << "Dados cadastrados " << endl << "o número da matrícula é : " << numero_matricula << endl << endl;
            
            //Será o número de matícula da próxima pessoa cadastrada
            numero_matricula++;
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

                if(opchar == 'a' || opchar == 'A'){
                    
                    cout << "Qual é o atual nome do estudante: ";
                    fflush(stdin); // Limpa o buffer
                    getline(cin,nome_estudante);
                    cout << endl;

                    cout << "Digite o novo nome: ";
                    fflush(stdin);
                    getline(cin,nome_estudante_trocar);
                    cout << endl;

                    sistema->trocaNomeSistema(nome_estudante, nome_estudante_trocar);
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
            
        }
        else{
            cout  << "ERRO : digite uma opção válida!" << endl;
        }

    }   
    return 0;
}

