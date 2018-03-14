#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

int main()
{
	array<int, 5> myArray = { 2,4,6,8,10 };

	if (all_of(myArray.begin(), myArray.end(), [](int i) {return !(i % 2); }))
	{
		cout << "svi elementi su parni" << endl;
	}

	array<int, 5> myArray = { 1,3,5,7,9 };

	if (all_of(myArray.begin(), myArray.end(), [](int i) {return i % 2; }))
	{
		cout << "svi elementi su Neparni" << endl;
	}


	return 0;
}
