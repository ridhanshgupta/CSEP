#include <iostream>
using namespace std;

int sum(int a) {
    int pn = 0;
    while(a >0 ){
       pn += a%10;
       a/= 10;
       if(pn>9){
        pn = sum(pn);
       }
    }
    return pn;
}

void pnlist(int pn){

    switch(pn){
        case 1:
            cout << "The Leader";
            break;
        case 2:
            cout << "The Peacemaker";
            break;
        case 3:
            cout << "The Creative Communicator";
            break;
        case 4:
            cout << "The Builder";
            break;
        case 5:
            cout << "The Free Soul";
            break;
        case 6:
            cout << "The Nurturer";
            break;
        case 7:
            cout << "The Seeker";
            break;
        case 8:
            cout << "The Powerhouse";
            break;
        case 9:
            cout << "The Humanitarian";
            break;
        default:
            cout << "ERROR";
            break;
        
    }
}

int main(){
    int dob; 
    cout << "Enter your date of birth in DDMMYYYY :";
    cin >> dob;

    cout << "you DOB : " << dob << endl;
    
    int pn = sum(dob);

    cout << "your Personality number is : " << pn <<endl;

    pnlist(pn);

}