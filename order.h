// student id : IT21200588
// Name : Aththanayaka A.M.B.D.
// MLB_01.01_06
// Malabe_weekdays
#pragma once
#include<iostream>
#include"order.h"
#define SIZE 4

using namespace std;
class order
{
	private:
		int order_id;
		int qty;
		char type[20];
		double t_amount;
		
		payment* pay[SIZE];

	public:
		order();
		order(int oorder_id, const char type[20], int oqty, double ot_amount);
		void order::addpayment(payment* pay1, payment* pay2);
		virtual void display();
		~order();
};
