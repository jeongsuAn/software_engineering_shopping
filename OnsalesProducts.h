#pragma once
/*
* Class : OnsalesProducts
* Description:  OnsalesProducts control class
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/
#include <iostream>
#include "User.h"

class OnsalesProducts
{
public:
    OnsalesProducts();
    void showOnsalesProducts(User* u, FILE* i_fp, FILE* o_fp);
};