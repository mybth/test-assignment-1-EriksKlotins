//
//  main.cpp
//  citest
//
//  Created by Eriks Klotins on 23/10/2018.
//  Copyright © 2018 Eriks Klotins. All rights reserved.
//

#include <iostream>
#include <fstream>


int main(int argc, const char * argv[])
{
    // insert code here...
    int a=0;
    int sum=0;
    std::ifstream myReadFile;
    std::ofstream output;
    myReadFile.open("./input.txt");
    
    while (myReadFile >> a)
    {
        sum += a;
    }
    myReadFile.close();
    
    
    
    std::cout << sum;
    output.open("output.txt");
    output << sum;
    output.close();
    
    
    
    return 0;
}

