#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

bool vrati(int i)
{
	return i % 2 == 0;
}
int main()
{
	array<int, 5> myArray = { 3,5,6,8,10 };
	

	array<int,5>::iterator rezultat = find_if(myArray.begin(), myArray.end(), vrati);

	cout << "Prvi parni broj je: " << *rezultat << endl;

	return 0;
}
