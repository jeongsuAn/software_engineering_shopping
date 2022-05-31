// Class : productPayment
// Description: This is a productPayment control class.
// Created: 2022/5/30 10:00 pm
// Author: Jiyeon Baek
// mail: etety39@g.hongik.ac.kr

#include <iostream>
#include "Product.h"
#include "PurchaseHistoryCollection.h"
#include "ProductPaymentUI.h"
#include "User.h"

class ProductPayment
{
public:
    ProductPayment(FILE *out_fp, User u, Product p);
};