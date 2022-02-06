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
  private:
  	Patient *front;
  	Patient *rear;
  
  public:

    tickets() 
	 {
      front = NULL;
      rear = NULL;
    }
    
    bool isEmpty()
    {
    	if(front==NULL && rear==NULL)
    	{
    		return true;
		}
		else
		{
			return false;
		}
	 }

	 
	 bool checkPatient(Patient *p)
	 {

    //  assign the front to temporary node.
	 	Patient *temp = front;

    //  Assuming the value does not exist before cheking
	 	bool available=false;

	 	while(temp!=NULL)
	 	{
	 		if(temp->serialNo==p->serialNo)
        	{
          available=true;
          break;
      	}
        // Increment temp to point to next node
      	temp=temp->next;
		}
    
		return available;
	 }
	 
	void enqueue(Patient *p) 
   { 
    		if (isEmpty())
    			  {
        			front = p;
       				rear = p;
       				cout<<"Patient added successfully"<<endl;
      			}
    		else if(checkPatient(p))
    			{
    		  cout<<"Patient already exist." 
    		  <<"Enter another Patient"<<endl;
    			}
    		else
    		{  
    		  p->next=front->next;
    		  front=p;
    		  rear=NULL;
    		  cout<<"Patient  added successfully"<<endl;
    		} 
    			
	  }
	
    
   
  
	Patient* dequeue() 
    {
        Patient *temp=NULL;
      if (isEmpty()) 
      {
          cout << "Queue is Empty" << endl;
          return NULL;
      } 
      else 
      {
        if(front==rear)
        {
          temp=front;
          front = NULL;
          rear = NULL;  
          return temp;
        }
        else
        {
          
          temp=front;
          front = front->next;  
          return temp;
        }
          
       }
    }
	 
	 int count() 
    {
      int count=0;
      Patient *temp=front;
      while(temp!=NULL)
      {
        count++;
        temp=temp->next;
    	}
     return count;
    }
	 
	 void display() 
    {
      if(isEmpty())
      {
        cout << "There are no patients" << endl;
      }
    else
    {


        Patient *temp=front;
        while(temp!=NULL)
        {
          cout<<temp->serialNo;
          temp=temp->next;
      	}
      cout<<endl;
    }
    
    }
   bool priority(Patient *p){
    	if((p->age<=18) || (p->age>=60)){
    		return true;
		}
		else{
			return false;
		}
		
	}
	 
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
	 
    
    switch (option) {
    case 0:
      break;
    case 1:
    	
      cout << "Enter the patient's Age "<<endl;
      serial++;
      cin >> age;
      new_Patient->serialNo = serial;
      new_Patient->age = age;
      t.enqueue(new_Patient);
      break;
    case 2:
      
      new_Patient = t.dequeue();
      cout<<endl<<"PATIENT WITH"<<endl<<"Serial Number : "<<new_Patient->serialNo<<endl<<"Age : "
		<<new_Patient->age<<endl<<"Status : Attended"<<endl;
      delete new_Patient;
     
		cout<<endl;
      
      break;
    case 3:
    	cout << "Check waiting Patients: " << endl;
      if (t.isEmpty())
        cout << "No waiting Patients" << endl;
      else
        cout << "There are patients waiting" << endl;
      break;
    case 4:
      cout << "No. of Unattended Patients : " <<t.count()<<endl<<endl;
      break;
    case 5:
      cout << "Serial number of the next patient: " << endl;
      t.display();
      cout << endl;
      break;
    
    case 6:
      system("cls");
      break;
    default:
      cout << "Incorrect option. " << endl<<endl;
     cout << "Enter option number " << endl;
    }
 
  } while (option != 0);
 
  return 0;
}

