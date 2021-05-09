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

        bool checaListaNula();
        void insereDados(Data *dado);
        void trocaNome(string nome_antigo, string nome_novo);
        void deletaCadastro(string nome, string cpf);
        void verificaNotas(string nome, string cpf);
        void alteraNotas(string nome, string cpf, float n1, float n2, float n3);
        void listaDados();
};

#endif
