/*
* Class : AddProduct
* Description:  AddProduct control class 
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/
#include "AddProduct.h"
#include "AddProductUI.h"
#include "ProductCollection.h"
using namespace std;

AddProduct::AddProduct(User u, string pName, string manufacturer, int price, int quantity, FILE* out_fp)
{
    Product p = Product(u.getName(), pName, manufacturer, price, quantity);
    u.getAllSalesCollection().addProduct(p);
    AddProductUI addProductUI(out_fp, p);
}  