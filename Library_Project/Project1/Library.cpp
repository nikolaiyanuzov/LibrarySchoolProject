#include "library.h"
#include <iostream>
#include <string>
Book CreateBook(const std::string title, const std::string author, int year, double price){
    return Book{ title, author, year, price };
}
void PrintBook(const Book& book) {
    std::cout << "Title:  " << book.title << "\n" << "Author: " << book.author << "\n" << "Year:   " << book.year << "\n" << "Price:  " << book.price << "\n\n";
}
void PrintBook(const Book&& book) {
    std::cout << "Title:  " << book.title << "\n" << "Author: " << book.author << "\n" << "Year:   " << book.year << "\n" << "Price:  " << book.price << "\n\n";
}
void PrintLibrary(const Library& lib) {
    std::cout << "Library: " << lib.name << "\n\n";

    for (int i = 0; i < lib.count; i++) {
        PrintBook(lib.books[i]);
    }
}
double AvgBookPrice(const Library& lib) 
{
    double total = 0.0;

    for (int i = 0; i < lib.count; i++) {
        total += lib.books[i].price;
    }

    return (lib.count > 0) ? total / lib.count : 0.0;
}
Book OldestBookInLib(const Library& lib) {
    Book oldest = lib.books[0];

    for (int i = 1; i < lib.count; i++) {
        if (lib.books[i].year < oldest.year) {
            oldest = lib.books[i];
        }
    }

    return oldest;
}