/**
@file: main.cpp
@brief: the file which hosts the program
@author: Ben Roberts
@date: 11/08/20
*/

#include <iostream>
#include "util.h"

int main()
{
    srand(time(0)); //Setup randomness
    
    //Choosing a random string
    vector<string> vectorStrings = {"Billy", "Bob", "Joe", "John", "Thorton"};
    cout << "Dumping strings: ";
    for (int i = 0; i < vectorStrings.size(); i++)
    {
        cout << vectorStrings[i] << " ";
    }
    cout << endl;
    cout << "Selecting random element: " << randomElement(vectorStrings) << endl;
    
    cout << endl;
    //Doing math on a vector
    vector<double> vectorDoubles = {0.1, 3.2, 5.45, 21.4, 0.05};
    cout << "Dumping doubles: ";
    for (int i = 0; i < vectorDoubles.size(); i++)
    {
        cout << vectorDoubles[i] << " ";
    }
    cout << endl;
    cout << "Sum of elements: " << sum(vectorDoubles) << endl;
    cout << "Average of elements: " << avg(vectorDoubles) << endl;
    cout << "Lowest element: " << lowest(vectorDoubles) << endl;
    
    cout << endl;
    //String manipulation
    string testString = "A little bird with a yellow bill";
    cout << "Before camelCase: " << testString << endl;
    cout << "After camelCase: " << camelCase(testString) << endl;
    
    cout << endl;
    return 0;
}
