// student id : IT21200588
// Name : Aththanayaka A.M.B.D.
// MLB_01.01_06
// Malabe_weekdays
#include<iostream>
#include<cstring>
#include "order.h"

using namespace std;

order::order()
{
	order_id = 0;
	strcpy(type, "");
	qty = 0;
	t_amount = 0;

}
void order::addpayment(payment* pay1, payment* pay2)
{
	pay[0] = pay1;
	pay[1] = pay2;
}
order::order(int oorder_id, const char otype[20],  int oqty, double ot_amount)
{
	order_id = oorder_id;
	strcpy(type, otype);
	qty = oqty;
	t_amount = ot_amount;
}

void order::display()
{
}

order::~order()
{
}



