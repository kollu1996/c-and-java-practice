#include <iostream>
#include <map>
#include <iterator>
#include<stdio.h>
 
using namespace std;
 
int main()
{
    map <int, int> gquiz1;        // empty map container
 
    // insert elements in random order
    gquiz1.insert(pair <int, int> (1, 40));
    gquiz1.insert(pair <int, int> (2, 30));
    gquiz1.insert(pair <int, int> (3, 60));
    gquiz1.insert(pair <int, int> (4, 20));
    gquiz1.insert(pair <int, int> (5, 50));
    gquiz1.insert(pair <int, int> (6, 50)); 
    gquiz1.insert(pair <int, int> (7, 10));
 
    // printing map gquiz1
    map <int, int> :: iterator itr;
    printf("The map gquiz1 is : \n");
    printf("\tKEY\tELEMENT\n");
    for (itr = gquiz1.begin(); itr != gquiz1.end(); itr++)
    {
        printf(" '\t' itr->first\n"); 
        printf(" '\t' itr->second '\n'");
    }
  }
