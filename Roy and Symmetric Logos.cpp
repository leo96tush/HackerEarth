#include<bits/stdc++.h>
using namespace std;

bool result(char arr[][100],int size){
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++){
            //cout << arr[i][j] << " ";
            if(arr[i][j]!=arr[i][size-j-1] || arr[i][j]!=arr[size-i-1][j] || arr[i][j]!=arr[size-i-1][size-j-1]){
                //cout << i << " " << j << endl;
                return false;
            }
        }
        //cout << endl;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t){
        int size;
        cin >> size;
        char arr[100][100];
        for(int i=0 ; i<size ; i++){
            for(int j=0 ; j<size ; j++){
                cin >> arr[i][j];
            }
        }
        
        /*for(int i=0 ; i<size ; i++){
            for(int j=0 ; j<size ; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;*/
        if(result(arr,size)==false){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        t--;
    }
}
