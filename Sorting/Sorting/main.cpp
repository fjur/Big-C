//
//  main.cpp
//  Sorting
//
//  Created by Filip Juristovski on 12/11/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include "selectionsort.hpp"
#include <ctime>
#include <fstream>
#include <iomanip>
#include <sstream>

#include "person.hpp"
#include "mergesort.hpp"
#include "BinarySearch.hpp"


const int NEWLINE_LENGTH = 1;
const int RECORD_SIZE = 30 + 10 + NEWLINE_LENGTH;
const int VECTOR_SIZE = 10;

using namespace std;

void rand_seed()
{
    int seed = static_cast<int>(time(0));
    srand(seed);
}

int rand_int(int a, int b)
{
    return a + rand() % (b - a + 1);
}

void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "\n";
}

void phone_gen(vector<Person*>& a){
    
    cout << "Numbers generated \n";
    
    a[0] = new Person("Mike", 6044219901);
    a[1] = new Person("John" , 6041929402);
    a[2] = new Person("Ted"  , 6044211234);
    a[3] = new Person("Stern", 6044211233);
    a[4] = new Person("fred ", 6044211111);
    a[5] = new Person("ben  ", 6049999999);
    a[6] = new Person("timmy", 6044211113);
    a[7] = new Person("lowe ", 6044210908);
    a[8] = new Person("Glenn", 6044217112);
    a[9] = new Person("Danny", 6044211112);
    
    
}

void write_file(fstream& phonefile, string phone, vector<Person*> v){
    
    
    phonefile.open(phone.c_str());
    
    if(phonefile.fail()){
        cout << "Couldn't open file! \n";
        return;
    }
    
    for (int i = 0; i < v.size(); i++) {
        //phonefile << v[i];
        phonefile << v[i]->get_name() << setw(10 + (30-v[i]->get_name().length())) << v[i]->get_number() << "\n";
    }
    
    phonefile.close();
    
    
}

long convertToLong(string st){

    istringstream instr(st);
    long number;
    instr >> number;
    return number;
}

void read_file(vector<Person*>& v, fstream& fs, string fsname){

    fs.open(fsname.c_str());
    if(fs.fail())
        cout << "Couldn't open file \n";
    
    string line;
    string name;
    string numberst;
    long number;
    
    for (int i = 0; i < v.size(); i++) {
        
        fs.seekg(i*RECORD_SIZE, ios::beg);
        getline(fs,line);
        name = line.substr(0, 30);
        numberst = line.substr(30,10);
        number = convertToLong(numberst);
        v[i] = new Person(name, number);
    }
    

}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double x = 10000;
    double y = 1000;
    double x1 = (1.0/2.0)*pow(x,2.0)+(5.0/2.0)*x-3.0;
    double y1 = ((1/2.0)*pow(y, 2.0)+(5/2.0)*y-3.0);
    
    double z= x1/y1;
    
    std::cout << "Solution for x = " << x << " and y = " << y << " is : " << z << "\n";
    
    std::cout << pow(2,2000)/pow(2, 1000) << "\n\n";
    
    rand_seed();
    vector<int> v(3);
    for (int i = 0; i < v.size(); i++)
        v[i] = rand_int(1, 100);
    cout << " \n Unsorted vector: \n";
    print(v);
    selection_sort(v);
    cout << "\n sorted vector: \n";
    print(v);
    
    //telephone exercise
    //generate random names and numbers
    
    fstream phone_file;
    string phone = "/Users/filipjuristovski/Documents/c++ Practice/Sorting/Sorting/phonebook.txt";
    
    vector<Person*> people(10);
    
    
   
    
    phone_gen(people);
    
    write_file(phone_file, phone, people);
    
    vector<Person*> a(10);
    
    read_file(a, phone_file, phone);
    
    mergeSort(a, 0, a.size()-1.0);
    
    for (int i =0; i < a.size(); i++) {
        a[i]->print();
    }
    
    int value;

    value = binarySearch(a, 0, a.size()-1, 6044219901);
    
    if(value != -1)
    {
        cout << "Found the Number at Index: " << value << "\n";
        a[value]->print();

    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
