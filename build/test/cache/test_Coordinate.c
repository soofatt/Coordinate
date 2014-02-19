#include "unity.h"
#include "mock_Multiply.h"
#include "CustomType.h"
#include "Coordinate.h"


void setUp(){}

void tearDown(){}



void test_setCoordinate_should_return_proper_coordinates(){

 Coordinate actualCoor = {0, 0};

 Coordinate expectedCoor = {3, 7};





 printf("Line number is %d\n", 14);



 actualCoor = setCoordinate(3, 7);











 assertEqualCoordinate(expectedCoor, actualCoor, 22, ((void *)0));;





}



void test_multiplyCoordinate_should_return_proper_multiplied_coordinates(){

 Coordinate coor = {0, 0};

 multiply_CMockExpectAndReturn(29, 2, 4, 8);

 multiply_CMockExpectAndReturn(30, 14, 4, 56);



 coor = multiplyCoordinate(2, 14, 4);



 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((coor.x)), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((56)), (_U_SINT)((coor.y)), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

}
