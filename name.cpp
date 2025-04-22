#include<iostream>
using namespace std;
int main()
{
	string first_name,last_name;
	
	cout<<"Enter your First name:";
	cin>> first_name;
	cout<<"Enter your Last name:";
	cin>> last_name;
	
	cout<<"Your Full Name:"<< first_name + " " +last_name;
	return 0;
}