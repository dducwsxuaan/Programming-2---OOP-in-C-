#include <iostream>
using namespace std;
class ID {
    private:
        int id;
    public:
        ID(int id) : id(id){};
        void describe(){
            cout << id << endl;
        }
};

class Student {
    private:
        string name;
        // 1)int id;
        // 2,3) ID id;
        // 4) ID *id;
        ID &id;
    public:
        // 1) Student(string name, int id){
        //     this->name = name;
        //     this->id = id;
        // }
        // void describe(){
        //     cout << name << " : " << id << endl;
        // }

        // 2) Student (string name, ID id) : name(name), id(id){};
        // void describe(){
        //     cout << name << "-" << endl;
        //     id.describe();
        // }

        // 3) Student (string name, int id) : name(name), id(id){};
        // void describe(){
        //     cout << name << " - ";
        //     id.describe();
        // }

        // 4) Student (string name, ID* id) : name(name), id(id){};
        // void describe() {
        //     cout << name << endl;
        //     id->describe();
        // }

        Student (string name, ID& id) : name(name), id(id){};
        void describe(){
            cout << name << endl;
            id.describe();
        }
};

int main(){
    // 1) Student student1("Peter", 10422085);
    //    student1.describe();

    // 2) ID id2(10422085);
    //    Student student2("Peter", id2);
    //    student2.describe();

    // 3) ID id3(10422085);
    //    Student student3("Peter", id3);
    //    student3.describe();

    // 4) ID* ptrToId = new ID(10422085);
    //    Student student4("Peter", ptrToId);
    //    student4.describe();
    //    delete ptrToId;

    ID id5(10422085);
    Student student5 ("Peter", id5);
    student5.describe();
    return 0;
}