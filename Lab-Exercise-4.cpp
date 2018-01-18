//Display the pattern using numebr repeating for a row
//fix and complete the program below.
#include <iostream>
using namespace std;


int main()
{
	int i,j,sph,rows,k;
	
	cout<<"Display the pattern"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"Input number of rows :"<<endl;
	cin>>rows;
	sph=rows+4-1;

	for(i=1;i<=rows;i++)
	{
		for(k=sph;k>=1;k--)
		{
			cout<<" ";
		}
		
	for(j=1;j<=i;j++)
	cout<<"*"<<" ";
		
	cout<<endl;
	sph--;
	}
	
}
