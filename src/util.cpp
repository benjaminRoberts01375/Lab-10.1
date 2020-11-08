/**
 @file: util.cpp
 @brief: Hosts needed functions for the main, such as randomElement, and basic math operations
 @author: Ben Roberts
 @date: 11/08/20
 @credits: cplusplus.com
*/

#include "util.h"

string randomElement(vector<string> doubleTrouble)
{
    int index = rand() % doubleTrouble.size();
    return doubleTrouble[index];
}

double sum (vector<double> nums)
{
    double sum{};
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    return sum;
}

double avg (vector<double> nums)
{
    double retVal = sum(nums);
    retVal /= nums.size();
    return retVal;
}

double lowest (vector<double> nums)
{
    double retVal = nums[0];
    
    for (int i = 1; i < nums.size(); i++) //Start at 1 since 0 is already stored
    {
        if (retVal > nums[i])
        {
            retVal = nums[i];
        }
    }
    return retVal;
}

string camelCase (string& text)
{
    bool foundSpace = false;
    int index = 0;
    
    //Do first word as all lowercase
    for (int i = 0; i < text.size() && !foundSpace; i++)
    {
        if (text.at(i) == ' ')
        {
            foundSpace = true; //Escape the for loop
            index = i;
        }
        else if (isupper(text.at(i)))
        {
            text[i] = tolower(text[i]);
        }
        //Otherwise the char is already lowercase
    }
    
    //All the other words
    for (int i = index; i < text.size(); i++)
    {
        if (text.at(i) == ' ')
        {
            text.erase(text.begin() + i); //http://www.cplusplus.com/reference/string/string/erase/
            text[i] = toupper(text[i]);
        }
        else
        {
            text[i] = tolower(text[i]);
        }
    }
    
    return text;
}
