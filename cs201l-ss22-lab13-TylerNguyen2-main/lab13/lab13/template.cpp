#include "template.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;







void mySwap(int myInts[100], int position1, int position2)
{
    int temp = myInts[position1];
    myInts[position1] = myInts[position2];
    myInts[position2] = temp;
}

void mySwapDouble(double myInts[100], int position1, int position2)
{
    double temp = myInts[position1];
    myInts[position1] = myInts[position2];
    myInts[position2] = temp;
}

void mySwapString(string myInts[100], int position1, int position2)
{
    string temp = myInts[position1];
    myInts[position1] = myInts[position2];
    myInts[position2] = temp;
}

int myMin(int myInts[100])
{
    int lowest_num = myInts[0];
    for (int i = 1; i < 100; i++)
    {
        if (lowest_num > myInts[i])
        {
            lowest_num = myInts[i];
        }
    }
    return lowest_num;
}

int myMax(int myInts[100])
{
    int highest_num = myInts[0];
    for (int i = 1; i < 100; i++)
    {
        if (highest_num < myInts[i])
        {
            highest_num = myInts[i];
        }
    }
    return highest_num;
}

int mySearch(int myInts[100], int integer_find)
{
    for (int i = 0; i < 100; i++)
    {
        if (myInts[i] == integer_find)
        {
            return i;
        }
    }
    return -1;
}


double myMinDouble(double myInts[100])
{
    double lowest_num = myInts[0];
    for (int i = 1; i < 100; i++)
    {
        if (lowest_num > myInts[i])
        {
            lowest_num = myInts[i];
        }
    }
    return lowest_num;
}

double myMaxDouble(double myInts[100])
{
    double highest_num = myInts[0];
    for (int i = 1; i < 100; i++)
    {
        if (highest_num < myInts[i])
        {
            highest_num = myInts[i];
        }
    }
    return highest_num;
}

int mySearchDouble(double myInts[100], double integer_find)
{
    for (int i = 0; i < 100; i++)
    {
        if (myInts[i] == integer_find)
        {
            return i;
        }
    }
    return -1;
}


string myMinString(string myInts[100])
{
    string lowest_num = myInts[0];
    for (int i = 1; i < 100; i++)
    {
        if (lowest_num > myInts[i])
        {
            lowest_num = myInts[i];
        }
    }
    return lowest_num;
}

string myMaxString(string myInts[100])
{
    string highest_num = myInts[0];
    for (int i = 1; i < 100; i++)
    {
        if (highest_num < myInts[i])
        {
            highest_num = myInts[i];
        }
    }
    return highest_num;
}

int mySearchString(string myInts[100], string string_find)
{
    for (int i = 0; i < 100; i++)
    {
        if (myInts[i] == string_find)
        {
            return i;
        }
    }
    return -1;
}
