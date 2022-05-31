/*
* Class : AddProduct
* Description:  AddProduct control class
* Created: 2022/5/31
* Author: B711169 ������
* mail: jul12230103@gmail.com
*/

#include <iostream>
#include "User.h"
#include "Product.h"

class AddProduct
{
public:
    // 3.1. �Ǹ� �Ƿ� ���
    // > [��ǰ��][����ȸ���][����][����]
    AddProduct(User u, string pName, string manufacturer, int price, int quantity, FILE* out_fp);
};