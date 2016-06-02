#include "Item_base.h"

ostream & operator<<(ostream &os, Item_base &ib)
{
	os << "\t Using operator << " << endl
		<< "\t Visit item_base's book:\t" << ib.isbn << endl
		<< "\tVisit item_base's net_price():"
		<< "\t3 ¡¶" << ib.book() << "¡·,The price is :"
		<< ib.net_price(3) << endl;
	return os;
}
