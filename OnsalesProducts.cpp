/*
* Class : OnsalesProducts
* Description:  OnsalesProducts control class
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/
#include "ProductCollection.h"
#include "OnsalesProducts.h"
#include "OnsalesProductsUI.h"
using namespace std;


void OnsalesProducts::showOnsalesProducts(FILE* o_fp, User u)
{
    OnsalesProductsUI UI(o_fp, u, u.getOnSalesCollection());
}
