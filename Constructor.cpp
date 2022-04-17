// Implementation of Constructor Overloading...
#include <iostream>
#include <string>
using namespace std;
class Constructor
{
    public:           // Data members
        int height;
        int weight;
        string name;
    public:
        Constructor()   // Default Constructor
        {
            height = 0; weight = 0; name = "none";
            cout << "First Constructor called !!" << endl;
        }
        Constructor(string n)     // Parametrized Constructor with one parameter
        {
            height = 0; weight = 0; name = n;
            cout << "Second Constructor called !!" << endl;
        }
        Constructor(int h, int w, string n)   // Parametrized Constructor with all three parameters
        {
            height = h; weight = w; name = n;
            cout << "Third Constructor called !!" << endl;
        }
};
int main()
{
    Constructor object;
    // Constructor object1("Vishu");
    // Constructor object2(30, 34, "Anand");
    return 0;
}