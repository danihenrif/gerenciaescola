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

string List::insereMusica(Data *dado){
    if(this->head == NULL){
       Node *novo = new Node(dado);
       this->head = novo;
       this->tail = novo;
    }
    else{
        Node *novo = new Node(dado);
        this->tail->next = novo;
        this->tail = novo;
    }
}





