//
//  main.cpp
//  Sets and maps
//
//  Created by Filip Juristovski on 12/21/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include <set>
#include <cmath>
//#include <utility>
#include <fstream>
#include <map>

#include "bintree.hpp"
#include "Heap.hpp"


using namespace std;

set<int> set_Union(set<int> a, set<int> b){

    set<int> c;
    
    for (set<int>::iterator pos = a.begin(); pos != a.end(); pos++) {
        c.insert(*pos);
    }
    
    for (set<int>::iterator pos = b.begin(); pos != b.end(); pos++) {
        c.insert(*pos);
    }
    
    
    return c;
}

set<int> intersection(set<int> a, set<int> b){
    
    set<int> c;
    
    for (set<int>::iterator pos = a.begin(); pos != a.end(); pos++) {
        
        for (set<int>::iterator bos = b.begin(); bos != b.end(); bos++) {
            
            if (*bos == *pos) {
                c.insert(*pos);
            }
            
        }

        
    }
    
    return c;
}

set<int> sieveofEratosthenes(int n){
    
    set<int> a;
    set<int>::iterator pos = a.begin();

    for (int i = 1; i <= n; i++) {
        a.insert(i);
        if(pos != a.end())
            pos++;
    }
    a.erase(1);
    pos = a.begin();
    while (pos != a.end() && (*pos) < sqrt(n))
    {
    
        int current = *pos;
        
        
        
        for (int i = 2; i < n; i++) {
            a.erase(i*current);
        }
        
        pos++;
        
    }
    return a;
}


void exercise1(){

    multiset<string> words;
    string word;
    
     string file = "/Users/filipjuristovski/Documents/c++ Practice/Sets and maps/Sets and maps/multisettext.txt";
    
    fstream file_data;
    file_data.open(file.c_str());
    
    if (file_data.fail()) {
        cout << "Failed\n";
    }
    
    while (file_data >> word) {
        words.insert(word);
    }
    
    file_data.close();
    
    for (multiset<string>::iterator pos = words.begin(); pos != words.end(); pos++) {
        cout << "The Word \"" << *pos <<  "\" occurs " << words.count(*pos) << " times\n";
    }
    
    

}

void exercise2(){

    map<string, int> words;
    string word;
    
    string file = "/Users/filipjuristovski/Documents/c++ Practice/Sets and maps/Sets and maps/multisettext.txt";
    
    fstream file_data;
    file_data.open(file.c_str());
    
    if (file_data.fail()) {
        cout << "Failed to open\n";
    }
    
    map<string, int>::iterator pos;
    
    while (file_data >> word ) {
        
        pos = words.find(word);
        
        if (pos == words.end()) {
            words[word] = 1;
        } else{
            int key = words[word];
            words[word] = key+1;
        }
    }
    
    for (pos = words.begin(); pos != words.end(); pos++) {
        
        cout << "The Word \"" << pos->first <<  "\" occurs " << pos->second << " times\n";
        
    }

}




                      
int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    cout << (z) << "\n";
    
    set<int> a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(5);
    
    set<int> b;
    b.insert(3);
    b.insert(4);
    b.insert(5);
    
    set<int> c;
    
    
//    c = set_Union(a, b);
//    c = intersection(a, b);
    
    //set<int> d = sieveofEratosthenes(10);
    
    //exercise1();
  //  exercise2();
    
    BinarySearchTree t;
    
    t.insert("D");
    t.insert("B");
    t.insert("A");
    t.insert("C");
    t.insert("F");
    t.insert("E");
    t.insert("I");
    t.insert("G");
    t.insert("H");
    t.insert("J");
    t.erase("A"); // Removing leaf
    t.erase("B"); // Removing element with one child
    t.erase("F"); // Removing element with two children
    t.erase("D"); // Removing root
    t.print();
    cout << t.count("E") << "\n";
    cout << t.count("F") << "\n";
    
    cout << "\nHeap Tasks\n";
    Heap tasks;
    tasks.push(2);
    tasks.push(3);
    tasks.push(2);
    tasks.push(1);
    tasks.push(4);
    tasks.push(9);
    tasks.push(1);
    tasks.push(5);
    while (tasks.size() > 0)
    {
        int task = tasks.top();
        tasks.pop();
        cout << task << "\n";
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
