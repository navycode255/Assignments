
#include <iostream>
using namespace std;

/*
 * Node Declaration
 */
class node
{
	public:
	    int priority;
	    int serialNo;
	    struct node *link;
};

class Patients
{
private:
    node *front;

public:
    Patients()
    {
        front = NULL;
    }
    
    void enque(int serial, int priority)
    {
        node *temp, *que;
        temp = new node;
        temp->serialNo = serial;
        temp->priority = priority;

        if (front == NULL || priority < front->priority)
        {
            temp->link = front;
            front = temp;
        }
        else
        {
            que = front;
            while (que->link != NULL && que->link->priority <= priority)
                que = que->link;
            temp->link = que->link;
            que->link = temp;
        }
    }
    
    void deque()
    {
        node *temp;
        if (front == NULL)
            cout << "Queue Underflow\n";
        else
        {
            temp = front;
            cout << "dequeeted ticket is: " << temp->serialNo << endl;
            front = front->link;
            
        }
    }
    
    void display()
    {
        node *ptr;
        ptr = front;
        if (front == NULL)
            cout << "Queue is empty\n";
        else
        {
            cout << "\nQueue is :\n";
            cout << "Priority       Ticket ID\n";
            while (ptr != NULL)
            {
                cout << ptr->priority << "              " << ptr->serialNo << endl;
                ptr = ptr->link;
            }
        }
    }
};

int main()
{
    int choice, serialNo = 999, priority, size = 999;
    Patients p;
    do
    {
        cout << "\n1.Add new Patient\n";
        cout << "2.Attend Patient\n";
        cout << "3.Display Next Patient\n";
        cout << "4.Quit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:

            cout << "Patient Age : 1 for under 18, 2 for above 18 " << endl;
            cout << "1. Under 18 " <<endl;
            cout << "2. Above 18"<<endl<< endl;
            
            cout << "Enter Option : ";
            cin >> priority;

            if (priority <= 2 && priority > 0)
            {

                if (serialNo == size)
                {
                    ++serialNo;
                    ++size;
                }
                cout << "Patient's Ticket ID is: " << serialNo << endl;
                cout << "Patient's' Priority number is: " << priority << endl
                     << endl;

                p.enque(serialNo, priority);
            }

            else
            {
                cout << "wrong input \n";
            }

            break;

        case 2:
            p.deque();
            break;
        case 3:
            p.display();
            break;
        case 4:
            break;
        default:
            cout << "Please select from the Menu above\n";
        }
    } while (choice != 4);
    return 0;
}