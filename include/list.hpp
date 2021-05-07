#ifndef LIST_HPP
#define LIST_HPP

#include "node.hpp"
#include "data.hpp"

class List{

public:
    Node *head;
    Node *tail;
    int size;

public:  
    //Métodos da lista
    List();
    ~List();

    void insereDados(Data *dado);
};

#endif
