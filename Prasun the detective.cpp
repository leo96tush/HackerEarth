#include<bits/stdc++.h>
using namespace std;

string compare(int arr1[],int arr2[]){
    for(int i=0 ; i<26 ; i++){
        if(arr1[i]!=arr2[i]){
            return "NO" ;
        }
    }
    
    return "YES" ;
}

int main(){
    int count_array1[26]={0},count_array2[26]={0};
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0 ; i<s1.length() ; i++){
        s1[i] = tolower(s1[i]);
        if(s1[i]>='a' && s1[i]<='z')
            count_array1[s1[i]-'a']++;
    }
    
    for(int i=0 ; i<s2.length() ; i++){
        s2[i] = tolower(s2[i]);
        if(s2[i]>='a' && s2[i]<='z')
            count_array2[s2[i]-'a']++;
    }
    
    /*for(int i=0 ; i<26 ; i++){
        cout << count_array1[i] << " ";
    }*/
    
    cout << compare(count_array1,count_array2);
}
