/*
 * File: sports_card.h
 * AUTHOR: William Willie Wells
 * DATE: April 2017 ...
 */

#ifndef _SPORTS_CARD_H_
#define _SPORTS_CARD_H_ 

// c++ includes
#include <string>

// namespace
using namespace std;

// class
class SportsCard{
  public:
    // con(de)structors
	SportsCard(string c=NULL,string s=NULL,string t=NULL,int y=-1,string fn=NULL,string ln=NULL)
	  :company(c),sport(s),team(t),year(y),firstName(fn),lastName(ln){}
    //SportsCard(const SportsCard &rhs);
    ~SportsCard(){}
	
	string getCompany(){ return company; }
    string getSport(){ return sport; }
	string getTeam(){ return team; }
	int getYear(){ return year; }
	string getFName(){ return firstName; }
	string getLName(){ return lastName; }
	
	// operators
	//bool operator==(SportsCard &rhs);
	//bool operator!=(SportsCard &rhs);
	bool operator==(SportsCard &rhs){
      if(this->getCompany().compare(rhs.getCompany())==0 
        && this->getSport().compare(rhs.getSport())==0
	    && this->getTeam().compare(rhs.getTeam())==0 
	    && this->getFName().compare(rhs.getFName())==0
        && this->getLName().compare(rhs.getLName())==0 && this->getYear() == rhs.getYear()){ 
	    return true; }
      else{ return false; }
    }

    bool operator!=(SportsCard &rhs){
      if(this->getCompany().compare(rhs.getCompany())==1 
        || this->getSport().compare(rhs.getSport())==1
	    || this->getTeam().compare(rhs.getTeam())==1 
	    || this->getFName().compare(rhs.getFName())==1
        || this->getLName().compare(rhs.getLName())==1 || this->getYear() != rhs.getYear()){ 
	    return true; }
      else{ return false; }
    }
  private:
    // in(ex)ternal parameters
	string company;
	string sport;
	string team;
	int year;
	string firstName;
	string lastName;
	
	// friend classes
	//friend class 
};
#endif // sports_card
