#include <iostream>

using namespace std;

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