#include <iostream>
#include <cstring>

using namespace std;

class Student{
 public:
  Student(const char*, int, float);
  ~Student(); //deconstructor
  char* getName(); //returns the name
  int getID(); //returns id number
  float getGpa();
 private:
  char* name =  new char[50]; //name
  int id; //id number
  float gpa;
};
