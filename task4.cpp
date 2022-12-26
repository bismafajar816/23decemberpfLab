#include <iostream>
using namespace std;
main ()
{
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
string name;
double totalMarks;
float percentage;

cout <<"marks in subject1: ";
cin >> subject1;
cout <<"marks in subject2: ";
cin >> subject2;
cout <<"marks in subject3: ";
cin >> subject3;
cout <<"marks in subject4: ";
cin >> subject4;
cout <<"marks in subject5: ";
cin >> subject5;
cout <<"enter name: ";
cin >> name;
totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
cout <<"totalMarks obtained: "<<totalMarks <<endl;
percentage = totalMarks*0.2;
cout <<"percentage obtained: "<<percentage;











}