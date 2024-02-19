#include <iostream>
#include <fstream>
#include <string>     // ??? std::getline
using namespace std;

int len(string a){
	int i = 0;
	while(a[i]){
		i++;
	}
	return i;
}

int main()
{
    cout << len("asfd");
}
