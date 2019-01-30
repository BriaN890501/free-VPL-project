#include <string>
#include <iostream>
using namespace std;

int main()
{
	string filename = "test";
	string cmd = "g++ " + filename + ".cpp -o " + filename;
	system(cmd.c_str());
	return 0;
} 
