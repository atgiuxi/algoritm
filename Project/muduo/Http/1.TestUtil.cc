#include "Http.hpp"
#include <iostream>

using namespace std;

void TestSplit()
{
	vector<string> v;
	string src = "hello world     ";
	Util::Split(src," ",&v);

	for(auto& e : v)
	{
		cout << e << endl;
	}
}

void TestReadFile()
{
	string dst;
	TestSplit();
	string filename = "../1.TestUtil.cc";
	Util::ReadFile(filename,&dst);

	cout << dst << endl;	
}

void TestWriteFile()
{
	string filename = "a.txt";
	string src = "hello world";
	Util::WriteFile(filename,src);
}

int main()
{
	TestWriteFile();
	return 0;
}