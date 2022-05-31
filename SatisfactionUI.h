// Class : SatisfactionUI
// Description: This is a Satisfaction boundary class. 
// Created: 2022/5/31 11:00 am
// Author: B711089 백지연
// mail: etety39@g.hongik.ac.kr

#pragma once 

#include <iostream>
#include <string>

class SatisfactionUI{
private:
    std::string sellerID;
    std::string productName;
    int score;
public: 
    SatisfactionUI(std::string sID, std::string pName, int s, FILE *out_fp);
    // void inputPurchaseSatisfaction(FILE *in_fp);
    void enable(FILE *o_fp);
};