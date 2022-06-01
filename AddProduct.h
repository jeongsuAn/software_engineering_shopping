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
    // 3.1. �Ǹ� �Ƿ� ���
    // > [��ǰ��][����ȸ���][����][����]
    void addProduct(User* u, std::string pName, std::string manufacturer, int price, int quantity, FILE* out_fp);
};