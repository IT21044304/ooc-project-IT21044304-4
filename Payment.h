#include <iostream>
using namespace std;

class Payment {
  private :
    string paymentNo;
    double amount;
  public :
    Payment() {
      paymentNo = "P001";
      amount = 2000.00;
    }
    void display() {
      cout << "This is a payment class." << endl;
      cout << "...................................." << endl << endl;
    }
    void displayDetails() {
      cout << "Payment Number : " << paymentNo << endl;
      cout << "Payment Amount : " << amount << endl;
      cout << "...................................." << endl << endl;
    }
    ~Payment() {
      cout << "Delete payment class." << endl;
    }
} ;