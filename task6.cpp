#include <iostream>
using namespace std;
main ()
{
int pounds;
double pricePerBag;
int areaCovered;
double pricePerPound;
int costPerSquare;

cout <<"pounds in a bag: ";
cin >>pounds;
cout <<"price of each bag: ";
cin >>pricePerBag;
cout <<"area covered by each bag in square feet: ";
cin >> areaCovered;
pricePerPound = pricePerBag/pounds;
cout <<"price of one pound fertilizer: " <<pricePerPound<<endl;
costPerSquare = pounds*areaCovered;
cout <<"cost of fertilizer per square feet: "<<costPerSquare;













}