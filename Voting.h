#ifndef VOTING_H
#define VOTING_H
#include "ElectionManager.h"

class Voting:public ElectionManager
{   bool verifyLock = false;
public:
    Voting();
    void verify();
    void vote();
};

#endif // VOTING_H
