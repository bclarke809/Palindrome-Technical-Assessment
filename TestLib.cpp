//
//  TestLib.cpp
//  Palindrome TA v2
//
//  Created by Brett Clarke on 12/11/19.
//  Copyright © 2019 Brett Clarke. All rights reserved.
//

#include "TestLib.hpp"
#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

//Function is used to make input lower case, and delete non-alphanumeric characters
void NewFormat()
{
    input2 = input;
    transform(input2.begin(),input2.end(),input2.begin(),::tolower);
    
    input2.erase(remove_if(input2.begin(), input2.end(), [](char c) { return !isalnum(c); } ), input2.end());
}
/*
    UnitTests is a function that will call various pre-made inputs to determine if the
    code is working correctly. To make a new test, add a case with the next number in line
*/
void UnitTests()
{
    switch(TestNum) {
        //Positive Test cases
        case 1 :
            input = "bob";
            break;
        case 2 :
            input = "Otto";
            break;
        case 3 :
            input = "A man a plan a canal panama";
            break;
        case 4 :
            input = "Madam Im Adam";
            break;
        //Negative Test Cases
        case 5 :
            input = "Rob";
            break;
        case 6 :
            input = "Hathan Nossary";
            break;
        case 7 :
            input = "man a plan";
            break;
        case 8 :
            input = "Random Text";
            break;
        //Positive Test Cases with Special Characters
        case 9 :
            input = "Red rum, sir, is murder!!";
            break;
        case 10 :
            input = "Eva, can I see bees in a cave?";
            break;
        case 11 :
            input = "134 streets teerts 431!!!";
            break;
        case 12 :
            input = "Dammit, I'm mad!";
            break;
        //Negative Test Cases with Special Characters
        case 13 :
            input = "12 Cool Looc 2";
            break;
        case 14 :
            input = "Why? You, are wrong!";
            break;
        case 15 :
            input = "Hello? Can I have some? 13";
            break;
        case 16 :
            input = ",,54 Broom 45";
            break;
    }
}

/*
    TestResults are assert functions for each case in UnitTests to determine if the Tests have
    been run correctly
*/
void TestResults()
{
    switch(TestNum) {
        case 1 :
            assert(UICheck == 0);
            break;
        case 2 :
            assert(UICheck == 0);
            break;
        case 3 :
            assert(UICheck == 0);
            break;
        case 4 :
            assert(UICheck == 0);
            break;
        case 5 :
            assert(UICheck == 1);
            break;
        case 6 :
            assert(UICheck == 1);
            break;
        case 7 :
            assert(UICheck == 1);
            break;
        case 8 :
            assert(UICheck == 1);
            break;
        case 9 :
            assert(UICheck == 0);
            break;
        case 10 :
            assert(UICheck == 0);
            break;
        case 11 :
            assert(UICheck == 0);
            break;
        case 12 :
            assert(UICheck == 0);
            break;
        case 13 :
            assert(UICheck == 1);
            break;
        case 14 :
            assert(UICheck == 1);
            break;
        case 15 :
            assert(UICheck == 1);
            break;
        case 16 :
            assert(UICheck == 1);
            break;
    }
}

