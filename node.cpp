#include <iostream>

#include "node.hpp"


//Construtor
Node::Node(){

}
//Destrutor
Node::~Node(){

}

Node::Node(Data *dados){
    this->data1 = dados;
    this->next = NULL;
}
