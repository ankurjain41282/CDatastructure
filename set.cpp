using namespace std;
#include<iostream>
#include<set>
int main()
{
int numbers[5]={1,2,3,4,1};
int counter=0;
int highestcount=0;
std::set<int>numberset;
set<int>::iterator iter;
std::multiset<int>mnumberset;
multiset<int>::iterator miter;
int countofvalue;
int count;
for(int i=0;i<5;i++)
{
	numberset.insert(numbers[i]);
    mnumberset.insert(numbers[i]);
}
for(iter=numberset.begin();iter!=numberset.end();iter++)
{
	
	cout<<*iter<<endl;
	
}
for(miter=mnumberset.begin();miter!=mnumberset.end();miter++)
{
	countofvalue=miter.count(numbers[counter]);
	if(highestcount<countofvalue)
	
	{
	highestcount=numbers[count];
	
	}
		//cout<<miter.count(numbers[counter]);
	
	counter++;
}
cout<<highestcount;
return 0;

}
