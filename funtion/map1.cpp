#include <iostream>
#include <map>

using namespace std;

int main1()
{
	//map<int, char*> mymap;
	//int n = mymap.size();
	//cout << "mang cua map la: " << n << endl;
	map<int, char> mymap;
	mymap[0] = 'a';
	mymap[1] = 'b';

	map<int, char>::iterator t;
	for ( t = mymap.begin(); t != mymap.end(); t++)
	{
		cout << t->second << " ";
	}
	cout << endl;
	mymap.insert(pair<int, char>(2,'c'));
	mymap.insert(pair<int, char>(3,'d'));
	int n = mymap.size();
	cout << "mang cua map la: " << n << endl;
	//mymap.insert(pair<int, char>(3, 'e'));
	mymap.erase(1);
	n = mymap.size();
	cout << "mang cua map la: " << n << endl;
	for ( t = mymap.begin(); t != mymap.end(); t++)
	{
		cout << t->second << " ";
	}

	//map<int, char> mymap1 = {(0,'s'),(1,'r'),(2,'k')};
	map<int, char> mymap1(mymap.begin(), mymap.end());
	mymap.swap(mymap1);

	/*cout << "mymap: ";
	for (t = mymap.begin(); t != mymap.end(); t++)
	{
		cout << t->second << " ";
	}*/
	mymap1.erase(mymap1.begin(), mymap1.find(2));
	cout << "\nmymap1: ";
	for (t = mymap1.begin(); t != mymap1.end(); t++)
	{
		cout << t->second << " ";
	}
	return 0;
}
