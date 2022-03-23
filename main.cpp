#include "Validate_Sequence.h"
#include <iostream>
using namespace std;
int main(){
    ValidateSquence *currentSequence = new ValidateSquence();
    
    cout << currentSequence->isValid({3,7,1,4,4,9,6,3,5,3,9,8,4,3,1});
    return 0;
}


