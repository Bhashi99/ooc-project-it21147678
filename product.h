// student id : IT21200588
// Name : Aththanayaka A.M.B.D.
// MLB_01.01_06
// Malabe_weekdays
#pragma once
#include<iostream>
#include "order.h"
#include "Discount.h"

using namespace std;
class product : public order 
{
private:
	int p_id;
	int price;
	char type[20];
	char name[25];
	char discription[50];

	Discount *d;

public:
	product();
	product(int no1);
	void displayDiscount();
	product(int pp_id, int pprice, const char ptype[20], const char pname[25], const char pdiscription[50]);
	void display();
	~product();

};



