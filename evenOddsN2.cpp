/*
	By: Ricardo L. Vilches Sabalier
	Description: A script to split and array of naturals numbers in even numbers and odds numbers. This algorithm is O(n^2);
				ex.	original array = [1,2,3,4,5,6]
					output = [6,4,2,1,5,3]

*/

#include <iostream>
using namespace std;


int main()

{
	system("clear");
	int temp = 0;
	int n = 6;
	int numbersArray[18] = {2,3,4,5,23,6,10,12,25,22,23,24,26,23,23,34,23,52};

	for(int i =0; i<n;i++)
	{
		 
		if((numbersArray[i]%2)!=0)
		{

			for(int j=i+1;j<n;j++)
			{
				
				if (numbersArray[j]%2==0)
				{
					temp = numbersArray[j];
					numbersArray[j]=numbersArray[i];
					numbersArray[i]=temp;

				}
				else
				{}
			}
		
		}
		else
		{}
	}

	for(int i =0; i<n;i++)
	{
		cout<<numbersArray[i]<<", ";
	}
	return 0;
}

