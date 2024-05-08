#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <typeinfo>
#include <algorithm>
#include <fstream>
#include <cmath>
using namespace std;
class Member{
    public:
        int yearOfBirth;
        vector<Member*> listofMember;
        virtual void describe() = 0;
        bool operator<(Member& member) {
            return false;
        }
};

class Participant : public Member{
    private:
        string name;
        string field;
    public:
        Participant(string name, int yearOfBirth, string field) : name(name), field(field){
            this->yearOfBirth = yearOfBirth;
        }
        void describe(){
            cout << "Participant" << " - " << "Name: " << name << " - " << "yearOfBirth: " << this->yearOfBirth << " - " << "Field: " << field << endl;
        }
};

class Mentor : public Member{
    private:
        string name;
        string subject;
    public:
        Mentor(string name, int yearOfBirth, string subject) : name(name), subject(subject){
            this->yearOfBirth = yearOfBirth;
        }
        void describe(){
            cout << "Mentor" << " - " << "Name: " << name << " - " << "yearOfBirth: " << yearOfBirth << " - " << "Subject: " << subject << endl;
        }
};

class Coordinator : public Member{
    private:
        string name;
        int yearOfBirth;
        string division;
    public:
        Coordinator(string name, int yearOfBirth, string division) : name(name), division(division){
            this->yearOfBirth = yearOfBirth;
        }
        void describe(){
            cout << "Coordinator" << " - " << "Name: " << name << " - " << "yearOfBirth: " << yearOfBirth << " - " << "Division: " << division << endl;
        }
};

class Society{
    private:
        string name;
        vector<Member*> listofMember;
    public:
        Society(string name) : name(name){}
        void addMember(Member* member){
            listofMember.push_back(member);
        }
        void describe(){
            cout << "Society name: " <<name << endl;
            for (int i = 0; i < listofMember.size(); i++){
                listofMember[i]->describe();
            }
        }
        int countCoordinator(){
            int num = 0;
            for (int i = 0; i < listofMember.size(); i++){
                if (typeid(*listofMember[i]) == typeid(Coordinator)){
                    num++;
                }
            }
            return num;
        }
        vector<Member*> sortbyYearofBirth() {
        vector<Member*> sortedMember = listofMember;
        sort(sortedMember.begin(), sortedMember.end(), [](Member* a, Member* b) {
            return a->yearOfBirth < b->yearOfBirth;
            });
        return sortedMember;
    }

    int averageMentorYearofBirth() {
        int sumYearofBirth = 0;
        int count = 0;
        for (Member* member : listofMember) {
            Mentor* mentor = dynamic_cast<Mentor*>(member);
            if (mentor != nullptr) {
                count++;
                sumYearofBirth += mentor->yearOfBirth;
            }
        }
        if (count > 0)
            return sumYearofBirth / count;
        else
            return 0;
    }

};
        
            


int main(){
    Participant participant ("Alice", 1995 , "Art") ;
    participant . describe () ;

    Mentor mentor1 ("Bob", 1980 , "Math") ;
    mentor1.describe();

    Mentor mentor2 (" Carol ", 1970 , "Science");
    mentor2.describe();

    Coordinator coordinator1 ("David", 1985 , "Events") ;
    coordinator1.describe();
    Coordinator coordinator2 ("Thomas", 1980 , "Logistics") ;
    coordinator2.describe();

    Society society ("Society1") ;
    society.addMember(&participant);
    society.addMember(&mentor1);
    society.addMember(&mentor2);
    society.addMember(&coordinator1);
    society.addMember(&coordinator2);

    society.describe();
    int numberOfCoordinators = society.countCoordinator() ;
    cout << "Number of Coordinators : " << numberOfCoordinators << endl ;

    society.describe();
    int  aveMentorYearOfBirth = society.averageMentorYearofBirth();
    cout << "Average year of birth ( Mentors ): " << aveMentorYearOfBirth << endl ;
    return 0;
}
