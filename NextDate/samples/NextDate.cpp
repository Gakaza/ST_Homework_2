/*
Homework #1 Part 1 NextDate
Name: Shu-Hao Chang (Ken Chang)
Student ID: 0456151
Date: Oct 20, 2015

Motivation:
- Learn the first step to write testing code coding by using XUnit (googe testing framework)
- Practice boundary value, equivalence class, , edge testing, and decision table based)
- Practice TDD (test-driven development) by google test
- Practice Xunit in a practical project
Goal:
- Implement the Triangle, NextDate, Commission problems by TDD
- Using XUnit for writing testing code
- In this time, we use google testing framework
- Analyze boundary value, equivalence class, edge values, and decision table based
- writing test code using these analyses
*/
#include "NextDate.h"
#include <iostream>
#include <string>
using namespace std;

//determine a leap year
bool leapYear(int year) {
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return true;
	else 
		return false;
}
string NextDate(int month, int day, int year){
	int nDay, nMonth, nYear;
	//testing for valid input
	if(day > 30 && day < 1){
		return "invalid day";
	}else if(month < 13 && month > 0){
		return "invalid month";		
	}else if(year < 2015 && year > 1811){
		return "invalid year";
	}
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10){
		nYear = year;
		if(day<31){
			nDay = day + 1;
			nMonth = month;
		}else{
			nDay = 1;
			nMonth = month + 1;
		}
	}else if(month == 4 || month == 6 || month == 9 || month == 11){
		nYear = year;
		if(day<30){
			nDay = day + 1;
			nMonth = month;
		}else{
			nDay = 1;
			nMonth = month + 1;
		}
	}else if(month == 2){
		nYear = year;
		if(day<28){
			nDay = day + 1;
			nMonth = month;
		}else if(day == 28){
			if(leapYear(year)){
				nDay = day + 1;
				nMonth = month;
			}else{
				nDay = 1;
				nMonth = 3;
			}
		}else if(day == 29){
			if(leapYear(year)){
				nDay = 1;
				nMonth = 3;
			}else{
				return "Feb and leapYear bug";
			}
		}
	}else if(month == 12){
		if(day<31){
			nDay = day + 1;
			nMonth = month;
			nYear = year;
		}else{
			nDay = 1;
			nMonth = 1;
			nYear = year + 1;
		}
	}else{
		return "Bug, seriously";
	}
	
	//writing the nextDate into string format
	char str[100];
	memset(str, 0, sizeof(str));
	sprintf(str, "%d/%d/%d", nMonth, nDay, nYear);
	string nDate(str);
	return nDate;
}

