/*Test code for the triangle.cpp
 * Name: Shu-Hao Chang (Ken Chang)
 * Student ID: 0456151
 * Date: Oct 20, 2015
 * 
 * we can use the instruction "make" under the make folder to create triangleTest for gtest, and 
 * also create triangle.gcda, which we can use the command "gcov triangle.gcda" to create triangle.cpp.gcov.
 * This triangle.cpp.gcov can then be printed using the "cat" command to show us the coverage of our feature code.
 * We can write the following gtest code to test out our objective for this homework:
 * 	- C0, C1, C2, and MCDC test cases.
 * */
#include "triangle.h"
#include <gtest/gtest.h>
//Guide to setup gtest in ubuntu: http://stackoverflow.com/questions/18908923/unit-test-using-gtest-1-6-how-to-check-what-is-printed-out


//C0 test cases (you can read chapter 5 slide 19 for reference)
TEST(TriangleTEST, C0TestCases) {
	EXPECT_EQ("Equilateral", triangleType(1,1,1));
	EXPECT_EQ("Scalene", triangleType(4,5,6));
	EXPECT_EQ("Isoscelese", triangleType(3,5,3));
	EXPECT_EQ("Not triangle", triangleType(1,3,1));
	EXPECT_EQ("Exceed length limitation", triangleType(201,202,203));
}

//C1 Test cases
TEST(TriangleTEST, C1TestCases) {
	EXPECT_EQ("Equilateral", triangleType(1,1,1));
	EXPECT_EQ("Scalene", triangleType(4,5,6));
	EXPECT_EQ("Isoscelese", triangleType(3,5,3));
	EXPECT_EQ("Not triangle", triangleType(1,3,1));
	EXPECT_EQ("Exceed length limitation", triangleType(201,202,203));
}

//MCDC Test cases
TEST(TriangleTEST, MCDCTestCases) {
	EXPECT_EQ("Equilateral", triangleType(1,1,1));
	EXPECT_EQ("Equilateral", triangleType(10,10,10));
	
	EXPECT_EQ("Scalene", triangleType(4,5,6));
	EXPECT_EQ("Scalene", triangleType(7,5,6));
	EXPECT_EQ("Scalene", triangleType(7,5,8));
	
	EXPECT_EQ("Isoscelese", triangleType(3,5,3));
	EXPECT_EQ("Isoscelese", triangleType(10,6,6));
	EXPECT_EQ("Isoscelese", triangleType(18,18,30));
	
	EXPECT_EQ("Not triangle", triangleType(1,3,1));
	EXPECT_EQ("Not triangle", triangleType(30,3,5));
	EXPECT_EQ("Not triangle", triangleType(30,3,60));
	
	//testing upper and lower limit
	EXPECT_EQ("Exceed length limitation", triangleType(201,10,15));
	EXPECT_EQ("Exceed length limitation", triangleType(-1, 15, 10));
	
	EXPECT_EQ("Exceed length limitation", triangleType(1, 202, 10));
	EXPECT_EQ("Exceed length limitation", triangleType(1, -1, 10));
	
	EXPECT_EQ("Exceed length limitation", triangleType(9, 10, 1000));
	EXPECT_EQ("Exceed length limitation", triangleType(9, 10, -1));
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
