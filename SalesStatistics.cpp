/*
* Class : SalesStatistics
* Description:  SalesStatistics control class
* Created: 2022/5/31
* Author: B711169 Á¤´ÙÀº
* mail: jul12230103@gmail.com
*/

#include "User.h"
#include "SalesStatistics.h"
#include "SalesStatisticsUI.h"
SalesStatistics::SalesStatistics()
{

}
void SalesStatistics::showStatistics(FILE* o_fp, User* u)
{
	SalesStatisticsUI* UI = new SalesStatisticsUI();
	UI->enableUI(u, o_fp, u->getAllSalesCollection());
}