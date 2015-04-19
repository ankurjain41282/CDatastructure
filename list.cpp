using namespace std;
#include<iostream>
#include<list>
#include<stdlib.h>
int main()
{
list<int>firstlist;
list<int>::iterator listiterate;
int choice,element;
int value;
for(;;)
{

std::cout<<"enter your choice";
std::cin>>choice;
cout<<choice;
switch (choice)
{
 case 1:
 cout<<"enter the value to inserted";
 cin>>value;
 firstlist.push_back(value);
 break;
 case 2:
 for(listiterate=firstlist.begin();listiterate!=firstlist.end();listiterate++)
 {
	std::cout<<*listiterate;
 }
 break;
 case 3:
 cout<<"enter the element to be delete";
 cin>>element;
 firstlist.remove(element);
 break;
 case 4:
 exit(0);
 break;
 default:
 cout<<"";
 break;
}

}




}
