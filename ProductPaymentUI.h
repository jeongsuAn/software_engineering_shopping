// Class : productPaymentUI
// Description: This is a productPayment boundary class.
// Created: 2022/5/30 10:00 pm
// Author: B711089 백지연
// mail: etety39@g.hongik.ac.kr

#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

class ProductPaymentUI
{
private:
    FILE *out_fp;
    string sellerID;
    string productName;
public:
    ProductPaymentUI(FILE *o_fp, Product p);
    void enable(FILE *o_fp);
};