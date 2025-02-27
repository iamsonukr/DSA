#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue
{
    node *front;
    node *back;
    public:
    queue()
    {
        front = NULL;
        back = NULL;
    }
    void push(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue underflow" << endl;
            return;
        }
        node *todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "NO element in queue" << endl;
            return 0;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
    }
};

int main()
{
    queue q;
    q.push(1);
    cout<<q.peek()<<endl;
    q.pop();
    q.push(2);
    cout<<q.peek()<<endl;
    q.pop();
    q.push(3);
    q.pop();
    cout<<q.peek()<<endl;
    q.push(4);

    cout<<q.peek()<<endl;


    return 0;
}