/*
* Class : OnsalesProductUI
* Description:  OnsalesProduct boundary class for UI
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/

#include <iostream>
#include <string>
#include "Product.h"
#include "OnsalesProducts.h"

using namespace std;

class OnsalesProductsUI
{
private:
    string productName;
    string manufacturer;
    int price, quantity;

public:
    OnsalesProductsUI(FILE* o_fp, User u, ProductCollection list);
    void enableEx(FILE* o_fp);
    void enable(FILE* o_fp, Product p);
};