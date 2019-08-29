
#include <iostream>
using namespace std;

int main() {
    int l , r , k;
	cin >> l >> r >> k;
	int i=l,count=0;
	while(i<=r){
	    if(i%k==0){
	        count++;
	    }
	    i++;
	}
	cout << count;
	return 0;
}
