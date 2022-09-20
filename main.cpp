#include <fstream>

#include "HashTable.h"
using namespace std;

int main() {

    cout << "***1.Formiranje Hash tabele.***" << endl;
    cout << "***2.Pretraga na kljuc.***" << endl;
    cout << "***3.Umetanje kljuca.***" << endl;
    cout << "***4.Brisanje Kljuca.***" << endl;
    cout << "***5.Popunjenost.***" << endl;
    cout << "***6.Ispisivanje tabele***" << endl;
    cout << "***7.Broj umetnutih kljuceva***" << endl;
    cout << "***0.Exit***" << endl;

    int x;
    cout << "Izabrati opciju: " << endl;
    cin >> x;



    HashTable hash(6,2);

    do {

        /*if(x==1) {

            vector<vector<string>> content;
            vector<string> row;
            string line, word;

            fstream file ("C:/Users/smale/Downloads/13S112ASP2_DZ3_2122_materijali/students_5.csv", ios::in);
            if(file.is_open())
            {
                getline(file,line);
                while(getline(file, line))
                {
                    row.clear();

                    stringstream str(line);

                    while(getline(str, word, ','))
                        row.push_back(word);
                    content.push_back(row);

                    Student s(row[0],row[1]);
                    vector<string> help;
                    for(int i=2;i<row.size();i++)
                    {
                        help.push_back(row[i]);
                    }
                    s.setSifra(help);
                    hash.insertKey(s);
                }

            }
            else
                cout<<"Could not open the file\n";

            for(int i=0;i<content.size();i++)
            {
                for(int j=0;j<content[i].size();j++)
                {
                    cout<<content[i][j]<<" ";
                }
                cout<<"\n";
            }



        }*/
        if(x==2){
            string s1;
            string s2;
            cout<<"Uneti indeks:"<<endl;
            cin>>s1;
            cout<<"Uneti ime"<<endl;
            cin>>s2;
            Student stud=hash.findKey(s1,s2);
            cout<<stud.indeks<<", ";
            cout<<stud.ime<<endl;
        }
        else if(x==3){
            cout<<"Uneti indeks:"<<endl;
            string ss1,ss2,ss3;
            vector<string> sss3;
            cin>>ss1;
            cout<<"Uneti ime:"<<endl;
            cin>>ss2;
            cout<<"Uneti sifre predmeta:"<<endl;
            cin>>ss3;
            sss3.push_back(ss3);
            Student tren(ss1,ss2);
            tren.setSifra(sss3);
        }
        else if(x==4){
            cout<<"Uneti indeks za brisanje";
            string brisanje;
            cin>>brisanje;
            hash.deleteKey(brisanje);
        }
        else if(x==5){
            cout<<hash.fillRatio()<<endl;
        }

        else if(x==6)hash.print();

        else if(x==7){
            cout<<hash.keyCount()<<endl;
        }
        cout << "Izabrati opciju: " << endl;
        cin >> x;



    } while (x != 0);


    return 0;
}
