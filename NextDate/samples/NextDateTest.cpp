/*Test code for the NextDate.cpp, Homework 2 Part 1
 * Name: Shu-Hao Chang (Ken Chang)
 * Student ID: 0456151
 * Date: Oct 29, 2015
 * 
 * 
 * 
 * */
#include "NextDate.h"
#include <gtest/gtest.h>
//ostringstream output;
//Guide to setup gtest in ubuntu: http://stackoverflow.com/questions/18908923/unit-test-using-gtest-1-6-how-to-check-what-is-printed-out

//C0 testing
TEST(NextDateC0Test, C0Testing){
	//testing the last day of each month
	//min. requirement test cases
	EXPECT_EQ("2/1/2014", NextDate(1, 31, 2014));
	EXPECT_EQ("1/4/2014", NextDate(1, 3, 2014));
	
	EXPECT_EQ("3/1/2014", NextDate(2, 28, 2014));
	EXPECT_EQ("2/4/2014", NextDate(2, 3, 2014));
	
	EXPECT_EQ("5/1/2014", NextDate(4, 30, 2014));
	EXPECT_EQ("4/4/2014", NextDate(4, 3, 2014));
	
	EXPECT_EQ("1/1/2015", NextDate(12, 31, 2014));
	EXPECT_EQ("12/4/2014", NextDate(12, 3, 2014));
}

//C1 Testing
TEST(NextDateC1Test, C1Testing){
	//testing the last day of each month
	//all decision are traversed
	EXPECT_EQ("2/1/2014", NextDate(1, 31, 2014));
	EXPECT_EQ("1/4/2014", NextDate(1, 3, 2014));
	
	EXPECT_EQ("3/1/2014", NextDate(2, 28, 2014));
	EXPECT_EQ("2/4/2014", NextDate(2, 3, 2014));
	EXPECT_EQ("2/29/2000", NextDate(2, 28, 2000));
	EXPECT_EQ("3/1/2004", NextDate(2, 29, 2004));
	
	EXPECT_EQ("5/1/2014", NextDate(4, 30, 2014));
	EXPECT_EQ("4/4/2014", NextDate(4, 3, 2014));
	
	EXPECT_EQ("1/1/2015", NextDate(12, 31, 2014));
	EXPECT_EQ("12/4/2014", NextDate(12, 3, 2014));
	
	//Invalid input deicision test cases
	EXPECT_EQ("invalid day", NextDate(12, -1, 2014));
	EXPECT_EQ("invalid month", NextDate(14, 3, 2014));
	EXPECT_EQ("invalid year", NextDate(12, 3, 2018));
	
	
}

//MCDC Testing
TEST(NextDateMCDCTest, MCDCTesting){
	//testing the last day of each month
	//all decision are traversed
	EXPECT_EQ("2/1/2014", NextDate(1, 31, 2014));
	EXPECT_EQ("1/4/2014", NextDate(1, 3, 2014));
	
	EXPECT_EQ("3/1/2014", NextDate(2, 28, 2014));
	EXPECT_EQ("2/4/2014", NextDate(2, 3, 2014));
	EXPECT_EQ("2/29/2000", NextDate(2, 28, 2000));
	EXPECT_EQ("3/1/2004", NextDate(2, 29, 2004));
	
	EXPECT_EQ("4/1/2014", NextDate(3, 31, 2014));
	EXPECT_EQ("3/4/2014", NextDate(3, 3, 2014));
	
	EXPECT_EQ("5/1/2014", NextDate(4, 30, 2014));
	EXPECT_EQ("4/4/2014", NextDate(4, 3, 2014));
	
	EXPECT_EQ("6/1/2014", NextDate(5, 31, 2014));
	EXPECT_EQ("5/4/2014", NextDate(5, 3, 2014));
	
	EXPECT_EQ("7/1/2014", NextDate(6, 30, 2014));
	EXPECT_EQ("6/4/2014", NextDate(6, 3, 2014));
	
	EXPECT_EQ("8/1/2014", NextDate(7, 31, 2014));
	EXPECT_EQ("7/4/2014", NextDate(7, 3, 2014));
	
	EXPECT_EQ("9/1/2014", NextDate(8, 31, 2014));
	EXPECT_EQ("8/4/2014", NextDate(8, 3, 2014));
	
	EXPECT_EQ("10/1/2014", NextDate(9, 30, 2014));
	EXPECT_EQ("9/4/2014", NextDate(9, 3, 2014));
	
	EXPECT_EQ("11/1/2014", NextDate(10, 31, 2014));
	EXPECT_EQ("10/4/2014", NextDate(10, 3, 2014));
	
	EXPECT_EQ("12/1/2014", NextDate(11, 30, 2014));
	EXPECT_EQ("11/4/2014", NextDate(11, 3, 2014));
	
	EXPECT_EQ("1/1/2015", NextDate(12, 31, 2014));
	EXPECT_EQ("12/4/2014", NextDate(12, 3, 2014));
	
	//Invalid input, deicision test cases
	EXPECT_EQ("invalid day", NextDate(12, -1, 2014));
	EXPECT_EQ("invalid month", NextDate(14, 3, 2014));
	EXPECT_EQ("invalid year", NextDate(12, 3, 2018));	
	
	//More Invalid input test cases
	
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
