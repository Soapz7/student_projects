#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
	int x = rand() % 10 + 1;
	cout<<"losowa liczba to: "<<x<<endl;
	return 0;
}
