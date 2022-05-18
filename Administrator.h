#include <iostream>
#include "WebDeveloper.h"
#include "Event.h"

using namespace std;

class Administrator : public WebDeveloper {
  private :
    Customer * cus;
    RegisteredCustomer * regcus;
    Event * eve;
    Bill * bil;
  public :
    Administrator() {
      empNo = "E003";
      name = "Thevin";
      address = "Nuwara";
      tel = "0711555722";
      age = 22;
    } ;
    void display() {
      cout << "This is a administrator class." << endl ;
    }
    void displayDetails() {
      cout << "Administrator Name : " << name << endl;
      cout << "Administrator Address : " << address << endl;
      cout << "Administrator Telephone Number : " << tel << endl;
      cout << "Administrator Age : " << age << endl;
      cout << "...................................." << endl << endl;
    }
    double calcSalary() {};
    ~Administrator() {
      cout << "Delete Administrator class." << endl;
    }
} ;