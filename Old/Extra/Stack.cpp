#include <cstdlib>
#include "Stack.h"

using namespace std;

// constructor: creates stack with top being NULL
template <class clrick>
Stack<clrick>::Stack() 
{
    top = 0;
}

// destructor
template <class clrick>
Stack<clrick>::~Stack()
{
    while (!isEmpty())
        pop();
}

// push
template <class clrick>
void Stack<clrick>::push(clrick data)
{
    try 
	{
        Node<clrick>* newNode = new Node<clrick>(data);
        newNode->next = top;
        top = newNode;
    } 
	catch (bad_alloc &e) 
	{
        cout << "Exception" << e.what() << endl;
        exit(1);
    }
}

// pop
template <class clrick>
void Stack<clrick>::pop()
{
    if (isEmpty())
        throw StackEmptyException();

    Node<clrick>* remove = top;
    top = top->next;
    delete remove;
}

//see data on top
template <class clrick>
clrick Stack<clrick>::top()
{
    if (isEmpty())
        throw StackEmptyException();

    return top->data;

}

//empty?
template <class clrick>
bool Stack<clrick>::isEmpty()
{
    return (top == 0);
}

//full? 
template <class clrick>
bool Stack<clrick>::isFull() {
    return false; 
}
