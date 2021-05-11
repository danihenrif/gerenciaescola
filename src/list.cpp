#include <iostream>
#include <string>
#include<fstream>
#include "../include/list.hpp"

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

void List::trocaNome(string nome_antigo, string cpf, string nome_novo){

    //node auxiliar
    Node *tmp = this->head; 
        
    //Se o cadastro estiver na primeira posição
    if(tmp->data1->name == nome_antigo and tmp->data1->cpf == cpf){
        tmp->data1->name = nome_novo;
        cout << "Nome alterado com sucesso!!" << endl;
        return;
    }
        
    //Caso não esteja na primeira posição

    while(tmp->next != NULL){
        if(tmp->data1->name == nome_antigo and tmp->data1->cpf == cpf){
            tmp->data1->name = nome_novo;
            cout << "Nome alterado com sucesso!!" << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Não foi possível achar um cadastro com esse nome!" << endl;
}

void List::trocaCurso(string nome_antigo, string cpf, string nome_novo){
    //node auxiliar
    Node *tmp = this->head; 
        
    //Se o cadastro estiver na primeira posição
    if(tmp->data1->name == nome_antigo and tmp->data1->cpf == cpf){
        tmp->data1->course = nome_novo;
        cout << "Nome alterado com sucesso!!" << endl;
        return;
    }
        
    //Caso não esteja na primeira posição

    while(tmp->next != NULL){
        if(tmp->data1->name == nome_antigo and tmp->data1->cpf == cpf){
            tmp->data1->course= nome_novo;
            cout << "Nome alterado com sucesso!!" << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Não foi possível achar um cadastro com esse nome!" << endl;
}

void List::trocaCpf(string cpf, string cpf_novo){
    //node auxiliar
    Node *tmp = this->head; 
        
    //Se o cadastro estiver na primeira posição
    if(tmp->data1->cpf == cpf){
        tmp->data1->cpf = cpf_novo;
        cout << "CPF alterado com sucesso!!" << endl;
        return;
    }
        
    //Caso não esteja na primeira posição

    while(tmp->next != NULL){
        if(tmp->data1->cpf == cpf){
            tmp->data1->cpf= cpf_novo;
            cout << "CPF alterado com sucesso!!" << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Não foi possível achar um cadastro com esse CPF!" << endl;    
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
            tmp->data1->average = (n1 + n2 + n3) / 3;
            cout << "Nota alterada com sucesso!!" << endl; 
            return;
        }
        //Senão se o cadastro  estiver depois da primeira posição
        else{
            while(tmp->next != NULL){
                if(tmp->next->data1->name == nome and tmp->next->data1->cpf == cpf){
                    tmp->next->data1->grade1 = n1;
                    tmp->next->data1->grade1 = n2;
                    tmp->next->data1->grade1 = n3;
                    tmp->data1->average = (n1 + n2 + n3) / 3;
                    cout << "Nota alterada com sucesso!!" << endl;
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

void List::listaSituacaoEstudantes(){
    Node *tmp = this->head;
    
    while(1){
        if(tmp->data1->average >= 7){
            cout << "Nome : " << tmp->data1->name  << endl;
            cout << "Cpf : " << tmp->data1->cpf  << endl;
            cout << "Situação : Aprovado(APR)" << endl;
        }
        else if( (tmp->data1->average) >= 5 and (tmp->data1->average) <= 7 and (tmp->data1->grade1) >= 3 and (tmp->data1->grade2) >= 3
        and (tmp->data1->grade3) >= 3 ){
            cout << "Nome : " << tmp->data1->name  << endl;
            cout << "Cpf : " << tmp->data1->cpf  << endl;
            cout << "Situação : Aprovado por notas (APRN)" << endl;
        }
        else if((tmp->data1->average) < 3){
            cout << "Nome : " << tmp->data1->name  << endl;
            cout << "Cpf : " << tmp->data1->cpf  << endl;
            cout << "Situação : Reprovado(REP)" << endl; 
        }
        else{
            cout << "Nome : " << tmp->data1->name  << endl;
            cout << "Cpf : " << tmp->data1->cpf  << endl;
            cout << "Situação : Recuperação(REC)" << endl;
        }
        cout << endl << endl;
        if(tmp->next == NULL ){
            return;
        }
        tmp = tmp->next;
    }
}

void List::printaNoArquivo(ofstream &arquivo){
    Node *tmp = this->head;
    
    while(1){
        arquivo << tmp->data1->name << ", ";
        arquivo << tmp->data1->course << ", ";
        arquivo << tmp->data1->cpf << ", ";
        arquivo << tmp->data1->grade1 << ", ";
        arquivo << tmp->data1->grade2 << ", ";
        arquivo << tmp->data1->grade3 << ", ";
        arquivo << tmp->data1->average << ", ";
        arquivo << tmp->data1->registration;
        arquivo << endl;

        if(tmp->next == NULL){
            return;
        }
        tmp = tmp->next;
    }
}
