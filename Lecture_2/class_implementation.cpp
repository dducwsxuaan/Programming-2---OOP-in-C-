#include<iostream>
#include<string>

using namespace std;

class Cat{
    public:
        string name;
        string color;
        int age;
};

class Book{
    public:
        string author;
        string title;
        string genre;
        double price;
        string date;
        string publisher;
        string description;
};
int main(){
    // create an object of Cat
    Cat aConcreteCat;

    // access attributes and set values
    aConcreteCat.name = "Calico";
    // aConcreteCat.color = "black, white, and brown";
    // aConcreteCat.age = 2;

    // // print attribute values
    // cout << aConcreteCat.name << endl;
    // cout << aConcreteCat.color << endl;
    // cout << aConcreteCat.age <<endl;

    // Create object of Book
    Book textBook;

    // access attributes and set values
    textBook.author = "Surbhi KaKar";
    textBook.title = "Java Programming";
    textBook.genre = "Computer";
    textBook.price = 30.0;
    textBook.date = "2010-08-01";
    textBook.publisher = "Dream Tech Press";
    textBook.description = "A description here.";

    // print attribute values
    cout << textBook.author << endl;
    cout << textBook.title << endl;
    cout << textBook.genre << endl;
    cout << textBook.price << endl;
    cout << textBook.date << endl;
    cout << textBook.publisher << endl;
    cout << textBook.description << endl;

    return 0;
}