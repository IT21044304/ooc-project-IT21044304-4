#include <iostream>
using namespace std;

//Customer Class

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

//Event Class

class Event {
  private :
    string eventNo;
    string eventName;
  public :
    Event() {
      eventNo = "E001";
      eventName = "bday";
      Event * eve;
    }
    void display() {
      cout << "This is a event class." << endl ;
    }
    void displayDetails() {
      cout << "Event Number : " << eventNo << endl ;
      cout << "Event Name : " << eventName << endl ;
      cout << "...................................." << endl << endl;
    }
    ~Event() {
      cout << "Delete Event class." << endl;
    }
} ;

//Payment Class

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

//Bill Class

class Bill {
  private : 
    string billNo;
    string type;
    string billName;
    double billAmount;
    Payment * payments[2];
    //RegisteredCustomer * regcus;
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

//Registered Customer Class

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

//Customer Care Person Class

class CustomerCarePerson {
  protected :
    string empNo;
    string name;
    string address;
    double salary;
    string tel;
    int age;
    Customer * customers[2];
    RegisteredCustomer * registeredcustomers[2];
  public :
    CustomerCarePerson() {
      empNo = "E001";
      name = "Keshala";
      address = "Kurunegala";
      tel = "0777523877";
      age = 20;
    } ;
    void display() {
      cout << "This is a customer care person class." << endl ;
    }
    void addCustomer() {
      customers[0] = new Customer();
      customers[1] = new Customer();
    }
    void addRegisteredCustomer() {
      registeredcustomers[0] = new RegisteredCustomer();
      registeredcustomers[1] = new RegisteredCustomer();
    }
    void displayDetails() {
      cout << "Customer Care Person Name : " << name << endl;
      cout << "Customer Care Person Address : " << address << endl;
      cout << "Customer Care Person Telephone Number : " << tel << endl;
      cout << "Customer Care Person Age : " << age << endl;
      cout << "...................................." << endl << endl;
    }
    double calcSalary() {};
    ~CustomerCarePerson() {
      cout << "Delete Customer Care Person class." << endl;
    }
} ;

//Web Developer Class

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

//Administrator Class

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

// This is where the main programe starts

int main()
{
  // create objects
  
  Customer c1;
  RegisteredCustomer rc1;
  CustomerCarePerson ccp1;
  WebDeveloper w1;

  Administrator * a1 = new Administrator() ;
  Bill * b1 = new Bill() ;
  Event * e1 = new Event() ;
  Payment * p1 = new Payment() ;

  // print display() function
  
  c1.display();
  rc1.display();
  ccp1.display();
  w1.display();

  a1->display();
  b1->display();
  e1->display();
  p1->display();

  //print displayDetails() function
  
  c1.displayDetails();
  rc1.displayDetails();
  ccp1.displayDetails();
  w1.displayDetails();

  a1->displayDetails();
  b1->displayDetails();
  e1->displayDetails();
  p1->displayDetails();
  
  //calling deconstrutors
  
  c1.~Customer();
  rc1.~RegisteredCustomer();
  ccp1.~CustomerCarePerson();
  w1.~WebDeveloper();

  a1->~Administrator();
  b1->~Bill();
  e1->~Event();
  p1->~Payment();

  return 0 ;
  
}