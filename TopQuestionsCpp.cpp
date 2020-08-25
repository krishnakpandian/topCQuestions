//Answering the Top Asked C/C++ Interview Questions
#include "TopQuestionsCpp.h"
#include <iostream>
//Print the Last k lines in a file
void PrintLastkLines(char* filename, int lines) {
    size_t cnt = 0; 
    char *target_pos = NULL;
  

    target_pos = strrchr(filename, '\n');  
  
    if (target_pos == NULL)  
    {  
        cout << "ERROR: string doesn't contain '\\n' character\n";  
        return;  
    }  

    while (cnt < lines)  
    {  

        while (filename < target_pos && *target_pos != '\n')  
            --target_pos;  
  

        if (*target_pos == '\n')  {
            --target_pos, ++cnt;  
        }
    }  
  
    /* In while loop, target_pos is decremented 2 times,  
    that's why target_pos + 2 */
    if (filename < target_pos)  
        target_pos += 2;  
  
    cout << target_pos << endl;  
}

//Reverse a String: Write code to reverse a string
void reverse(string str) {
    int n = str.length(); 
  

    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]);
}

//Implement a Hash Table and STL map: Compare and Contrast Hash table and an STL map
void hash() {

}

void STL() {

}

//Implement a virtual function: How do virutal functions work
// Implementation of Polymorphism and that allows us to use methods with the same same name between classes
class base { 
public: 
    virtual void print() 
    { 
        cout << "print base class" << endl; 
    } 
  
    void show() 
    { 
        cout << "show base class" << endl; 
    } 
}; 
  
class derived : public base { 
public: 
    void print() 
    { 
        cout << "print derived class" << endl; 
    } 
  
    void show() 
    { 
        cout << "show derived class" << endl; 
    } 
}; 

//Shallow vs Deep Copy: What is the difference between deep copy and shallow copy? How would you use each?
// Shallow Copy just copies the pointer, deep copy creates a new object

//Virtual Base Class: Why does a destructor in base class need to be declared virtual?
// It ensures that the destructor of the inherited classes will be getting called 


