#include <iostream>
using namespace std;
main ()
{
string movie;
double adultTPrice;
double childTPrice;
double adultTSold;
double childTSold;
int donatePercentage;
double totalAmount;
double amountDonated;
double amountLeft;
cout <<"movie name: ";
cin >> movie;
cout <<"adult Ticket Price: ";
cin >> adultTPrice;
cout <<"children ticket price: ";
cin >>childTPrice;
cout <<"adult tickets sold: ";
cin >> adultTSold;
cout <<"children ticket sold: ";
cin >> childTSold;
cout <<"percentage donated: ";
cin >> donatePercentage;
totalAmount = adultTPrice*adultTSold + childTPrice*childTSold;
cout <<"total amount earned: "<<totalAmount <<endl;
amountDonated = donatePercentage*totalAmount/100;
cout <<"amount donated: "<<amountDonated <<endl;
amountLeft = totalAmount - amountDonated;
cout <<"total amount left: "<<amountLeft;













}