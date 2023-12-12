#include <iostream>
using namespace std;
class publication
{public:
    string title;
    float price;
    void getdata()
    {
        cout << "Enter title and price of publication" << endl;
        cin >> title >> price;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};
//   Create another class sales that holds an array of three float’s so that it can record the sales of a publication for the last three months.
class sales
{public:
    float sales[3];
    void getdata()
    {
        cout << "Enter sales for last three months" << endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> sales[i];
        }
    }
    void display()
    {
        cout << "Sales for last three months" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << sales[i] << endl;
        }
    }
};
//For these two classes, derive a new class called book that holds pages of integer type.
class book : public publication, public sales
{public:
    int pages;
    void getdata()
    {   publication::getdata(), sales::getdata();
        cout << "Enter number of pages" << endl;
        cin >> pages;
    }
    void display()
    {   publication::display(), sales::display();
        cout << "Number of pages: " << pages << endl;
    }
};
int main()
{
    cout << "AARTI SAHOO 16017702022" << endl;
    book b;
    b.getdata();
    cout << "Details of book" << endl;
    b.display();
    return 0;
}
