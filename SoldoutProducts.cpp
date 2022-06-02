/*
* Class : SoldoutProducts
* Description:  SoldoutProducts control class
* Created: 2022/5/31
* Author: B711169 Á¤´ÙÀº
* mail: jul12230103@gmail.com
*/
#include "SoldoutProducts.h"
#include "SoldoutProductsUI.h"

SoldoutProducts::SoldoutProducts()
{

}

void SoldoutProducts::showSoldoutProducts(User* u, FILE* o_fp)
{
    // Output UI    
    
    SoldoutProductsUI* UI = new SoldoutProductsUI();
    UI->enableUI(u, o_fp, u->getSoldoutCollection());
}
