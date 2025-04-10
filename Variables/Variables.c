#include <stdio.h>

int main(){
    // variable = Allocated space in memory to store a value.
    //            Refer to variable's name to accress the stored value.
    //            That variable now behaves as the value it contains
    //            But you need to declare what type of data it is storing
    
    int x;      // declaration for integer
    x = 123;    // initialization
    int y =321; // declaration + initialization

    int age = 18;           // integer
    float gpa = 2.8;        // floating point number used to store decimal numbers
    char grade = 'C';       // Char stores a single character
    char name[] = "Marcus"; // Array of Charcters

    printf("Hello %s",name); // To print variable, you need to add a % for a placeholder and then a format specifier
    printf("You are %d years old",age);

    return 0;
}