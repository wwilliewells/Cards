/*
 * File: dlList.h
 * AUTHOR: William Willie Wells
 * DATE: April 2017 ...
 */

#ifndef _DLLIST_H_
#define _DLLIST_H_

// package message/structs include
#include "../include/double_linked.h"  
#include <iostream>

// namespace
using namespace std;

// class
template <class Node>
class dlList{
  public:
    // con(de)structors
	dlList(Node &node);
    //dlList(const dlList &rhs);
    ~dlList();
	
	bool isEmpty() const;
	bool atHeader() const;
	void makeEmpty();
    void remove(Node &data);
	void insert(Node &data);
	DoubleLinked<Node>* find(Node &data);
	void forward();
	void backward();
	
	// operators
	//const dlList & operator=(const dlList &rhs);
  private:
    // in(ex)ternal parameters
    DoubleLinked<Node> *header;
	DoubleLinked<Node> *item;
	int size;
};
#endif // dlList
