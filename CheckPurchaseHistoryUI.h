// Class : checkPurchaseHistoryUI
// Description: This is a checkPurchaseHistory boundary class.
// Created: 2022/5/30 10:00 pm
// Author: Jiyeon Baek
// mail: etety39@g.hongik.ac.kr

#include <iostream>
#include <vector>
#include "Product.h"
#include "User.h"
#include "PurchaseHistoryCollection.h"

class CheckPurchaseHistoryUI
{
public:
    CheckPurchaseHistoryUI(User u, FILE *out_fp);
    void enable(User u, FILE *out_fp);
};