#include <iostream>
#include <string>


#include "data.hpp"

using namespace std;
  
//Construtor
Data::Data(float registration, string name, string course, float grade1, float grade2, float grade3, float average){   
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







