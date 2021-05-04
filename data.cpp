#include <iostream>
#include <string>


#include "data.hpp"

using namespace std;
  
//Construtor
Data::Data(int registration, string name, string course, int grade1, int grade2, int grade3, int average){   
    this->registration = registration;
    this->name = name;
    this->course = course;
    this->grade1 = grade1;
    this->grade2 = grade2;
    this->grade3 = grade3;
    this->average = average;
}

//Destrutor
Data::~Data(){
    
}







