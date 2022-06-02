// Class : productPaymentUI
// Description: This is a productPayment boundary class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "Product.h"

class ProductPaymentUI
{
private:
    FILE *outFp;
    std::string sellerID;
    std::string productName;

public:
    ProductPaymentUI(FILE *outFp, Product* p);
    void enable(FILE *outFp);
};