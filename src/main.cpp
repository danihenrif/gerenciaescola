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

    // Variáveis para armazenar os nomes do estudante e curso
    string nome_estudante, nome_curso, cpf;

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
            
        }
        else if( op == 3 ){
            
        }
        else if( op == 4 ){            

        }
        else if( op == 5 ){
            
        }
        else if( op == 6 ){
            
        }
        else if( op == 7 ){
            
        }
        else{
            cout  << "ERRO : digite uma opção válida!";
        }

    }   
    return 0;
}

