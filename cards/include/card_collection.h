/*
 * File: card_collection.h
 * AUTHOR: William Willie Wells
 * DATE: April 2017 ...
 */

#ifndef _CARD_COLLECTION_H_
#define _CARD_COLLECTION_H_ 

// package include
#include "sports_card.h"
#include "dlList.h"

// c++ includes
#include <string>

// namespace
using namespace std;

// class
class CardCollection{
  public:
    // con(de)structors
	CardCollection(){}
    ~CardCollection(){}
	
	void findYear();
	void findCompany();
	void findName();
	void findSport();
	void findTeam();
	void insert();
	void remove();
	void save();
	void load();
	// operators
	//const SportsCard & operator=(const SportsCard &rhs);
  private:
    // in(ex)ternal parameters
	dlList<SportsCard> *yearList;
	dlList<SportsCard> *companyList;
	dlList<SportsCard> *nameList;
	dlList<SportsCard> *sportList;
	dlList<SportsCard> *teamList;
	int size[5]={0,0,0,0,0};
	
	// friend classes
	//friend class 
};
#endif // sports_card
