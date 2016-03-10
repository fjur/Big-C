//
//  main.cpp
//  List
//
//  Created by Filip Juristovski on 12/13/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include <string>
#include <list>
#include <ctime>

//#include "list.hpp"
#include "listNumbers.hpp"

#include "listselectionsort.hpp"

using namespace std;

void exercise1(list<string>& names){
    
    cout << "Deleteing Shoes \n";
    list<string>::iterator poser;
    poser = names.begin();
    while (poser != names.end()) {
        cout << "poser is erasing " << *poser << "\n";
        poser = names.erase(poser);
        cout << "Poser points 1 at " << *poser << "\n";
        poser ++;
    }

}

void exercise2(list<int>& a){

    
    selectionSort(a);
}

void rand_seed(){
    
    int seed = static_cast<int>(time(0));
    srand(seed);
}

int randomer(int a, int b){

    return a + rand()%(b-a + 1);
    
}

void sortinglist(ListNum& a){

    IteratorNum iter;
    iter = a.begin();
    //sort them
    int min;
    IteratorNum iter2;
    
    for (iter = a.begin();  !(iter.equals(a.end())); iter.next()) {
        
        iter = a.begin();
        
        while (!iter.equals(a.end())) {
            iter2 = iter;
            min = iter.get();
            iter2.next();
            if (min > iter2.get()) {
                //swap values
                cout << "it is less \n";
                iter = a.erase(iter);
                a.insert(iter, min);
            }
            iter.next();
        }
        
        
    }
    
}

void checker(ListNum& a){

    ListNum names = a;
    IteratorNum check;

    cout << "Doing check\n";
    
    IteratorNum end = names.end();
    for (check = names.begin(); !check.equals(end); check.next()) {
        cout << "value : " << check.get() << "\n";
    }

}

void exercise22(){

    ListNum names;
    names.push_back(4);
    names.push_back(1);
    names.push_back(29);
    names.push_back(17);
    names.push_back(3);
    names.push_back(93);
    names.push_back(18);
    names.push_back(102);
    
    IteratorNum iter = names.begin();
    IteratorNum iter2 = iter;
    IteratorNum iterMin;
    IteratorNum iterHold;
    bool swapped = false;
    
    iterHold = names.begin();
    
    for(iter = names.begin(); !iter.equals(names.end());)
    {
        
        iterMin = iter;
        
        
        //check next values
        for (iter2 = iter; !iter2.equals(names.end()); iter2.next())
        {
            //compare values
            if (iter2.get() < iterMin.get())
            {
               iterMin = iter2;
            }
        }
        
        //swap values here
        if(iterMin.get() < iter.get())
        {
            cout << "Inserting first element \n";
            names.insert(iter, iterMin.get());
            checker(names);
            
            cout << "Inserting second element \n";
            names.insert(iterMin, iter.get());
            checker(names);
            
            cout << "Erasing first element \n";
            iter = names.erase(iter);
            checker(names);
            
            cout << "Erasing second element \n";
            iterMin = names.erase(iterMin);
            checker(names);
            swapped  = true;
        }
        
        if (swapped == false) {
            iter.next();
        }
        
        swapped = false;
    }
    checker(names);
}


void exercise3(){

    ListNum list1;
    ListNum list2;
    ListNum list3;
    
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);
 
    
    list2.push_back(2);
    list2.push_back(4);
    list2.push_back(6);
    list2.push_back(7);
    list2.push_back(8);
    list2.push_back(9);
    
    IteratorNum  iter1 = list1.begin();
    IteratorNum  iter2 = list2.begin();
    IteratorNum  iter3 = list3.begin();
    
    bool chooser = true;
    bool first = true;
    
    checker(list3);

    
    while (!iter1.equals(list1.end()) && !iter2.equals(list2.end())) {
        
        
        if (chooser) {
            list3.insert(iter3, iter1.get());
            iter1.next();
            chooser = false;
        } else {
            list3.insert(iter3, iter2.get());
            iter2.next();
            chooser = true;
        }
        
        checker(list3);

        
//        if (first) {
//            iter3 = list3.begin();
//            first = false;
//        }
//        
//        iter3.next();
        
        }

    while (!iter1.equals(list1.end())) {
        list3.insert(iter3, iter1.get());
        iter1.next();
        //iter3.next();
        checker(list3);

    }
    
    while(!iter2.equals(list2.end())){
        list3.insert(iter3, iter2.get());
        iter2.next();
        //iter3.next();
        checker(list3);

    }

    checker(list3);
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    list<string> puta;
    list<string>::iterator pos;
    
    puta.push_back("Conor ");
    puta.push_back("Mcgregor ");
    puta.push_back("aldo ");
    puta.push_back("shoes ");
    
    pos = puta.begin();
    
    while (pos != puta.end()) {
        cout << *pos;
        pos++;
    }
    
    list<string> names;
    list<string>::iterator p = names.begin();
    names.insert(p, "Tom");
    p = names.begin();
    names.insert(p, "Dick");
    p++;
    names.insert(p, "Harry");
    for (p = names.begin(); p != names.end(); p++)
        cout << *p << "\n";
    
    exercise1(puta);
    
    pos = puta.begin();
    
    while (pos != puta.end()) {
        cout << *pos;
        pos++;
    }
    
    list<int> numbas;
    for (int i =0; i < 10; i++) {
        numbas.push_back(randomer(0, 15));
    }
//    cout << "Cout is " << 4%3;
    
   // exercise2(numbas);
    cout << "\n";
   // exercise22();
    
    exercise3();
    
    //exercise 4
    
    ListNum exer4;
    for (int i =0; i < 4; i++) {
        exer4.push_back(randomer(0, 15));
    }
    
    checker(exer4);
    exer4.reverse();
    checker(exer4);
    
    //exercise 5
    
    ListNum exer5;
    ListNum exer55;
    
    exer5.push_back(1);
    exer5.push_back(2);
    exer5.push_back(3);
    
    checker(exer5);
    
    exer55.push_back(4);
    exer55.push_back(5);
    exer55.push_back(6);
    
    exer5.swap(exer55);
    
    checker(exer5);
    checker(exer55);


    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
