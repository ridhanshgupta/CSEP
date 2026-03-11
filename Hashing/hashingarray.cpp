#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
     // precompute 

    unordered_map<int,int> hash;
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    for (auto it : hash){
        cout << it.first << " " << it.second << "\n";
    }
    
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        cout << hash[x] << "\n";
    }
    return 0;
}