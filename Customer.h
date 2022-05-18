#include <iostream>
using namespace std;

class Customer {
  protected :
    string name;
    string address;
    string tel;
    int age;
  public :
    Customer() {
      name = "Chamath";
      address = "Mathara";
      tel = "0755637447";
      age = 20;
    } ;
    void display() {
      cout << "This is a customer class." << endl ;
    }
    void displayDetails() {
      cout << "Customer Name : " << name << endl;
      cout << "Customer Address : " << address << endl;
      cout << "Customer Telephone Number : " << tel << endl;
      cout << "Customer Age : " << age << endl;
      cout << "...................................." << endl << endl;
    }
    ~Customer() {
      cout << "Delete Customer class." << endl;
    }
} ;