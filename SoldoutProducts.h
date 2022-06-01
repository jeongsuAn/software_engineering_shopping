#pragma once
/*
* Class : SoldoutProducts
* Description:  SoldoutProducts control class
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/
#include <iostream>
#include "User.h"
#include "Product.h"

class SoldoutProducts
{
public:
    SoldoutProducts();
    void showSoldoutProducts(User* u, FILE* o_fp);
};