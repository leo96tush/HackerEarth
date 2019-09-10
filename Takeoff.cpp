
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t){
        int N,p,q,r,count = 0;
        cin >> N >> p >> q >> r;
        for(int i=1 ; i<=N ; i++){
            if(i%p==0 || i%q==0 || i%r==0){
                if(i%p==0 && i%q==0){
                    count = count;
                }
                else if(i%q==0 && i%r==0){
                    count = count;
                }
                else if(i%r==0 && i%p==0){
                    count = count;
                }
                else{
                    count++;
                }
            }
        }
        cout << count << endl;
        t--;
    }
    return 0;
}
