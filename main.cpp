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
    // std::ofstream output;
    // std::cout << "Bombastic!\n" << argc << argv[1] << "\n";
    myReadFile.open(argv[1]);
    
    while (myReadFile >> a)
    {
        sum += a;
    }
    myReadFile.close();
    
    
    
//    std::cout << sum;
    // output.open("output.txt");
    std::cout << sum << "\n";
    // output.close();
    
    // I have made a change!!
    
    return 0;
}

