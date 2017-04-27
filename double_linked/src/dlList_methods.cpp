/*
 * FILE: dlList_methods.cpp
 * AUTHOR: William Willie Wells
 * DATE: April 2017 ...
 */

// class include
#include "../include/dlList.h"

// constructor
template<class Node>
dlList<Node>::dlList(Node &node):size(0){ 
  header = new DoubleLinked<Node>(node,NULL,NULL);
  header->next = header->previous = header;
  item = header; 
}

// copy constructor
/*template<class Node>
dlList<Node>::dlList(const dlList &rhs):size(0){ 
  item = header = new DoubleLinked<Node>(node,NULL,NULL);
  *this = rhs;  
}*/

template <class Node>
bool dlList<Node>::isEmpty() const{ return header->next == header; }

template <class Node>
bool dlList<Node>::atHeader() const{ return item == header; }

template <class Node>
void dlList<Node>::forward(){ item = item->next; }

template <class Node>
DoubleLinked<Node> *dlList<Node>::find(Node &data){
  item = header->next;
  while(item != header && item->nodeData != data){ forward(); }
  
  return item;
}

template <class Node>
void dlList<Node>::remove(Node &node){
  if(!isEmpty()){
    DoubleLinked<Node> *expiredNode = find(node);
  
    // remove expired node from list  
    expiredNode->previous->next = expiredNode->next;
	expiredNode->next->previous = expiredNode->previous;
	
	// clean removal of expired node
	expiredNode->previous = expiredNode->next = NULL;
	delete expiredNode;
	if(size > 0){ size--; }
  }
}

template <class Node>
void dlList<Node>::makeEmpty(){ while(!isEmpty()){ remove(header->next->nodeData); } }

// destructor
template <class Node>
dlList<Node>::~dlList(){ makeEmpty(); /*delete header; delete item;*/ }

template <class Node>
void dlList<Node>::backward(){ item = item->previous; }

template <class Node>
void dlList<Node>::insert(Node &node){
  item->next = new DoubleLinked<Node>(node,item->next,item);
  item->next->next->previous = item->next; // was item now item->next
  forward();
  size++;  
}
/*	
// operators
template <class Node>
const dlList<Node> & dlList<Node>::operator=(const dlList<Node> &rhs){
  if(this != rhs){
    makeEmpty();
	
	DoubleLinked<Node> iterator = rhs.header->next;
	while(iterator->next != rhs.header){ 
	  insert(iterator->nodeData); 
	  iterator->forward(); 
	}
  }
  return *this;
}*/