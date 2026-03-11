/*
12345
1   4
1  3
1 2
1
*/


#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5;i++){
        
        for(int j =1; j < 6-i ; j++){
            if(i == 0 || j == 1 || j == 5-i){
                cout << j <<" ";
            }
            else{
                cout << "  ";
            }
        }
        cout << "\n";
    }
    
}