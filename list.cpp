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
    
    if(checaListaNula()){
        cout << "Não há estudantes cadastrados !!" << endl;
    } 

    else{
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
            }
        }
    }
    cout << "Não foi possível encontrar tal cadastro!!" << endl; 
}

