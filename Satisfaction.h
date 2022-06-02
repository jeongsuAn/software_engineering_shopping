// Class : Satisfaction
// Description: This is a Satisfaction control class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

// Revision
// 1. When & Who : 2022/06/02 15:20 pm by B711089 Baek Jiyeon
 //      What : added function transferSatisfaction


#pragma once

#include <iostream>
#include <string>
#include "User.h"
#include "Product.h"
#include "SatisfactionUI.h"

class Satisfaction
{

public:
    Satisfaction(User *u, FILE *inFp, FILE *outFp);
    void transferSatisfaction(User *u, std::string pName, std::string score);
};