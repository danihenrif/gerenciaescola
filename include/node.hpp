#ifndef NODE_HPP
#define NODE_HPP

#include "data.hpp"

using namespace std;

class Node{

    public:
        Data *data1;
        Node  *next ;

        Node();
        ~Node();
        Node(Data *dados);
};

#endif
