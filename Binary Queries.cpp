#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> v;
    for(int i=0 ; i<n ; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    while(q){
        int type;
        cin >> type;
        if(type==1){
            int k;
            cin >> k;
            if(v[k-1]==0){
                v[k-1]=1;
            }
            else{
                v[k-1]=0;
            }
        }
        else{
            int a , b;
            cin >> a >> b;
            if(v[b-1]==1){
                cout << "ODD" << endl;
            }
            else{
                cout << "EVEN" << endl;
            }
        }
        q--;
    }
    return 0;
}
