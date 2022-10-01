#include <iostream>
using namespace std;

int main()
{
    cout << "Hellou megis!\n";
	cout <<"Megavoima on ylivoimaa!\n";
	cout << "Ylivoima on megavoimaa!\n";
	cout << "\n";

	int x;

	cout << "Montako megista ajattelit juoda? "; 
	cin >> x;

	if (x > 3) 
	{
		cout << "Ihan tarpeeksi monta megista\n";
	}
	else 
	{
		cout << "ei oo kyl tarpeeks monta\n";
	}
}

