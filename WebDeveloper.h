#include <iostream>
#include "CustomerCarePerson.h"

using namespace std;

class WebDeveloper : public CustomerCarePerson {
  public :
    WebDeveloper() {
      empNo = "E002";
      name = "Tharushi";
      address = "Biyagama";
      tel = "0713616154";
      age = 22;
    } ;
    void display() {
      cout << "This is a web developer class." << endl ;
    }
    void displayDetails() {
      cout << "Web Developer Name : " << name << endl;
      cout << "Web Developer Address : " << address << endl;
      cout << "Web Developer Telephone Number : " << tel << endl;
      cout << "Web Developer Age : " << age << endl;
      cout << "...................................." << endl << endl;
    }
    double calcSalary() {};
    ~WebDeveloper() {
      cout << "Delete Web Developer class." << endl;
    }
} ;