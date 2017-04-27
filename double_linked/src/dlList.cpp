/*
 * FILE: dlList.cpp
 * AUTHOR: William Willie Wells
 * DATE: April 2017 ...
 */

// class include
#include "../include/dlList.h"
#include "dlList_methods.cpp"

#include "../../cards/include/sports_card.h"


// c++ Main
int main(int argc, char **argv){
  SportsCard sc("DonRuss","Baseball","Astros",89,"Danny","Darwin");

  // create and start node instance
  dlList<SportsCard> test(sc);
  cout << test.isEmpty() << endl;
  cout << test.atHeader() << endl;
  SportsCard sc1("DonRuss","Baseball","Astros",90,"Danny","Darwin");
  SportsCard sc2("DonRuss","Baseball","Astros",91,"Danny","Darwin");
  SportsCard sc3("DonRuss","Baseball","Astros",92,"Danny","Darwin");
 
  test.insert(sc1);
  test.insert(sc2);
  test.insert(sc3);
  cout << test.isEmpty() << endl;
  DoubleLinked<SportsCard>* dlsc = test.find(sc2);
  cout<< dlsc->nodeData.getYear() << endl;
  cout<< dlsc->next->nodeData.getYear() << endl;
  cout<< dlsc->previous->nodeData.getYear() << endl;
  test.remove(sc1);
  cout<< dlsc->next->nodeData.getYear() << endl;
  cout<< dlsc->previous->nodeData.getYear() << endl;
  test.makeEmpty();
  cout << test.isEmpty() << endl;
  
  return 0;
}
