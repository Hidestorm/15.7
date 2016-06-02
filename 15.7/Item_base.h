#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Item_base
{
public:
	Item_base(const string &book = "", double sales_price = 0.0) :
		isbn(book), price(sales_price) {
		cout << "Using item_base's constructor." << endl;
	}
	string book() const
	{
		return isbn;
	}
	virtual double net_price(size_t n)const
	{
		return price *n;
	}
	virtual ~Item_base() {
		cout << "Using item_base's destructor." << endl;
		system("pause");
	};
	friend ostream &operator << (ostream &, Item_base &);

	//Add clone function at base class
	virtual Item_base* clone()const;

private:
	string isbn;
protected:
	double price;
};