/*
* Class : AddProductUI
* Description:  AddProduct boundary class for UI
* Created: 2022/5/31 
* Author: B711169 정다은
* mail: jul12230103@gmail.com
*/

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#include "User.h"
#include "Product.h"
#include "AddProductUI.h"


AddProductUI::AddProductUI(FILE* o_fp, Product p)
{
    this->productName = p.getProductName();
    this->manufacturer = p.getManufacturer();
    this->price = p.getPrice();
    this->quantity = p.getQuantity();

    enable(o_fp);
}

void AddProductUI::enable(FILE* out_fp)
{
    // 출력 형식
    fprintf(out_fp, "3.1 판매 의류 등록\n");
    fprintf(out_fp, "%s %s %d %d\n", this->productName, this->manufacturer, this->price, this->quantity);
}