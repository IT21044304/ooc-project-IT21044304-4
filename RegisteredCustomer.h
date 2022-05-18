#include <iostream>
#include "Customer.h"
#include "Bill.h"
#include "Event.h"

using namespace std;

class RegisteredCustomer : public Customer {
  private :
    string customerNo;
    Bill * bills[1];
    Event * events[1];
  public :
    RegisteredCustomer() {
      name = "Shashani";
      address = "Kottawa";
      tel = "0711108805";
      age = 20;
      customerNo = "C001";
    } ;
    void display() {
      cout << "This is a registered customer class." << endl ;
    }
    void displayDetails() {
      cout << "Registered Customer Name : " << name << endl;
      cout << "Registered Customer Address : " << address << endl;
      cout << "Registered Customer Telephone Number : " << tel << endl;
      cout << "Registered Customer Age : " << age << endl;
      cout << "...................................." << endl << endl;
    }
    ~RegisteredCustomer() {
      cout << "Delete Registered Customer class." << endl;
    }
} ;