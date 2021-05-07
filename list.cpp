#include <iostream>
#include <string>

#include "list.hpp"

using namespace std;

List::List(){
    head = NULL;
    tail = head;
}

List::~List(){

}

void List::insereDados(Data *dado){
    
    Node *novo = new Node(dado);
    
    if(this->head == NULL){
       this->head = novo;
       this->tail = novo;
    }
    else{
        this->tail->next = novo;
        this->tail = novo;
    }
}
