/*
* Class : AddProduct
* Description:  AddProduct control class 
* Created: 2022/5/31
* Author: B711169 Á¤´ÙÀº
* mail: jul12230103@gmail.com
*/

#include "Product.h"
#include "AddProduct.h"
#include "AddProductUI.h"

AddProduct::AddProduct()
{
}

void AddProduct::addProduct(User* admin ,User* u, FILE* in_fp, FILE* out_fp)
{
    // Input UI    
    AddProductUI* addProductUI = new AddProductUI();
    addProductUI->AddProductUI_IN(in_fp);

    // Control
    Product p(u->getName(), addProductUI->getProductName(), addProductUI->getManufacturer(), addProductUI->getPrice(), addProductUI->getQuantity());
    (u->getAllSalesCollection()).push_back(p);
    (admin->getAllSalesCollection()).push_back(p);

    // Output UI
    addProductUI->AddProductUI_OUT(out_fp, p);
    
}