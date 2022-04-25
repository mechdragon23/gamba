#include <iostream>
#include <random>
#include <string>

#include "myHeader.h"

random_device device;
mt19937 generator(device());
uniform_int_distribution<int> distribution(0,3);

vector<int> spin()
{   
    vector<int> outcome;
    for (int i=0; i < 4; i++)
    {
    outcome.push_back(distribution(generator));
    }
    return outcome;  
   
}

void check_Results(vector<int> results)
{
    bool outcome;
    if((results[0] == results[1]) && (results[1] == results[2]))
    {outcome = true;}

    else
    {outcome =  false;}

    if (outcome)
    {cout << "You Won!\n"; }

    else
    {cout << "You Loose\n";}
}

