/*
Homework #1 Part 2 Triangle
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

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

std::string triangleType(int a, int b, int c) {
	if(a > 0 && b > 0 && c > 0 && a <= 200 && b <= 200 && c <= 200 ){
		if ((a < b + c) && (b < a + c) && (c < b + a)) {
			if ((a == b) && (b == c)){
				return "Equilateral";
			}else if ((a != b) && (b != c) && (a != c)){
				return "Scalene";
			}else{
				return "Isoscelese";
			}
		}
		else{
			return "Not triangle";
		}
	}else{
		return "Exceed length limitation";		
	}
}
