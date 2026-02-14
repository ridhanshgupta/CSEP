/*
        1               
      2 3 2             
    3 4 5 4 3            
  4 5 6 7 6 5 4         
5 6 7 8 9 8 7 6 5
*/


#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 5;i++){
        
        for(int j =1; j < 2*i  ; j++){
            cout << " ";
            cout << j;

        }
        cout << "\n";
    }
    
}