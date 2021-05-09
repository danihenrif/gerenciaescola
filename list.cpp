#include <iostream>
#include <string>

#include "list.hpp"
#include "node.hpp"
#include "data.hpp"
#include "sistema.hpp"

using namespace std;


List::List(){
    head = NULL;
    tail = head;
}

List::~List(){

}
bool List::checaListaNula(){
    return this->head == NULL;
}

void List::insereDados(Data *dado){
    
    Node *novo = new Node(dado);
    
    if(checaListaNula()){
       this->head = novo;
       this->tail = novo;
    }
    else{
        this->tail->next = novo;
        this->tail = novo;
    }
}

void List::trocaNome(string nome_antigo, string nome_novo){
    
    //Checa se há elemento na lista (alunos cadastrados))
    if(checaListaNula()){
        cout << "É necessário haver alunos cadastrados para usar esta função :D" << endl;
        return;
    }
    
    else{ 
        //node auxiliar
        Node *tmp = this->head; 
        
        //Se o cadastro estiver na primeira posição
        if(tmp->data1->name == nome_antigo){
            tmp->data1->name = nome_novo;
            cout << "Nome alterado com sucesso!!" << endl;
            return;
        }
        
        //Caso não esteja na primeira posição
        else{
            while(tmp->next != NULL){
                if(tmp->data1->name == nome_antigo){
                    tmp->data1->name = nome_novo;
                    cout << "Nome alterado com sucesso!!" << endl;
                    return;
                }
                tmp = tmp->next;
            }
        }
    }
    cout << "Não foi possível achar um cadastro com esse nome!" << endl;
}

void List::deletaCadastro(string nome, string cpf){
    
        Node *tmp = this->head;
        //Se o cadastro a deletar estiver na primeira posição
        if(tmp->data1->name == nome and tmp->data1->cpf == cpf){
            this->head = tmp->next;
            cout << "Cadastro excluído com sucesso!!" << endl;
            return;
        }
        //Senão se o cadastro a deletar estiver depois da primeira posição
        else{
            while(tmp->next != NULL){
                if(tmp->next->data1->name == nome and tmp->next->data1->cpf == cpf){
                    tmp->next = tmp->next->next;
                    cout << "Cadastro excluído com sucesso!!" << endl;
                    return;
                }
                tmp = tmp->next;
            }
        }
    cout << "Não foi possível encontrar tal cadastro!!" << endl; 
}

void List::verificaNotas(string nome, string cpf){

        Node *tmp = this->head;
        //Se o cadastro estiver na primeira posição
        if(tmp->data1->name == nome and tmp->data1->cpf == cpf){
            cout << "Nota 1: " << tmp->data1->grade1 << endl;
            cout << "Nota 2: " << tmp->data1->grade2 << endl;
            cout << "Nota 3: " << tmp->data1->grade3 << endl;
            return;
        }
        //Senão se o cadastro  estiver depois da primeira posição
        else{
            while(tmp->next != NULL){
                if(tmp->next->data1->name == nome and tmp->next->data1->cpf == cpf){
                    cout << "Nota 1: " << tmp->next->data1->grade1;
                    cout << "Nota 2: " << tmp->next->data1->grade2;
                    cout << "Nota 3: " << tmp->next->data1->grade3;
                    return;
                }
                tmp = tmp->next;
            }
        }
    cout << "Não foi possível encontrar tal cadastro!!" << endl;  
}

void List::alteraNotas(string nome, string cpf, float n1, float n2, float n3){
    
        Node *tmp = this->head;
        //Se o cadastro estiver na primeira posição
        if(tmp->data1->name == nome and tmp->data1->cpf == cpf){
            tmp->data1->grade1 = n1;
            tmp->data1->grade2 = n2;
            tmp->data1->grade3 = n3;
            return;
        }
        //Senão se o cadastro  estiver depois da primeira posição
        else{
            while(tmp->next != NULL){
                if(tmp->next->data1->name == nome and tmp->next->data1->cpf == cpf){
                    tmp->next->data1->grade1 = n1;
                    tmp->next->data1->grade1 = n2;
                    tmp->next->data1->grade1 = n3;
                    return;
                }
                tmp = tmp->next;
            }
        }
    cout << "Não foi possível encontrar tal cadastro!!" << endl;  
}

void List::listaDados(){
    
    Node *tmp = this->head;
    
    while(1){
        cout << "Nome do estudante: " << tmp->data1->name << endl;
        cout << "Nome do curso: " << tmp->data1->course << endl;
        cout << "Número do cpf: " << tmp->data1->cpf << endl;
        cout << "Número da matrícula: " << tmp->data1->registration << endl;
        cout << "Nota 1: " << tmp->data1->grade1 << endl;
        cout << "Nota 2: " << tmp->data1->grade2 << endl;
        cout << "Nota 3: " << tmp->data1->grade3 << endl;
        cout << "Média: " << tmp->data1->average << endl;
        cout << endl << endl;
        if(tmp->next == NULL ){
            return;
        }
        tmp = tmp->next;
    }
}
