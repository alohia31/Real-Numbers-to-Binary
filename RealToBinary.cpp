//
//  main.cpp
//  Binary
//
//  Created by Aman Lohia on 2014-07-21.
//  Copyright (c) 2014 Aman Lohia. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void binary(int num, int biArr[])
{
    for (int i=10; i>=0; i--) {
        biArr[i]=num%2;
        num /= 2;
    }
    
}

int main()
{
    int num, biArr[10]={0};
    cout<<"Please input number? \n";
    cin>>num;
    
    binary(num, biArr);
    
    int i=0;
    
    while (biArr[i]!=1) {
        i++;
    }
    
    for(; i<=10;)
    {
        cout<<biArr[i];
        i++;
    }
    cout<<"\n";
}

