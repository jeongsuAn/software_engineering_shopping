#pragma once
/*
* Class : AddProduct
* Description:  AddProduct control class
* Created: 2022/5/31
* Author: B711169 ������
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
    // 3.1. �Ǹ� �Ƿ� ���
    // > [��ǰ��][����ȸ���][����][����]
    void addProduct(User* u, FILE* in_fp, FILE* out_fp);
};