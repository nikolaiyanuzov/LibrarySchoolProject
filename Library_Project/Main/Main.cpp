#include <iostream>
#include<string>
#include "../Project1/library.h"

int main()

{
    Library lib;
    std::cout << "Enter library name: ";
    std::getline(std::cin, lib.name);
    std::cout << "Enter number of books: ";
    std::cin >> lib.count;
    std::cin.ignore(); // clear leftover newline
    lib.books = new Book[lib.count];
    for (int i = 0; i < lib.count; i++) 
    {
        std::cout << "\n--- Book " << i + 1 << " ---\n";
        std::cout << "Title: ";
        std::getline(std::cin, lib.books[i].title);
        std::cout << "Author: ";
        std::getline(std::cin, lib.books[i].author);
        std::cout << "Year: ";
        std::cin >> lib.books[i].year;
        std::cout << "Price: ";
        std::cin >> lib.books[i].price;
        std::cin.ignore(); // clear newline for next getline
    }

    std::cout << "\n===== Library Info =====\n";

    PrintLibrary(lib);

    std::cout << "Average price: " << AvgBookPrice(lib) << "\n\n";

    Book oldest = OldestBookInLib(lib);
    std::cout << "Oldest book:\n";
    PrintBook(oldest);
    delete[] lib.books;

}

