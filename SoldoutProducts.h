#pragma once
/*
* Class : SoldoutProducts
* Description:  SoldoutProducts control class
* Created: 2022/5/31
* Author: B711169 ������
* mail: jul12230103@gmail.com
*/
#include <iostream>
#include "User.h"
#include "Product.h"

class SoldoutProducts
{
public:
    void showSoldoutProducts(FILE* o_fp, User u);
};