#pragma once
#include "Item_base.h"
class Bulk_item :public Item_base
{
public:
	Bulk_item(const string &book = "", double slae_price
		= 0.0, size_t qty = 0, double disc = 0.0) :
		Item_base(book, slae_price), min_qty(qty), discount(disc)
	{
		cout << "Using Bulk_item's constructor." << endl;
	}
	double net_price(size_t cnt)const
	{
		if (cnt > min_qty)
			return cnt * (1 - discount) * price;
		else
			return cnt * price;
	}
	~Bulk_item()
	{
		cout << "Using Bulk_item's destructor." << endl;
		system("pause");
	}
private:
	size_t min_qty;
	double  discount;
};