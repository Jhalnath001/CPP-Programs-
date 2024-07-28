#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title;
    
    Book(string t) {
	title=t;
	}
    
    void print(){
        cout << "Title: " << title << std::endl;
    }
};
void modifyByValue(Book b) {
    b.title = "Modified by Value";
}

void modifyByReference(Book &b) {
    b.title = "Modified by Reference";
}

void modifyByPointer(Book *b) {
    b->title = "Modified by Pointer";
}

int main() {
    Book myBook("Original title");
    
    // Print initial title
    myBook.print();
    
    // Pass by value
    modifyByValue(myBook);
    myBook.print();
    
    // Pass by reference
    modifyByReference(myBook);
    myBook.print();
    
    // Pass by pointer
    modifyByPointer(&myBook);
    myBook.print();
    
    return 0;
}
//What will be the output of the program after calling each function and why?//
