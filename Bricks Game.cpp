#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while(n>3*i){
	    n = n-3*i;
	    i++;
	}
	//cout << n << " " << i;
	if(n>i){
	    cout << "Motu";
	}
	else{
	    cout << "Patlu";
	}
	return 0;
}
