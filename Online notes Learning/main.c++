#include <iostream>
using namespace std;

int g;

int main()
{
    int a, b;

    a = 10;
    b = 20;
    g = a + b;
    cout << g;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    if (a < 20)
    {
        cout << "a is less then 20" << endl;
    }
    else
    {
        cout << "Value of a is  : " << a << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    char grade = 'A';
    switch (grade)
    {
    case 'A':
        cout << "Outstanding" << endl;
        break;
    case 'B':
        cout << "Very Good Score" << endl;
        break;
    case 'C':
        cout << "Good Score" << endl;
        break;
    case 'D':
        cout << "Average Score" << endl;
        break;
    default:
        cout << "You are Fail";
    }
    cout << "Your Grade is " << grade << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int x = 100;
    int y = 200;

    if (x == 100)
    {
        if (y == 200)
        {
            cout << "Value of x is 100 and y is 200" << endl;
        }
    }

    cout << "Exact value of x is : " << x << endl;
    cout << "Exact value of y is : " << y << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int x = 100;
    int y = 200;

    switch (x)
    {
    case 100:
        cout << "This is part of outer switch" << endl;
        switch (y)
        {
        case 200:
            cout << "This is part of inner switch" << endl;
        }
    }
    cout << "Exact value of x is " << x << endl;
    cout << "Exact value of y is " << y << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){

    int i = 0;
    while(i < 100000){
        if(i==4){
            break;
        }
        cout << "I am Sniper" << endl;
        i++;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    string vehicles[4] = {"car", "scooter", "cycle", "bike"};
    vehicles[0] = "airplane";
    cout << vehicles[0];
    return 0;
}

#include <iostream>
using namespace std;

// function declaration
int max(int num1, int num2);

int main(){
    int a = 500;
    int b = 300;
    int outputs;
    outputs = max(a, b);
    cout << "Max value is : " << outputs << endl;
    return 0;

}

int max(int num1 , int num2){
    int result;

    if(num1> num2)
        result = num1;
    else
        result = num2;
    return result;
}

#include <iostream>

void func1(void);
static int count = 10;

main()
{
    while (count--)
    {
        func1();
    }
    return 0;
}

// Function defination
void func1(void)
{
    static int i = 5;
    i++;
    std::cout << "i" << i;
    std::cout << " and count is " << count << std::endl;
}

#include <iostream>
int count ;
extern void write_extern();

main() {
    count = 5;
    write_extern();
}

#include <iostream>

extern int count;

void write_extern(void) {
    std :: cout << "Count is " << count << std::endl;
}

Structure
#include <iostream>
#include <cstring>

using namespace std;

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Books Book1;
    struct Books Book2;

    // This is for Book1
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Mr.Prince");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 3456465;

    // This is for Book2
    strcpy(Book2.title, "Learn C Programming");
    strcpy(Book2.author, "Mr.Prince");
    strcpy(Book2.subject, "C Programming");
    Book2.book_id = 34543435;

    // Print Book1 info
    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;

    // Print Book2 info
    cout << "Book 2 title : " << Book2.title << endl;
    cout << "Book 2 author : " << Book2.author << endl;
    cout << "Book 2 subject : " << Book2.subject << endl;
    cout << "Book 2 id : " << Book2.book_id << endl;
    return 0;
}

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
};

int main()
{
    // Create an object of Car
    Car carObj1;
    carObj1.brand = "BMW";

    // Create another object of Car
    Car carObj2;
    carObj2.brand = "Ford";

    // Print attribute values
    cout << carObj1.brand << "\n";
    cout << carObj2.brand << "\n";
    return 0;
}

#include <iostream>
using namespace std;

class MyClass {
    public:
        void myMethod();
};

void MyClass :: myMethod(){
    cout << "Hello User !";
}

int main(){
    MyClass myObj;
    myObj.myMethod();
    return 0;
}

#include <iostream>
using namespace std;

class Fir_Class {
    public :
        Fir_Class() {
            cout << "Hello Constructor User";
        }
};

int main() {
    Fir_Class myObj;
    return 0;
}

#include <iostream>
using namespace std;

class Employee {
    private :
        string name;

    // Setter
    public :
    void setName(string s) {
        name = s;
    }
    // Getter
    string getName() {
        return name;
    }
};

int main() {
    Employee myObj;
    myObj.setName("Bob");
    cout << myObj.getName();
    return 0;
}

#include <iostream>
using namespace std;

class Vehicle {
    public :
        string brand = "ford";
        void sound() {
            cout << "horn\n";
        }
};

class Car : public Vehicle {
    public :
        string model  = "Mustang";
};

int main(){
    Car myCar;
    myCar.sound();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}

#include <iostream>
using namespace std;

class Animal {
    public:
        void sound(){
            cout << "The animal make a sound \n";
        }
};

class Pig : public Animal {
    public :
        void sound() {
            cout << "The Pig says : wee wee \n";
        }
};

class Dog : public Animal {
    public :
        void sound() {
            cout << "The Dog says : bow bow \n";
        }
};

int main(){
    Animal animal;
    Pig myPig;
    Dog myDog;

    animal.sound();
    myPig.sound();
    myDog.sound();
    return 0;
}

Creating and Writting
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "I am Contnet of this file";

    // Close the file
    MyFile.close();
}

Reading
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string myText;
    ifstream MyReadFile("filename.txt");
    while(getline (MyReadFile, myText)) {
        cout << myText;
    }
    MyReadFile.close();
}

#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age = 10;
        if (age >= 20)
        {
            cout << "You are old enough";
        }
        else
        {
            throw 505;
        }
    }
    catch (int num)
    {
        cout << "Access Denied \n";
        cout << "Error number : " << num;
    }
}


// Dynamic Memory Management
#include <memory>
shared_ptr<int> x; // Empty shared_ptr to a integer on heap. Uses reference counting for cleaning up objects.
x = make_shared<int>(12);  // Allocate value 12 on heap
shared_ptr<int> y = x;  // Copy shared_ptr, implicit changes reference count to 2.
cout << *y;
if(y.get() == x.get()) {
    cout << "Same";
}
y.reset();
if(y.get() != x.get()){  // Eliminate one owner of objects
    cout  << "Different";
}
if(y == nullptr){      // Can compare against nullptr (here returns true)
    cout << "Empty";
}

y = make_shared<int>(15); // Assign new value
cout  << *y;              // De reference x to print '15'
cout << *x;               // De reference x to print '12'
weak_ptr<int> w;          // Create empty weak pointer
w = y;                    // w has weak reference to y

if (shared_ptr<int> x = w.lock()){    // Has to be copied into a shared_ptr before usage.
    cout << *s;
}

unique_ptr<int> z;      // Create empty unique pointers
unique_ptr<int> q;
z = make_unique<int>(16); // Allocate int (16)  on heap. Only one reference allowed

q = move(z);
if(z == nullptr){
    cout << "Z null";
}
cout << *q;
shared_ptr<B> r;
r = dynamic_pointer_cast<B>(t);  // Converts t to a shared_ptr<B>