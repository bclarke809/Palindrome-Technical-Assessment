//
//  TestLib.hpp
//  Palindrome TA v2
//
//  Created by Brett Clarke on 12/11/19.
//  Copyright © 2019 Brett Clarke. All rights reserved.
//

#ifndef TestLib_hpp
#define TestLib_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

//Declare External Variables for use in any .cpp file that includeas this header file
extern string input;
extern string input2;
extern int TestNum;
extern int UICheck;

//Declare Functions used in .cpp files
void NewFormat();
void UnitTests();
void TestResults();

#endif /* TestLib_hpp */
