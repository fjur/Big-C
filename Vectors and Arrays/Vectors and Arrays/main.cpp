//
//  main.cpp
//  Vectors and Arrays
//
//  Created by Filip Juristovski on 11/30/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>


using namespace std;

bool predicateVector(vector<int> a, vector<int> b ){
    
    return a==b;

}

void append(vector<int>& a, vector<int>& b){
    for(int i = 0; i< b.size(); i++)
        a.push_back(b[i]);
}

vector<int> merger(vector<int>& a, vector<int>& b){
    
    vector<int> result(a.size()+b.size());
    
    int i =0;
    int j =0;
    int iteration = 0;
    
    int mather = 0;
    
    while(i < a.size() || j < b.size()){
        
       
        if(mather == 0 ){ //do first vector
            if(i < a.size()){
            result[iteration] = a[i];
                i++;
            }
            if (j < b.size()) {
                mather = 1;
            }
        }
        else if(mather == 1){ // do second vector
            if(j < b.size()){
                result[iteration] = b[j];
                j++;
            }
            if (i < a.size()) {
                mather = 0;
            }

        }
        
        iteration++;
        
    }
    
    return result;

}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    string hey = "heyyou";
    cout << hey.substr(0,3) << "\n";
    string john = hey + "";
    cout << john << "\n";
    
    int count = 0;
    
    for (int i = 3 ; i <= 19 ; i+= 2)
        count += 1;
    cout << count << "\n";
    
    if( "ABC" < "abc")
        cout << "yeah\n";
    
    //Exercise 6.2
    vector<int> v(10);
    cout << v[4];
    time_t timev = time(0);
    srand(time(&timev));
    const int MAX_VAL = 100;
    const int MIN_VAL =1;
    
    
    for(int i =0; i< v.size(); i++){
        v[i] = rand()%(MAX_VAL-MIN_VAL)+MIN_VAL;
        cout << i << ":" << v[i] << "\n";
    }
    
    cout << "Size:" << v.size() << "\n";
    
    int highest = v[0];
    int lowest = v[0];
    for( int i = 0; i < v.size(); i++)
    {
        if (v[i] > highest) highest = v[i];
        if (v[i] < lowest) lowest = v[i];
    }
    
    cout << "Highest: " << highest << "\n";
    cout << "lowest: " << lowest << "\n";
    
    vector<int> d(10);
    
    for (int i=0; i<10; i++) {
        d[i] = pow(i+1,2);
        cout << d[i] << "\n";
    }
    
    cout << "reverse now \n";
    cout << "size is:" << d.size() << "\n";
    
    
    for (int i = (d.size() - 1.0); i >= 0 ; i--) {
        cout<< i<< ": " << d[i] << "\n";
    }
    
    vector<int> f (5,3);
    vector<int> a (2,2);
    vector<int> b (2,2);
    f=a;
    //testing to see if vectors are the same with same elements
    if(f==b)
        cout << "HAHAHAHAH";
    cout << "vectors: \n";
    
    //testing values after assignment
    for(int i =0; i< f.size(); i++)
    cout << f[i] << "\n";
    
    //b.erase(b.begin(), b.end());
    
    cout << "size of b:" << b.size();
    
    cout << "\n";
    
    //cout << pow(-1,0);
    
    vector<int> m = {5,6,7,8,9};
    vector<int> n = {1,2,3,4};
    
    //append(n, m);
    vector<int> x = merger(n, m);
    
    for (int i =0; i< x.size(); i++) {
        cout << x[i];
    }
    
    
    
    bool ya = predicateVector(a, b);
    cout << "\n Ya is: " << ya << "\n";
    std::cout << "\n Hello, World!\n";
    return 0;
}
