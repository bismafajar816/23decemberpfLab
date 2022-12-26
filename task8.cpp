#include <iostream>
using namespace std;
main ()
{
float vegCost;
float fruitCost;
int totalVeg;
int totalFruits;
float vegPrice;
float fruitPrice;

cout <<"enter vegetable cost per kg: ";
cin >> vegCost;
cout <<"enter fruits cost per kg: ";
cin >> fruitCost;
cout <<"total weight of vegetable: ";
cin >> totalVeg;
cout <<"total weight of fruits: ";
cin >>totalFruits;
vegPrice = vegCost*totalVeg/1.94;
cout <<"total price of vegetable in rupees: " <<vegPrice<<endl;
fruitPrice = fruitCost*totalFruits/1.94;
cout <<"total price of fruits in rupees: " <<fruitPrice;















}