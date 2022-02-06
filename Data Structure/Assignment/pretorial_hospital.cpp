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
        serialNo = 998;
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
        int count = -1;
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
                                    (Dynamic memory allocation*/
        p->age = input;

        if (isEmpty())
        {
            front = rear = p;
        }
        else if(input <= 9 or input >= 60)
        {
            p->next = front;
            front = p;

            cout << front->age;
        }
        else
        {
            rear->next = p;
            rear = p;
        }

        serialNo++;
        p->serialNo = serialNo;
    }

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
};

int main()
{

    Tickets t;
    int age, option;

    Patient *temp = new Patient;

    do
    {
        cout << endl;
        cout << "0.Add new Patient" << endl;
        cout << "1.Attend Patient" << endl;
        cout << "2.Unattended Patients" << endl;
        cout << "3.Display Next Patient" << endl
             << endl;
        cout << "Enter your option number : ";
        cin >> option;

        switch (option)
        {
        case 0:
            cout << endl
                 << "Enter Patients Age : ";
            cin >> age;
            t.enqueue(age);
            cout << endl;
            break;
        case 1:
            t.dequeue();
            cout << endl;
            break;
        case 2:
            cout << endl
                 << "No. of Unattended Patients : " << t.count()
                 << endl;
            break;
        case 3:
            t.display();
            cout << endl;
            break;
        default:
            break;
        }

    } while (option != -1);
}