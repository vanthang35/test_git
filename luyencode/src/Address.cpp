#include <iostream>
#include <iomanip>
#include <Address.h>

Address::Address(const string &c, const string &w, const string & ns, int zc)
: City(c), Ward(w),numStreet(ns) , Zipcode(zc)
{

}
Address::~Address()
{
    //
}
