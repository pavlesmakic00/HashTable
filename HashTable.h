#ifndef DZ_HASHTABLE_H
#define DZ_HASHTABLE_H
#include "Student.h"

class HashTable {

    int b;
    int n;
    int br=0;
    vector<Student>*table;

public:

    HashTable(int nn,int bb);

    bool insertKey(Student s);

    int keyCount();

    int tableSize();

    bool deleteKey(string s);

    void print();

    Student findKey(string s1,string s2);
    double fillRatio();

};


#endif //DZ_HASHTABLE_H
