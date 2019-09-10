#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n ;
    vector<int> v;
    for(int i=0 ; i<n ; i++){
        int a ;
        cin >> a ;
        v.push_back(a);
    }
    
    int count = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(v[i+1]<v[i]){
            count++;
        }
    }
    cout << count+1;
}
