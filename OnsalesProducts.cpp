/*
* Class : OnsalesProducts
* Description:  OnsalesProducts control class
* Created: 2022/5/31
* Author: B711169 Á¤´ÙÀº
* mail: jul12230103@gmail.com
*/
#include "OnsalesProducts.h"
#include "OnsalesProductsUI.h"

OnsalesProducts::OnsalesProducts()
{
}

void OnsalesProducts::showOnsalesProducts(User* u, FILE* i_fp, FILE* o_fp)
{
    // Output UI    
    OnsalesProductsUI* UI = new OnsalesProductsUI();
    UI->enableUI(u, o_fp, u->getAllSalesCollection());
}
