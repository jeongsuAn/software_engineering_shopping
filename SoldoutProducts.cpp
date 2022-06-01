/*
* Class : SoldoutProducts
* Description:  SoldoutProducts control class
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/
#include "SoldoutProducts.h"
#include "SoldoutProductsUI.h"

void SoldoutProducts::showSoldoutProducts(FILE* o_fp, User u)
{
    SoldoutProductsUI UI(o_fp, u, u.getOnSalesCollection());
}
