
#include <iostream>
#include <vector>   
#include <unordered_map>
using namespace std;


bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> m;
        for(auto i: nums){
            // int f = m[i];
            // f+=1;
            cout << m[i]<< endl;
            m[i]++;
            if (m[i]>1){ 
                return true;
                // break;
            }
        }
    return false;
    }

    int main(){
        vector<int> nums = {1,1,3,4,5,6,7,8,9,10};
        cout << containsDuplicate(nums);
    }