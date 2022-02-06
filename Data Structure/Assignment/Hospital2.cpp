#include<iostream>

using namespace std;

class Patient {
  public:
   int key;
  	int Age; // age of the patient being attended
  	Patient * next;

  Patient() {
    key = 1000;
    Age = 0;
    next = NULL;
  }
  Patient(int k, int a) {
    key = k;
    Age = a;
    next = NULL;
  }
};

class attendance 
{
  public:
  	Patient *front;
  	Patient *rear;
  	
    attendance() 
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
	 
	 bool checkIfPatientExist(Patient *p)
	 {
	 	Patient *temp = front;
	 	bool exist=false;
	 	while(temp!=NULL)
	 	{
	 		if(temp->key==p->key)
        	{
          exist=true;
          break;
      	}
      	temp=temp->next;
		}
		return exist;
	 }
	 
	void enqueue(Patient *p) 
   { 
   
   if(IsSpecial(p)){
		
    		if (isEmpty())
    			  {
        			front = p;
       				 rear = p;
       				 cout<<"Patient added successfully"<<endl;
      			}
    		else if(checkIfPatientExist(p))
    			{
    		  cout<<"Patient already exist with this Key value waiting to see the doctor." 
    		  <<"Enter different Key value"<<endl;
    			}
    		else
    		{  
    		  p->next=front->next;
    		  front=p;
    		  front=p;
    		  cout<<"Patient  added successfully"<<endl;
    		}
	 	}
    	    	
    	
	         
	else{ 
					if (isEmpty())
    					  {
    					    front = p;
    					    rear = p;
  					        cout<<"Patient  added successfully"<<endl;
      					}
                    else if(checkIfPatientExist(p))
    					{
    					  cout<<"Patient already exist with this Key value waiting to see the doctor." 
    					  <<"Enter different Key value"<<endl;
    					}
    				else
   						 {
    						  rear->next=p;
    						  rear=p;
    						  cout<<"Patient  Added successfully"<<endl;
    					}
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
      cout << "The patients available are having the following keys:" << endl;
        Patient *temp=front;
        while(temp!=NULL)
        {
          cout<<temp->key<<",";
          temp=temp->next;
      	}
      cout<<endl;
    }
    
    }
   bool IsSpecial(Patient *p){
    	if((p->Age<=18) || (p->Age>=60)){
    		return true;
		}
		else{
			return false;
		}
		
	}
	 
 };
 
int main() {
  attendance t;
  int option,Age;
 	int key=1000;
  do {
    cout << "What operation do you want to perform?"
	 <<"Select Option number. Enter 0 to exit." << endl;
    cout << "1. Add Patient" << endl;
    cout << "2. Serve patient" << endl;
    cout << "3. Is there any patient" << endl;
    cout << "4. Total no of patients waiting" << endl;
    cout << "5. display patients" << endl;
    cout << "6. Clear Screen" << endl << endl;
 	 cin >> option;
 	 
	  
	 Patient * new_Patient = new Patient();
	 
    
    switch (option) {
    case 0:
      break;
    case 1:
    	
      cout << "Enter the AGE of the patient to ENQUEUE "<<"in the Queue"<<endl;
      key++;
      cin >> Age;
      new_Patient->key = key;
      new_Patient->Age = Age;
      t.enqueue(new_Patient);
      break;
    case 2:
      cout << "You are about to serve a patient: - " <<endl;
      new_Patient = t.dequeue();
      cout<<"Patient's number Value is: ("<<new_Patient->key<<","
		<<new_Patient->Age<<")";
      delete new_Patient;
		cout<<endl;
      
      break;
    case 3:
    	cout << "Checking if there is any patient waiting: " << endl;
      if (t.isEmpty())
        cout << "No patient waiting" << endl;
      else
        cout << "There are patients waiting" << endl;
      break;
    case 4:
    	cout << "Counting the patients available:" << endl;
      cout << "No of Patients in the Queue: " <<t.count()
		<<endl;
      break;
    case 5:
      cout << "Displaying the serial numbers of available patients: " << endl;
      t.display();
      cout << endl;
      break;
    
    case 6:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }
 
  } while (option != 0);
 
  return 0;
}

