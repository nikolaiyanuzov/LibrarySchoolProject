#pragma once
#include <iostream>

struct Book 
{
    std::string title;
    std::string author;
    int year;
    double price;
};

struct Library {
    std::string name;
    Book* books;
    int count;
};


Book CreateBook(const std::string title, const std::string author, int year, double price);

void PrintBook(const Book&& book);

void PrintBook(const Book& book);

void PrintLibrary(const Library& lib);

double AvgBookPrice(const Library& lib);

Book OldestBookInLib(const Library& lib);