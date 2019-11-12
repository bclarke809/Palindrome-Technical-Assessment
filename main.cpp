//
//  main.cpp
//  Palindrome Technical Assessment
//
//  Created by Brett Clarke on 11/11/19.
//  Copyright © 2019 Brett Clarke. All rights reserved.
//

#include <iostream>
#include <string>
#include <assert.h>
#include "TestLib.hpp"
using namespace std;

//Declare Variables and Functions
string input = "";
string input2 = "";
string RunType = "";
int i = 0;
int UICheck;
int TestNum = 1;
void Palindrome_Unit_Tests();
void Palindrome_Input();

int main()
{
    //Begin run with either unit test or custom input
    cout << "Would you like to run Unit Tests (U), or enter Custom Value (C)? (U/C) \n";
    getline(cin, RunType);
    
    //Run Function for custom value verification if user selects "C"
    if(RunType == "C"){
        cout << "Enter a word or sentence: \n";
        getline(cin, input);
        Palindrome_Input();
    }
    //Run Function for Unit Tests is user selects "U"
    else if(RunType == "U"){
        Palindrome_Unit_Tests();
    }
    //If user selects any other value, program will throw eror and close
    else{
        cout << "Invalid Command! \n";
    }
    return 0;
}

void Palindrome_Unit_Tests()
{
    //Cycle through all Unit Tests in while loop (if new Unit tests are added, increase number for loop)
    while(TestNum <= 16){
        
        // Call Function to Run Unit Tests
        UnitTests();
        
        //Run Function for Palindrome check on each unit test
        Palindrome_Input();
        
        // Run Function for Assert Result Testing
        TestResults();
        
        //Increase Test Num for next unit test, and reset variable i
        TestNum++;
        i = 0;
    }
}

void Palindrome_Input(){
    
    // Disregard non-alphanumeric characters and make all letters lower case
    NewFormat();
    
    // Find string length
    long n = input2.length();
    
    // Check each character with opposite character in string
    while((input2[i] == input2[n-1-i]) && i < n/2){
        i++;
    }
    
    // Print Result
    if(i >= n/2){
        cout << input << " IS a palindrome \n\n";
        UICheck = 0;
    }
    else{
        cout << input << " IS NOT a palindrome \n\n";
        UICheck = 1;
    }
}


