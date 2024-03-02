//2023111359 최가윤
//영화 클래스 작성
#include <iostream>
using namespace std;

class Movie {

private:
    string title;
    string director;
    string actors;
    string grade;

public:

    //  
    void setTitle(string t) { title = t; }
    void setDirector(string d) { director = d; }
    void setActors(string a) { actors = a; }
    void setGrade(string g) { grade = g; }


    string getTitle() { return title; }
    string getDirector() { return director; }
    string getActors() { return actors; }
    string getGrade() { return grade; }

};

int main() {
    Movie mv;

    mv.setTitle("Mission Impossible Dead Reckoning, 2023");
    mv.setDirector("Christopher McQuarrie");
    mv.setActors("Tom Cruise");
    mv.setGrade("PG-13");

    cout << mv.getTitle() << endl;
    cout << mv.getDirector() << endl;
    cout << mv.getActors() << endl;
    cout << mv.getGrade() << endl;

    return 0;
}