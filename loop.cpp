#include<iostream>
#include "loop.hpp"

using namespace std;

void Loop::loop()
{
    for(int current_number = m_min; current_number < m_max; current_number++)
    { 
        if(current_number % 3 == 0)
        {
            cout << "foo";
        }
        if(current_number % 5 == 0)
        {
            cout << "baz";
        }
       
        
    }
}