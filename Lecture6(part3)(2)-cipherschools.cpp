#include<iostream>
using namespace std;

int main()
{
	int i;
	int input;
	i=100;
	
	for(i=1;i<101;i++)
	{
		cin>>input;
		if(input == 65)
		{
			cout<<"congrats you have guessed correct";
			break;
		}
	}
}
