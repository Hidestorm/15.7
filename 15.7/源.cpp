#include "Bulk_item.h"
#include "Item_base.h"

int main()
{
	Item_base base0("C++primer", 50.00);
	Bulk_item bulk0("How to pr", 50.00, 3, 0.2);
	cout << base0 << endl;
	cout << bulk0 << endl;
//	vector<Item_base> basket;
	vector<Item_base *> basket;
	Item_base base1("C++primer_1", 50.00);
	Bulk_item bulk1("How to pr_1", 50.00, 3, 0.25);
	Item_base *p1 = &base0, *p2 = &base1;
	Bulk_item *p3 = &bulk0, *p4 = &bulk1;
	/*
	basket.push_back(base0);
	basket.push_back(base1);
	basket.push_back(bulk0);
	basket.push_back(bulk1);
	*/
	cout << *p1 << p2 << p3 << p4 << endl;
	basket.push_back(p1);
	basket.push_back(p2);
	basket.push_back(p3);
	basket.push_back(p4);
	double sumprice = 0;
	for (vector<Item_base*>::iterator it = basket.begin();
		it != basket.end(); ++it)
		sumprice += (*it)->net_price(5);
	cout << "sumprice = :" << sumprice << endl;
	system("pause");
	return 0;
}