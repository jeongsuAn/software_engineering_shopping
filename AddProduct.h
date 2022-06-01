#pragma once
/*
* Class : AddProduct
* Description:  AddProduct control class
* Created: 2022/5/31
* Author: B711169 정다은
* mail: jul12230103@gmail.com
*/

#include <iostream>
#include "User.h"
class User;
class Product;

class AddProduct
{
public:
    AddProduct();
    // 3.1. 판매 의류 등록
    // > [상품명][제작회사명][가격][수량]
    void addProduct(User* u, FILE* in_fp, FILE* out_fp);
};