/*#include "HashTable.h"
#include <cmath>
#include <sstream>
HashTable::HashTable(int nn, int bb) {

    n=nn;
    b=bb;

    table=new vector<Student>[n];

}

bool HashTable::insertKey(Student s) {

    int d=pow(2,this->b);
    stringstream g(s.indeks);
    int q = 0;
    g >> q;
    int index=q%d;
    if(index>=n)return false;
    if(table[index].size()<this->b) {
        table[index].push_back(s);
        br++;
        return true;
    }

    return false;
}

void HashTable::print() {
    for (int i = 0; i < n; i++) {
        cout << i<<" ";
        vector<Student>::iterator ptr;
        if(this->table[i].size()>0) {
            for (ptr = this->table[i].begin(); ptr < this->table[i].end(); ptr++)
                if(ptr->indeks=="DELETE")cout<<"DELETE";
                else {
                    cout << ptr->indeks << " "<<ptr->ime;
                    vector<string>::iterator p;
                    for(p=ptr->sifra.begin();p<ptr->sifra.end();p++){
                        cout<<" "<<*p;
                    }
                    cout<<", ";
                }

        }
        else cout<<"EMPTY";
        cout << endl;
    }
}

int HashTable::keyCount() {
    return br;
}

int HashTable::tableSize() {
    return 0;
}

bool HashTable::deleteKey(string s) {
    int d = pow(2, this->b);
    stringstream g(s);
    int q = 0;
    g >> q;
    int index = q % d;
    if (index >= n)return false;

    for (int i = 0; i < n; i++) {
        vector<Student>::iterator ptr;
        if (this->table[i].size() > 0) {
            for (ptr = this->table[i].begin(); ptr < this->table[i].end(); ptr++)
                if(ptr->indeks==s){
                    ptr->indeks="DELETED";
                    ptr->ime="";
                    ptr->sifra.clear();
                }
        }

    }

}

Student HashTable::findKey(string s1,string s2) {

    int d = pow(2, this->b);
    stringstream g(s1);
    int q = 0;
    g >> q;
    int index = q % d;
    if (index >= n)return Student(0,0);

    for (int i = 0; i < n; i++) {
        vector<Student>::iterator ptr;
        if (this->table[i].size() > 0) {
            for (ptr = this->table[i].begin(); ptr < this->table[i].end(); ptr++)
                if(ptr->indeks==s1){
                    if(ptr->ime==s2)return *ptr;
                }
        }
    }


}

double HashTable::fillRatio() {
    return br/(n*b);
}
*/