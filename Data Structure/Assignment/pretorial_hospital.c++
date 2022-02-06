#include <iostream>

using namespace std;

class Patient
{
    public:
        int serialNo;
        int age;
        Patient *next;

        // initial stage of the que before a patient
        Patient()
        {
            serialNo = 999;
            age = 0;
            next = NULL;
        }

        //  from user inputs
        Patient(int t, int a) 
        {
            serialNo = t;
            age = a;
            next = NULL;
        }
};

class Tickets
{
public:
    Patient *front;
    Patient *rear;
    int serialNo;

    Tickets()
    {
        front = NULL;
        rear = NULL;
        serialNo = 999;
    }

    bool isEmpty()
    {
        if (front == NULL && rear == NULL)
            return true;

        else
            return false;
    }

    int count()
    {
        int count = 0;
        Patient *temp = front;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        return count;
    }

    void enqueue(int input)
    {

        Patient *p = new Patient;  /*we use new because we want the node 
                                    to persist in the memory, even after
                                    the function call is over.
                                    (Dynamic memory allocation)*/
        p->age = input;

        if (isEmpty())
        {
            front = rear = p;
        }

        // enqueue from front when priority is met
        else if(input <= 10 or input >= 60)
        {
            p->next = front;
            front = p;

            cout << front->age;
        }

        // enqueue from rear for age with no priority
        else
        {
            rear->next = p;
            rear = p;
        }

        serialNo++;
        p->serialNo = serialNo;
    }

// function for removing patients from queue.
    void dequeue()
    {

        Patient *temp = front;

        if (isEmpty())
        {
            cout << endl
                 << "There no Patients to Attend."
                 << endl;
        }
        else if (front == rear)
        {
            front = NULL;
            rear = NULL;

            cout << endl
                 << "Attending Patient."
                 << endl
                 << "Ticket No : " << temp->serialNo
                 << endl
                 << "Age : " << temp->age;
            delete temp;
        }
        else
        {
            front = front->next;
            cout << endl
                 << "Attending Patient."
                 << endl
                 << "Ticket No : " << temp->serialNo
                 << endl
                 << "Age : " << temp->age;
            delete temp;
        }
    }

// Function for displaying the number of patients
    void display()
    {

        Patient *temp = front;
        if (isEmpty())
            cout << endl
                 << "There no Waiting Patients.";
        else
        {
            cout << endl
                 << "The next Patient." << endl
                 << "Ticket No : " << temp->serialNo
                 << endl
                 << "Age : " << temp->age;
        }
    }

// function for listing the Tickets of patients
    void list()
    {
        Patient * temp = front;
        if (isEmpty())
        {
            cout << endl
                 << "There no Patients.";
        }
        else
        {
            cout<<endl<<"Ticket No.\tAge"<<endl;
            while ( temp != NULL)
            {
                cout<<temp->serialNo<<"\t\t"<<temp->age
                <<endl;
                temp = temp -> next; 
            }
            
        }
        
    }
};

int main()
{

    Tickets t;
    int age, option;

    Patient *temp = new Patient;

    do
    {
        cout << endl;
        cout << "1. Add new Patient" << endl;
        cout << "2. Attend Patient" << endl;
        cout << "3. Unattended Patients" << endl;
        cout << "4. Display Next Patient" << endl;
        cout << "5. List all Patients" << endl
             << endl;
        cout << "Enter your option number : ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << endl
                 << "Enter Patients Age : ";
            cin >> age;
            t.enqueue(age);
            cout << endl;
            break;
        case 2:
            t.dequeue();
            cout << endl;
            break;
        case 3:
            cout << endl
                 << "No. of Unattended Patients : " << t.count()
                 << endl;
            break;
        case 4:
            t.display();
            cout << endl;
            break;
        case 5:
            t.list();
            cout<<endl;
            break;
        default:
            break;
        }

    } while (option != -1);
}