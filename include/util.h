/**
@file: util.h
@brief: Holds definitions for functions in util.cpp
@author: Ben Roberts
@date: 11/08/20
*/

#ifndef util_h
#define util_h

#include <vector>
#include <string>

using namespace std;

/**
 @Name: randomElement
 @Brief: Takes in a double vector to return a random element from that vector
 @Date 11/8/2020
 @Author: Ben Roberts
 @param doubleTrouble : A vector of strings to choose from randomly
 */
string randomElement(vector<string> doubleTrouble);

/**
 @Name sum
 @Brief: Adds all values of a vector together
 @Date 11/8/2020
 @Author: Ben Roberts
 @param nums : Vector of elements to add together
 */
double sum (vector<double> nums);

/**
 @Name avg
 @Brief: Takes the average of a double vector
 @Date 11/8/2020
 @Author: Ben Roberts
 @param nums : Vector of elements to take the average of
 */
double avg (vector<double> nums);

/**
 @Name lowest
 @Brief: Takes the lowest element of a double vector
 @Date 11/8/2020
 @Author: Ben Roberts
 @param nums : Vector of elements to take the lowest from
 */
double lowest (vector<double> nums);

/**
 @Name camelCase
 @Brief: Converts a string to camelCase
 @Date 11/8/2020
 @Author: Ben Roberts
 @param text : Text to convert to camelCase
 */
string camelCase (string text);
#endif /* util_h */
