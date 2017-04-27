/*
 * FILE: sports_card.cpp
 * AUTHOR: William Willie Wells
 * DATE: April 2017 ...
 */

// class include
#include "../include/sports_card.h"
#include <iostream>
#include <fstream>

// c++ Main
int main(int argc, char **argv){
  // input
  fstream fs;
  ofstream ofs;
  ofs.open("sports_cards.txt");
  if((ofs.rdstate() & fstream::failbit) != 0){ cerr<<"open failed"<<endl;  return -1; }  
 
  // create and start node instance
  SportsCard sc("DonRuss","Baseball","Astros",89,"Danny","Darwin");


  // output
  ofs << sc.getCompany() << ',' << sc.getSport() <<  ',' << sc.getTeam() <<  ',';
  ofs << sc.getYear() << ',' << sc.getFName() << ',' << sc.getLName() << endl;
  ofs.close();

  return 0;
}