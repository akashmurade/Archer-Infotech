/*
// Create the class student and input/display the info of two students.
#include <iostream>
using namespace std;

class Student 
{
    private:
    char nm[40];
    int rno, age;
    float per;

    public:
    void input()
    {
        cout << "\nEnter Student name: ";
        cin >> nm;

        cout << "\nEnter Roll Number, Age and Percentage: ";
        cin >> rno >> age >> per;
    }
    void display()
    {
        cout << "\nStudent Name: " << nm << "\nRoll No: " << rno << "\nAge: " << age << "\nPercentage: " << per << " %" << endl;
    }
};

int main()
{
    Student s1, s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();
    return 0;
}

// Passing the arguments to member functions.
#include <iostream>
#include <string.h>
using namespace std;

class Student 
{
    private:
    char nm[40];
    int rno, age;
    float per;

    public:
    void input()
    {
        cout << "\nEnter Student name: ";
        cin >> nm;

        cout << "\nEnter Roll Number, Age and Percentage: ";
        cin >> rno >> age >> per;
    }

    // argument to member function
    void input(char inm[], int irno, int iage, float iper)
    {
        strcpy(nm, inm);
        rno = irno;
        age = iage;
        per = iper;
    }

    void display()
    {
        cout << "\nStudent Name: " << nm << "\nRoll No: " << rno << "\nAge: " << age << "\nPercentage: " << per << " %" << endl;
    }
};

int main()
{
    Student s1, s2;
    s1.input();
    s2.input("Akash", 14, 20, 80);
    s1.display();
    s2.display();
    return 0;
}

// Defining member function outside of class
#include <iostream>
using namespace std;

class Student 
{
    private:
    char nm[40];
    int rno, age;
    float per;

    public:
    void input();
    void display();
};

void Student::input()
{
    cout << "\nEnter Student name: ";
    cin >> nm;

    cout << "\nEnter Roll Number, Age and Percentage: ";
    cin >> rno >> age >> per;
}
void Student::display()
{
    cout << "\nStudent Name: " << nm << "\nRoll No: " << rno << "\nAge: " << age << "\nPercentage: " << per << " %" << endl;
}

int main()
{
    Student s1, s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();
    return 0;
}

// Array of objects
#include <iostream>
using namespace std;

class Student 
{
    private:
    char nm[40];
    int rno, age;
    float per;

    public:
    void input()
    {
        cout << "\nEnter Student name: ";
        cin >> nm;

        cout << "\nEnter Roll Number, Age and Percentage: ";
        cin >> rno >> age >> per;
    }
    void display()
    {
        cout << "\nStudent Name: " << nm << "\nRoll No: " << rno << "\nAge: " << age << "\nPercentage: " << per << " %" << endl;
    }
};

int main()
{
    Student s[2];
    
    // Input
    for(int i = 0; i < 2; i++) {
        s[i].input();
    }

    // Display
    for(int i = 0; i < 2; i++) {
        s[i].display();
    }

    return 0;
}

// pointer to objects
#include <iostream>
using namespace std;

class Student 
{
    private:
    char nm[40];
    int rno, age;
    float per;

    public:
    void input()
    {
        cout << "\nEnter Student name: ";
        cin >> nm;

        cout << "\nEnter Roll Number, Age and Percentage: ";
        cin >> rno >> age >> per;
    }
    void display()
    {
        cout << "\nStudent Name: " << nm << "\nRoll No: " << rno << "\nAge: " << age << "\nPercentage: " << per << " %" << endl;
    }
};

int main()
{
    int cnt;
    cout << "\nEnter number of students: ";
    cin >> cnt;
    
    Student *s = new Student[cnt];

    // Input
    for(int i = 0; i < cnt; i++) {
        s[i].input();
    }

    // Display
    for(int i = 0; i < cnt; i++) {
        s[i].display();
    }

    return 0;
}


// Returning data from member function
// Enter the item code and price and display the list and total
*/
#include <iostream>
using namespace std;

class Item
{
    private:
    int icode;
    float iprice;

    public:
    void indata()
    {
        cout << "\n Enter Item Code and Price: \n";
        cin >> icode >> iprice;
    }
    void outdata()
    {
        cout << "\n\nItem Code: " << icode << "\nItem Price: " << iprice;
    }
    float getprice()
    {
        return iprice;
    }
};

int main()
{
    int cnt;
    float total = 0;
    cout << "\nEnter item count: ";
    cin >> cnt;

    Item *it = new Item[cnt];

    cout << "\nInput Item info for " << cnt << " items: \n";
    for(int i = 0; i < cnt; i++) {
        it[i].indata();
    }

    cout << "\nItem Details:";
    for(int i = 0; i < cnt; i++) {
        it[i].outdata();
        // total calculation
        total += it[i].getprice();
    }

    cout << "\nTotal: " << total;

    return 0;
}


