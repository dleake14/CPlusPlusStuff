#include "Node.h"

// constructor: create a new Node with d as data
template <class type>
Node<type>::Node(type data) 
{
  this->data = data;
  next = 0;
}

template <class type>
Node<type>::~Node() 
{
}

