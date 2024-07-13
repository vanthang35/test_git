#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
#include <string>

using namespace std;
class Address
{
    private:
    string City;
    string Ward;
    string numStreet;
    int Zipcode;
    public:
    Address(const string &, const string &, const string &,int);
    ~Address();
    const string &GetCity( ) const {return City;}
    const string &GetWard() const {return Ward;}
    const string &GetnumStreet() const {return numStreet;}
    int GetZipcode() {return Zipcode;}

};
#endif