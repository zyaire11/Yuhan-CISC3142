#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <math.h>
#include <algorithm>
using namespace std;

class Film{
    public:
        int year;
        int length;
        string Title;
        string Subject;
        string Actor;
        string Actress;
        string Director;
        int Popularity;
        bool Awards;
        string Image;

        Film(int y, int l, string t, string sub, 
        string acto, string actre, string dir, int po,
         bool aw, string im){
            year = y;
            length = l;
            Title = t;
            Subject = sub;
            Actor = acto;
            Actress = actre;
            Director = dir;
            Popularity = po;
            Awards = aw;
            Image = im;
         }
};

bool Award(string a){
    if(a == "yes"){
        return true;
    }
    return false;
}

int S2i(string a){
    if(a.length() != 0){
        return stoi(a);
    }
    return 0;
}

int main() {
    vector<Film> movie;

    ifstream input("film.csv.txt");
    ofstream output;
    
    string firstLine;
    string secondLine;
    getline(input,firstLine);
    getline(input,secondLine);

    string year1;
    string length1;
    string Title1;    
    string Subject1;
    string Actor1;
    string Actress1;
    string Director1;
    string Popularity1;
    string Awards1;
    string Image1;

    while (input.good()) {
        getline(input,year1,';');
        getline(input,length1,';');
        getline(input,Title1,';');
        getline(input,Subject1,';');
        getline(input,Actor1,';');
        getline(input,Actress1,';');
        getline(input,Director1,';');
        getline(input,Popularity1,';');
        getline(input,Awards1,';');
        getline(input,Image1,'\n');

        int year2 = S2i(year1);
        int length2 = S2i(length1);
        int Popularity2 = S2i(Popularity1);
        bool Awards2 = Award(Awards1);
        Film f(year2,length2,Title1, Subject1,Actor1,
        Actress1, Director1, Popularity2, Awards2, Image1);
        movie.push_back(f);
    } 
    output.open("rank order.txt");
    int sumOfL = 0;
    int sizeOfMovie = movie.size();
    /*for (int i = 0; i < sizeOfMovie; i++)
    {
        sumOfL += movie[i].length;
    }*/
//Question a
    for_each(movie.begin(),movie.end(),[&sumOfL](Film& x){sumOfL += x.length;});

    cout << "Question a\n";
    cout << "The total length of all movies is " << sumOfL << endl;    
    output << "Use sort to rank movies in descending order by popularity\n\n";

//Question b
    sort(movie.begin(), movie.end(), [](const Film& a1, const Film& a2){
        return a1.Popularity > a2.Popularity;
    });

    output << "Popularity       Title\n";
    for (int i = 0; i < sizeOfMovie; i++)
    {
        output << movie[i].Popularity << "              " << movie[i].Title << endl;
    }

    output.close();

//Question c
    //1991;113;High Heels;Comedy;Bos�, Miguel;Abril, Victoria;Almod�var, Pedro;68;No;NicholasCage.png
    cout<< "Question c\n";
    string word = "High Heels"; //the word we wanna find

    vector<Film>::iterator it;

    it = find_if(movie.begin(), movie.end(),
        [&word](const Film& x) { return x.Title == word;});

    if (it != movie.end())
    {
        cout << "Find it\n";
        cout << firstLine << "\n";
        cout << (*it).year << "," << (*it).length << "," << (*it).Title << "," 
        << (*it).Subject << "," << (*it).Actor << "," << (*it).Actress << "," 
        << (*it).Director << "," << (*it).Popularity << "," << (*it).Awards << "," <<(*it).Image<<endl;
    }else{
        cout << "Not find it " << word << " inside\n";
    }

//Question d
    vector<int> yearOfAction;
    vector<int> yearOfComedy;
    for_each(movie.begin(), movie.end(),[&](const Film& x){
        if (x.Subject == "Action"){yearOfAction.push_back(x.year);}
        if (x.Subject == "Comedy"){yearOfComedy.push_back(x.year);}        
    });
    output.open("YEAR OF Action.txt");

    sort(yearOfAction.begin(), yearOfAction.end());   
    auto last = unique(yearOfAction.begin(), yearOfAction.end());
    yearOfAction.erase(last, yearOfAction.end()); 

    sort(yearOfComedy.begin(), yearOfComedy.end());   
    auto last2 = unique(yearOfComedy.begin(), yearOfComedy.end());
    yearOfComedy.erase(last2, yearOfComedy.end());  

    for (const auto& i : yearOfAction) output << i << endl;

    output.close();
    output.open("Year of Comedy.txt");
    for (const auto& i : yearOfComedy) output << i << endl;

    vector<int> yearC; //year cotain both comedy and action

    cout<< "Question d\n";

    if(yearOfComedy == yearOfAction){
        cout << "two lists are equal";
    }else{
        cout << "two lists are not equal\n";
        cout << "The size of the unique year in which an Action movie is released is  " << yearOfAction.size() << endl;
        cout << "The size of the unique year in which an Comedy movie is released is  " << yearOfComedy.size() << endl;
    }

    return 0;
}


/*
output:
Question a
The total length of all movies is 167446
Question c
Find it
Year;Length;Title;Subject;Actor;Actress;Director;Popularity;Awards;*Image
1991,113,High Heels,Comedy,Bos∩┐╜, Miguel,Abril, Victoria,Almod∩┐╜var, Pedro,68,0,NicholasCage.png
Question d
two lists are not equal
The size of the unique year in which an Action movie is released is  47
The size of the unique year in which an Comedy movie is released is  50

*/
