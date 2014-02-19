#include "unity.h"
#include "Coordinate.h"
#include "CustomType.h"
#include "mock_Multiply.h"

void setUp(){}
void tearDown(){}

void test_setCoordinate_should_return_proper_coordinates(){
	Coordinate actualCoor = {0, 0};
	Coordinate expectedCoor = {3, 7};
	
	
	printf("Line number is %d\n", __LINE__);
	
	actualCoor = setCoordinate(3, 7);
	
	//TEST_ASSERT_EQUAL(3, coor.x);
	//TEST_ASSERT_EQUAL(7, coor.y);
	//TEST_ASSERT_EQUAL_Coordinate(expectedCoor, actualCoor);
	
	TEST_ASSERT_EQUAL_Coordinate(expectedCoor, actualCoor);
	
	//assertEqualCoordinate(expectedCoor, actualCoor, __LINE__, NULL);
}

void test_multiplyCoordinate_should_return_proper_multiplied_coordinates(){
	Coordinate coor = {0, 0};
	multiply_ExpectAndReturn(2, 4, 8);
	multiply_ExpectAndReturn(14, 4, 56);
	
	coor = multiplyCoordinate(2, 14, 4);
	
	TEST_ASSERT_EQUAL(8, coor.x);
	TEST_ASSERT_EQUAL(56, coor.y);
}