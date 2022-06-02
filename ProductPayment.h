// Class : productPayment
// Description: This is a productPayment control class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

#pragma once

#include <iostream>
#include <fstream>
#include "Product.h"
#include "ProductPaymentUI.h"
#include "User.h"

class ProductPayment
{
public:
    ProductPayment(FILE *out_fp, User *u, std::string pName, User* admin);
};