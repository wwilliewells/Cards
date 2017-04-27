/*
 * File: double_linked.h
 * AUTHOR: William Willie Wells
 * DATE: April 2017 ...
 */

#ifndef _DOUBLE_LINKED_H_
#define _DOUBLE_LINKED_H_

// c++ includes
#include <iostream>

template <class Node>
class dlList;

// namespace
using namespace std;

// class
template <class Node>
class DoubleLinked{
  public:
    // con(de)structors
    DoubleLinked(Node &nd,DoubleLinked<Node> *n, DoubleLinked<Node> *p)
	  :nodeData(nd),next(n),previous(p){}
    ~DoubleLinked(){}
	
	// just for unit testing
	Node getNode(){ return nodeData; }
	
	Node nodeData;
    DoubleLinked<Node> *next;
	DoubleLinked<Node> *previous;
	
	// friend classes
	friend class dlList<Node>;
  private:
    // in(ex)ternal parameters
	
};
#endif // double_linked