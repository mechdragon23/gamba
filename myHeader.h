#ifndef MY_HEADER
#define MY_HEADER

#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
#include <vector> // used for slots
#include <unistd.h> //used for dice

using namespace std;

//adding slots prototype
vector<int> spin();
void check_Results(vector<int> results);

//dice prototype
int roll_dice(int number);

#endif