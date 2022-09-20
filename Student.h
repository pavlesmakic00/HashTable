#ifndef DZ_STUDENT_H
#define DZ_STUDENT_H
#include <iostream>
#include <string>
#include <vector>

#include <sstream>

using namespace std;

class Student {

    vector<string>sifra;
    friend class HashTable;

public:

    Student(string a,string b);

    void setSifra(const vector<string> &sifra);

    string indeks;
    string ime;
};


#endif //DZ_STUDENT_H
