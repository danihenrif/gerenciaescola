#ifndef DATA_HPP
#define DATA_HPP


class Data{

private:
    int registration;
    string name;
    string course;
    int grade1;
    int grade2;
    int grade3;
    int average;

public :
    Data( int registration, string name, string course, int grade1, int grade2, int grade3, int average );
    ~Data();

};

#endif