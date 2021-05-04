#ifndef LIST_HPP
#define LIST_HPP

#include "node.hpp"
#include "data.hpp"

class List{

private:
    Node *head;
    Node *tail;
    int size;

public:  
    //Métodos da lista
    List();
    ~List();

    string insereMusica(Data *dado);
};

#endif
