
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t){
	    int sh , sm , eh , em;
	    cin >> sh >> sm >> eh >> em;
	    int s_min,e_min;
	    s_min = (sh*60)+sm;
	    e_min = (eh*60)+em;
	    cout << (e_min-s_min)/60 << " " << (e_min-s_min)%60 << endl;
	    t--;
	}
	return 0;
}
