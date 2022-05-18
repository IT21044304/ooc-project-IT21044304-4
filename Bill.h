#include <iostream>
#include "RegisteredCustomer.h"
#include  "Payment.h"

using namespace std ;

class Bill {
  private : 
    string billNo;
    string type;
    string billName;
    double billAmount;
    Payment * payments[2];
    RegisteredCustomer * regcus;
  public :
    Bill() {
      billNo = "B001";
      type = "Water";
      billName = "WatterBill";
      billAmount = 1000.00;
    }
    void display() {
      cout << "This is a bill class." << endl; 
    }
    void addPayment() {
      payments[0] = new Payment();
      payments[1] = new Payment();
    }
    void displayDetails() {
      cout << "Bill Number : " << billNo << endl;
      cout << "Bill Type : " << type << endl;
      cout << "Bill Name : " << billName << endl;
      cout << "Bill Amount : " << billAmount << endl;
      cout << "...................................." << endl << endl;
    }
    ~Bill() {
      cout << "Delete Bill class." << endl;
    }
} ;