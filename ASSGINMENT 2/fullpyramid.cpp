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
        for(int i = 1; i <= 5; i++) {
        
        for(int s = 1; s <= 5 - i; s++)
            cout << "  ";

        for(int j = i; j <= i + i - 1; j++)
            cout << j << " ";

        for(int j = i + i - 2; j >= i; j--)
            cout << j << " ";

        cout << endl;
    }
    }
    