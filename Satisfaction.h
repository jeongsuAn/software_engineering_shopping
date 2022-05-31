// Class : Satisfaction
// Description: This is a Satisfaction control class. 
// Created: 2022/5/30 10:00 pm
// Author: B711089 백지연
// mail: etety39@g.hongik.ac.kr
#pragma once

#include <iostream>
#include <string>
#include "User.h"
#include "Product.h"
#include "SatisfactionUI.h"

class Satisfaction{
public: 
    Satisfaction(User u, std::string pName, int score, FILE *out_fp);
    // void transferSatisfaction(Product p);
};