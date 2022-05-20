// student id : IT21200588
// Name : Aththanayaka A.M.B.D.
// MLB_01.01_06
// Malabe_weekdays
#include"order.h"
#include<string.h>
#include "product.h"

product::product()
{

	p_id = 0;
	price = 0;
	strcpy(type, "");
	strcpy(name, "");
	strcpy(discription, "");
	d = Dicount(1000);


}

product::product(int no1) {
	d = Discount(no1);
}

product::void displayDiscount() {
	d->display();
}

product::product(int pp_id, int pprice, const char ptype[20], const char pname[25], const char pdiscription[50])
{
	p_id = pp_id;
	price = pprice;
	strcpy(type, ptype);
	strcpy(name, pname);
	strcpy(discription, pdiscription);
}

void product::display()
{
}

product::~product()
{
	cout << "Delete Product" << endl;
	delete d;
	cout << "Product is deleted" << endl;
}

