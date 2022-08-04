#pragma once
#ifndef __SALES_DATA_H__
#define __SALES_DATA_H__
#include<iostream>

class Sales_data
{
	Sales_data() = default;
	Sales_data(const std::string &s):bookNo(s){ }
	Sales_data(const std::string &s, unsigned n,double p):bookNo(s),units_solds(n),revenue(p*n){}
	Sales_data(std::string&);
	std::string bookNo;
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double  avg_price()const;
	unsigned units_solds = 0;
	double revenue = 0.0;
};

#endif
