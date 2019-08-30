#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	
	int t;
	cin >> t;
	
	while(t){
	    int w,h;
	    cin >> w >> h;
	    if(w<size || h<size){
	        cout << "UPLOAD ANOTHER" << endl;
	    }
	    else if(w==h){
	        cout << "ACCEPTED" << endl;
	    }
	    else{
	        cout << "CROP IT" << endl;
	    }
	    t--;
	}
	
	return 0;
}
