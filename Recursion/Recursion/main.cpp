//
//  main.cpp
//  Recursion
//
//  Created by Filip Juristovski on 12/9/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>




using namespace std;

 int fibcount = 0;

/**
 Generates all permutations of the characters in a string. @param word a string
 @return a vector that is filled with all permutations
 of the word
 */
vector<string> generate_permutations(string word)
{
    vector<string> result;
    if (word.length() <= 1)
    {
        result.push_back(word);
        return result;
    }
    for (int i = 0; i < word.length(); i++)
    {
        string word1 =word.substr(0, i);
        string word2 =word.substr(i + 1);
        string shorter_word = word1 + word2;
       
        vector<string> shorter_permutations
        = generate_permutations(shorter_word);
        for (int j = 0; j < shorter_permutations.size(); j++)
        {
            string longer_word = word[i] + shorter_permutations[j];
            result.push_back(longer_word);
        }
    }
    return result;
}

void exercise1(){

    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    vector<string> v = generate_permutations(input);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << "\n";
    
}

int squarer(int x, int n){
    if(n ==1)
        return x;
    else return squarer(x, n-1)*x;
}

int powah( int n){
    if(n ==1)
        return 1;
    else return n*powah(n-1);
}

int fib(int n)
{
    fibcount++;
    cout << "Entering fib: n = " << n << "\n";
    int f;
    if (n <= 2) f = 1;
    else f = fib(n - 1) + fib(n - 2);
    cout << "Exiting fib: n = " << n
    << " return value = " << f << "\n";
    return f;
}

string reverse_string(string st){
    
    string hold;
    if(st.length() == 1)
        return st;
    else
    {
         hold =  reverse_string(st.substr(1,st.length())) + st.at(0);
    
    }
    
    return hold;
}

//string reverser(string sub, int start, int end){
//    
// 
//}

int array_max(vector<int> a){
    
    if(a.size() == 1)
        return a[0];
    else
    {
        int max = a.back();
        a.pop_back();
        int b = array_max(a);
        return max > b ? max : b;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
//
//    cout << "Value is: " << squarer(3, 3) << "\n";
//    cout << "Powah is: " << powah(4) << "\n";
//    cout << "Fib is: " << fib(4) << "\n";
//    cout << "Fib Count: " << fibcount << "\n";

    string josh = reverse_string("jon");
    cout << "string is :" << josh << "\n";
    
    vector<int> a;
    a.push_back(3);
    a.push_back(25);
    a.push_back(5);
    a.push_back(17);
    
    cout << "Max is :" << array_max(a) << "\n";
    
    std::cout << "Hello, World!\n";
    return 0;
}
