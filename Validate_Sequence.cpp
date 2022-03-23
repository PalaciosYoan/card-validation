#include "Validate_Sequence.h"
using namespace std;

ValidateSquence::ValidateSquence(){
}

bool ValidateSquence::isValid(vector<int> sequence){
    bool valid = false;
    int multiplyer = 1;
    int currentSum = 0;
    for (auto it=sequence.begin(); it!=sequence.end(); it++){
        int currentMult = *it*multiplyer;
        int currVal = currentMult;
        if (currentMult > 9){
            int whole = currentMult/10;
            int remainder = currentMult%10;
            currVal = whole + remainder;
        }
        currentSum += currVal;

        if (multiplyer==2) multiplyer=1;
        else multiplyer = 2;
    }
    cout << currentSum<<endl;

    return (currentSum%10 == 0);
}