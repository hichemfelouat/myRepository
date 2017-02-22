#pragma once

enum RelationType { LESS, EQUAL, GREATER } ;

class ItemType
{
public:
	ItemType();
	~ItemType();
	RelationType ComparedTo ( ItemType ) const ;
	void Print ( ) const ;
	void Initialize ( int number ) ;
private : 
	int year_of_production;
};
