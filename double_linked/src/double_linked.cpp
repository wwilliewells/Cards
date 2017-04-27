/*
 * FILE: double_linked.cpp
 * AUTHOR: William Willie Wells
 * DATE: April 2017 ...
 */

// class include
#include "../include/double_linked.h"

struct record{ int n; double d; }r;

// c++ Main
int main(int argc, char **argv){
  r.n=23; r.d= 23.3;

  // create and start node instance
  DoubleLinked<record> dl(r);
  cout << dl.getNode().d << endl;

  return 0;
}