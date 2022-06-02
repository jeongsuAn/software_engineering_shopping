// Class : SatisfactionUI
// Description: These are member functions of Satisfaction boundary class.
// Created: 2022/5/31 11:00 am
// Author: B711089 Baek Jiyeon
// mail: etety39@g.hongik.ac.kr

#include "SatisfactionUI.h"

#define MAX_STRING 32


void SatisfactionUI::inputPurchaseSatisfaction(FILE *inFp)
{
    char pName[MAX_STRING], score[MAX_STRING];

    // 입력 형식 : [상품명] [구매만족도]
    fscanf(inFp, "%s %s", pName, score);

    this->setProductName(pName);
    this->setScore(score);
}

void SatisfactionUI::enable(FILE *outFp)
{
    // 판매자ID, 상품명, 구매 만족도 출력
    fprintf(outFp, "%s\n", "4.4. 상품 구매만족도 평가");
    fprintf(outFp, "> %s %s %s\n", this->getSellerID().c_str(), this->getProductName().c_str(), this->getScore().c_str());
}

void SatisfactionUI::setSellerID(std::string sID)
{
    this->sellerID = sID;
}
void SatisfactionUI::setProductName(std::string pName)
{
    this->productName = pName;
}
void SatisfactionUI::setScore(std::string s)
{
    this->score = s;
}

std::string SatisfactionUI::getSellerID()
{
    return this->sellerID;
}

std::string SatisfactionUI::getScore()
{
    return this->score;
}

std::string SatisfactionUI::getProductName()
{
    return this->productName;
}