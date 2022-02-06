#include<iostream>

using namespace std;

class Patient {
  public:
  int serialNo;
  int age;
  Patient * next;

  Patient() {
    serialNo = 999;
    age = 0;
    next = NULL;
  }
  Patient(int t, int a) {
    serialNo = t;
    age = a;
    next = NULL;
  }
};

class tickets 
{



};

int main() {
  tickets t;
  int option,age;
 	int serial=1000;
  do {
    cout << "What operation do you want to perform?"<<endl<<endl
	 <<"Select Option number or Enter 0 to exit." << endl<<endl;
    cout << "1. Add Patient" << endl;
    cout << "2. Attend Patient" << endl;
    cout << "3. Available Patients" << endl;
    cout << "4. Number of waiting Patients" << endl;
    cout << "5. Next patient" << endl;
    cout << "6. Clear Screen" << endl << endl;
 	 cin >> option;
 	 
	  
	 Patient * new_Patient = new Patient();
	 
    
    
  } while (option != 0);
 
  return 0;
}

