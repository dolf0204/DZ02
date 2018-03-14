#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

bool vrati(int i,int j)
{
	if (i % 2 != 0 && j % 2 != 0)
	{
		return i;
	}
}
int main()
{
	array<int, 8> myArray = { 6,5,11,8,10,19,13,54 };

	array<int, 8>::iterator rezultat;

	rezultat = adjacent_find(myArray.begin(), myArray.end(), vrati);

	if (rezultat != myArray.end())
	{
		cout << "Prva uzastopna dva neparna broja su: " << *rezultat << "," << *(rezultat + 1) << endl;
	}

	rezultat = adjacent_find(++rezultat, myArray.end(), vrati);

	if (rezultat != myArray.end())
	{
		cout << "Sljedeca uzastopna dva neparna broja su: " << *rezultat << "," << *(rezultat + 1) << endl;
	}

	return 0;
}
