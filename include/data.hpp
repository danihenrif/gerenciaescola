#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

using namespace std;

class Data{

public:
    int registration;
    string name;
    string course;
    string cpf;
    int grade1;
    int grade2;
    int grade3;
    int average;

public :
    Data( float registration, string name, string cpf, string course, float grade1, float grade2, float grade3, float average );
    ~Data();
};

#endif
