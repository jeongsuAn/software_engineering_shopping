/*
* Class : SalesStatistics
* Description:  SalesStatistics control class
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/

#include <iostream>
#include "User.h"
#include "Product.h"
#include "ProductCollection.h"
using namespace std;

class SalesStatistics
{
public:
    void showStatistics(FILE* o_fp, User u);
};