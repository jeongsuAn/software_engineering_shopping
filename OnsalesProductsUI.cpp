/*
* Class : OnsalesProductUI
* Description:  OnsalesProduct boundary class for UI
* Created: 2022/5/31
* Author: B711169 ������
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
    // ��� ����
    fprintf(out_fp, "3.1 �Ǹ� �Ƿ� ���\n");
}

void OnsalesProductsUI::enable(FILE* out_fp, Product p)
{
    // ��� ����
    fprintf(out_fp, "%s %s %s %s\n", this->productName, this->manufacturer, this->price, this->quantity);
}