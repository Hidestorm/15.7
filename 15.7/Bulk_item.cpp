#include "Bulk_item.h"

ostream & operator << (ostream & os, Bulk_item &bi)
{
	os << "\t Using operator << (Bulk_item)" << endl
		<< "\t Visit Bulk_item's book():\t" << bi.book()
		<< endl
		<< "\tVisit Bulk_item's net_price():"
		<< "/t5   ¡¶" << bi.book() << "¡·,the price is :\t"
		<< bi.net_price(5) << endl;
	return os;
}