#include <iostream>

#include "../include/node.hpp"
using namespace std;

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
