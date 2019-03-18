#include <iostream>
#include <cstdlib>
using namespace std;

#include "List.h"

template <class nt>
List<nt>::List() 
{
  head = tail = NULL;
  count = 0;
}

template <class nt>
List<nt>::~List() 
{
  Node<nt>* discard;
  while (head != NULL) 
  {
    discard = head;
    head = head->next;
    delete discard;
  }
}

// insert an item at the specified position
// The first node has the position of 0
// throws OutOfRangeException if invalid position value is given.
template <class nt>
void List<nt>::insert(int position, const nt& item) 
{

  try 
  {
	if (position < 0 || position > count) 
		throw OutOfRangeException();

	Node<nt>* newNode = new Node<nt>(item);
    if (head == NULL) 
	{	// list is empty
		head = tail = newNode;
	}
	else if (position == 0) 
	{	//insert to the front 
		newNode->next = head;
      	head = newNode;
	} 
	else if (position == count) 
	{	// insert to the back 
		tail->next = newNode;
      	tail = newNode;
    } 
    else 
	{	// insert in the middle
		Node<nt>* prevNode = NULL;
      	Node<nt>* currNode = head;
		for (int i = 0; i < position; i++) 
		{
			prevNode = currNode;
        	currNode = currNode->next;
      	}
      	// insert between 'prevNode' and 'currNode'
      	prevNode->next = newNode;
      	newNode->next = currNode;
    }
    ++count;

  } 
    catch (bad_alloc &e) 
	{
		cout << "memory allocation exception: " << e.what() << endl;
		exit(1); //need to include <cstdlib>
    }
    //error handling for OutOfRangeException will be done in main function
}

template <class nt>
bool List<nt>::isEmpty() const 
{
   return count == 0;
}

// remove the item at specified position
template <class nt>
void List<nt>::remove(int position) 
{

  if (position < 0 || position >= count)
	throw OutOfRangeException();

  if (position == 0) 
  {		// remove head
		Node<nt>* discard = head;
    	head = head->next;
    	delete discard;
  } 
  else 
  { 
	  Node<nt>* prevNode = NULL;
	  Node<nt>* currNode = head;
      for (int i = 0; i < position; i++) 
	  {
		  prevNode = currNode;
      	  currNode = currNode->next;
      }
	  // remove 'currNode'
      prevNode->next = currNode->next; // can be 0 for removing the last
      delete currNode;

	  if (position == count - 1) // last node was removed. Update 'tail'
      		tail = prevNode;
  }

  --count;
  if (count == 0) tail = NULL;
}

// retrieve the item at the given position of the StrList. position starts from 0.
// throws OutOfRangeException if invalid position value is given.
template <class nt>
void List<nt>::retrieve(int position, nt& item) 
{
  if (position < 0 || position >= count)
	throw OutOfRangeException();

  int loc = 0;
  Node<nt>* currNode = head;
  while (loc < position) 
  {
	++loc;
    currNode = currNode->next;
  }
  item = currNode->data;
}

// number of nodes in the StrList
template <class nt>
int List<nt>::size() const 
{
  return count;
}

// Requirement:
//   << operator for <class T> is used.
template <class nt>
void List<nt>::print() 
{
	cout << "*** List contents ***" << endl;
	for (int i = 0; i < count; i++) 
	{
		nt item;
		retrieve(i, item);
		cout << i << ": " << item << endl;
    }
}

template <class nt>
int List<nt>::indexOf(nt item)
{
	int index = 0;
	Node<nt>* currNode = head;
	while (item != currNode->data)
	{
		index++;
		currNode = currNode->next;
	}
	return index;
}