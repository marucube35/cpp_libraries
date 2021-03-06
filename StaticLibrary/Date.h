#pragma once
#include "Standard.h"
#include "StringHelper.h"
#include "Macro.h"
#include "Converter.h"
#include "Flags.h"

class Date
{
private:
	int _day;
	int _month;
	int _year;

public:
	int getDay() const { return _day; }
	int getMonth() const { return _month; }
	int getYear() const { return _year; }
	void setDay(int value) { _day = value; }
	void setMonth(int value) { _month = value; }
	void setYear(int value) { _year = value; }

public:
	Date();
	Date(int d, int m, int y);
	Date(const Date& other);
	Date& operator=(const Date& other);
	~Date();
public:
	bool isLeapYear() const;
	bool isValid() const;
	int daysInMonth() const;

public:
	bool operator==(Date other);
};

class DateConverter{
public:
	string convert(const Date&);
	Date convertBack(const string);
};