#include<bits/stdc++.h>
using namespace std;

int cal_ways[30];

int ways(int n){
    if(n==0||n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else{
        if(cal_ways[n]!=0){
            return cal_ways[n];
        }
        else{
            cal_ways[n] = ways(n-1)+ways(n-2)+ways(n-3);
            return cal_ways[n];
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    cout << ways(n);
}
