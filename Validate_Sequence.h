#ifndef Validate_Sequence_h
#define Validate_Sequence_h
#include <vector>
#include <iostream>
class ValidateSquence {
    bool isValidSequence;
public:
    ValidateSquence();
    bool isValid(std::vector<int> sequence);
};
#endif