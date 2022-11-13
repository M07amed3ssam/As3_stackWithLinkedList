#include <iostream>
using namespace std;
//#-Im Mohamed Essam And This The Assignmemt (2) --> Queue With Array
#define maxsize 10
int queue[maxsize];
int front = -1, rare = -1;
void EnQueue(int value);
void DeQueue();
int peek();
void Display();

int main(int argc, char const *argv[])
{
    cout << "#-Im Mohamed Essam And This The Assignmemt (2) --> Queue With Array " << endl;
    EnQueue(5);
    EnQueue(10);
    EnQueue(15);
    EnQueue(77);
    EnQueue(99);
    Display();
    DeQueue();
    EnQueue(115);
    EnQueue(707);
    DeQueue();
    Display();
    EnQueue(15);
    EnQueue(77);
    DeQueue();
    Display();
    peek();
    return 0;
}
void EnQueue(int value)
{
    if (rare != maxsize - 1)
    {
        if (front == -1 && rare == -1)
        {
            front++;
            queue[++rare] = value;
        }
        else
        {
            queue[++rare] = value;
        }
    }
    else
    {
        cout << "Queue is Overflow.";
    }
}
void DeQueue()
{
    if (front != -1 && rare != -1 && front <= rare)
    {
        front++;
    }
    else
    {
        cout << "Queue is empty." << endl;
    }
}
int peek()
{
    if (front != -1 && rare != -1 && front <= rare)
    {

        return queue[front];
    }
    else
    {

        cout << "Queue is empty." << endl;
        return -1;
    }
}
void Display()
{
    if (front != -1 && rare != -1 && front <= rare)
    {
        for (int i = front; i <= rare; i++)
        {
            cout << queue[i] << "\t";
        }
        cout << endl;
    }
    else
    {
        cout << "Queue is empty.2" << endl;
    }
}