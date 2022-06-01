/*
* Class : OnsalesProductUI
* Description:  OnsalesProduct boundary class for UI
* Created: 2022/5/31
* Author: B711169 정다은
* mail: jul12230103@gmail.com
*/
#include "OnsalesProductsUI.h"
using namespace std;

OnsalesProductsUI::OnsalesProductsUI(FILE* o_fp, User u, std::vector<Product> list)
{
    enableEx(o_fp);

    vector<Product>::iterator it = list.begin();
    enable(o_fp, *(it));
    while (it != list.end()) {
        enable(o_fp, *(it));  ++it;
    }
}

void OnsalesProductsUI::enableEx(FILE* out_fp)
{
    // 출력 형식
    fprintf(out_fp, "3.1 판매 의류 등록\n");
}

void OnsalesProductsUI::enable(FILE* out_fp, Product p)
{
    // 출력 형식
    fprintf(out_fp, "%s %s %s %s\n", this->productName, this->manufacturer, this->price, this->quantity);
}