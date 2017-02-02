//
//  Controller.cpp
//  Stringz
//
//  Created by Osborne, Jacob on 2/2/17.
//  Copyright © 2017 Osborne, Jacob. All rights reserved.
//

#include <iostream>
#include "Controller.h"

using namespace std;

Controller :: Controller()
{
    
    
}

void Controller :: start()
{
    
}

/*
 Test out the methods that use numbers on strings in C++.
 */

void Controller :: numberMethods()
{
    int count = derpy.size();
    cout << "the number of letters in the derpy variable is: " << cout << endl;
    cout << "so the size() method of string works like the length() method of java on String" << endl;
    
    string temp = derpy.substr(3);
    cout << temp <<endl;
}



