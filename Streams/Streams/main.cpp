//
//  main.cpp
//  Streams
//
//  Created by Filip Juristovski on 12/9/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

void exercise1 (){

    std::string file_name = "/Users/filipjuristovski/Documents/c++ Practice/Streams/Streams/hello.txt";
    std::fstream file_data;
    file_data.open(file_name.c_str());//("hello.txt");
    if(file_data.fail())
        std::cout << "Error opening file: \n";
    std::string outputText = "Hello, world \n";
    file_data << outputText;
    file_data.close();
    
    std::string inputText;
    file_data.open(file_name.c_str());
    //file_data >> inputText; //used for one word
    std::getline(file_data, inputText);
    std::cout << "input text is: " << inputText << "\n";
    file_data.close();
    //try writing to file only opened for reading
    //
    //    std::ifstream file_read;
    //    file_read.open(file_name.c_str());
    //    if(file_read.fail())
    //        std::cout << "Failed MotherFucka";
    //    //file_read <<  outputText; //error here
    //
    //
    
    file_data.open(file_name.c_str());
    if(file_data.fail())
        std::cout << "Error opening file: \n";
    file_data.seekp(0, std::ios::beg);
    file_data << "John " << "John 1 "  << "John 2 "  << "John 3 "  << "John 3 ";
    
    file_data.close();
    
    file_data.open(file_name.c_str());
    file_data.seekg(0, std::ios::beg);
    std::getline(file_data, inputText);
    std::cout << "input text is: " << inputText << "\n";
    
}

int countCharFile(std::istream& in){

    in.seekg(0, std::ios::end);
    long endfile = in.tellg();
    
    return static_cast<int>(endfile);
}

int countWords(std::istream& in){
    
    int count = 0;
    std::string word;
    while (in >> word) {
        count+= 1;

    }
    
    return count;
}

int lineCount(std::istream& in){
    
    int count = 0;
    std::string line;
    
    while(getline(in, line)){
          count++;
    }
    return count;
}

void exercise2(){
    
//    
//    std::cout << "Please enter a file name";
//    std::string inText;
//    std::cin >> inText;
//    
//    std::fstream file_data;
//    file_data.open(inText.c_str());
//    if (file_data.fail()) {
//        std::cout << "Sorry File Failed To Open";
//    }
    
    
    std::string file_name = "/Users/filipjuristovski/Documents/c++ Practice/Streams/Streams/chill.txt";
    std::fstream file_data;
    file_data.open(file_name.c_str());//("hello.txt");
    if(file_data.fail())
        std::cout << "Error opening file: \n";
    int count = countCharFile(file_data); //really redundant, instead just
    std::cout <<"Count of characters: " <<  count << "\n";
    
    file_data.close();
    
    file_data.open(file_name.c_str());//("hello.txt");
    
    //get words
    count = countWords(file_data);
    std::cout <<"Count of Words: " <<  count << "\n";

    file_data.close();
    
    file_data.open(file_name.c_str());//("hello.txt");
    
    count = lineCount(file_data);
    std::cout <<"Count of Lines: " <<  count << "\n";
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //exercise1();
    
    exercise2();
    
    std::cout << "Hello, World We Are All Done Here!\n";
    return 0;
}
