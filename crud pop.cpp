	#include <iostream>
	using namespace std;
	
	int main()
		
	{
		 string y;
		int weight1,weight2,n,day, days;
			cout << "To end enter 0" << endl;
		
		do
		{
			lineA:
			cout << "Do you want to check (y/n)? ";
			cin >> y;
			if ( y == "Y" || y == "y")
			{
				cout << "Enter days: ";
			cin >> days;
			cout << "Intial size of crud population (in pounds): ";
			cin >> weight1;

			if ( days % 5!= 0)
			{
				cout << "Please enter a day that is multiple of 5";
				goto lineA;
			}
			else
			{n= weight1;
			weight1 = 0;
			day = 0;
			while (day != days)
			{
				day = day + 5;
				weight2 = weight1 + n;
				weight1 = n;
				n= weight2;
			}
				cout << weight2 << endl;		
			}
			}
			else {
				return 0;
			}
		
			
    	}  while (weight1 != 0);
	}
