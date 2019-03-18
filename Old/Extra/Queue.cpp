#include "Queue.h"

using namespace std;

// constructor
template <class type>
Queue<type>::Queue() 
{
    frontNode = rearNode = 0;
}

// destructor
template <class type>
Queue<type>::~Queue()
{
    while (!isEmpty())
        dequeue();
}

template <class type>
void Queue<type>::enqueue(type item) 
{

    try {
        Node<type>* newNode = new Node<type>(item);
        if (isEmpty()) {
            frontNode = rearNode = newNode; 
        } else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
    } 
   catch (bad_alloc &e) {
        cout << "memory allocation exception: "  << endl;
        exit(1);
    }
}


template <class type>
void Queue<type>::dequeue() 
{
    if (isEmpty())
        throw QueueEmptyException();

    Node<type>* discard = frontNode;
    frontNode = frontNode->next; 
    delete discard;
    if (isEmpty()) rearNode = 0; 
}

// read the data at 'frontNode'
template <class type>
type Queue<type>::front() 
{
    if (isEmpty())
        throw QueueEmptyException();

    return frontNode->data;
}

// read data at the end
template <class type>
type Queue<type>::back() 
{
    if (isEmpty())
        throw QueueEmptyException();

    return rearNode->data;
}

// check for empty
template <class type>
bool Queue<type>::isEmpty() 
{
    return frontNode == NULL;
}

// check for full
template <class type>
bool Queue<type>::isFull() 
{
    return false; 
}
