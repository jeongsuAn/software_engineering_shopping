// Class : checkPurchaseHistory
// Description: This is a checkPurchaseHistory control class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

#pragma once

#include <iostream>
#include "CheckPurchaseHistoryUI.h"
#include "User.h"

class CheckPurchaseHistory
{
public:
    CheckPurchaseHistory(User *u, FILE* out_fp, User* admin);
};