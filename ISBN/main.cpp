#include <iostream>

using namespace std;

string setCheckDigit(string);

int main()
{
    string isbn = "978014300723";
    string isbnWithCheckDigit = setCheckDigit(isbn);
    //printing of ISBN
    for(int i=0;i<13;i++)
    {
        std::cout<<isbnWithCheckDigit.at(i);
    }
    return 0;
}
//function that adds check digit to isbn
string setCheckDigit(string isbn)
{
    int sum = 0;

    for(int i=0;i<12;i++)
    {
        int digit = isbn[i] - '0';
        sum += digit * (i%2 == 0 ? 1 : 3);
    }
    sum %= 10;
    sum = 10 - sum;
    isbn+=sum+'0';
    return isbn;
}
