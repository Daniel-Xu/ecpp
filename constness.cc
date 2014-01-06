#include <iostream>
using namespace std;
class TextBlock{
    public:
        const char& operator[](size_t position) const {
            return text[position];
        }

        char& operator[](size_t position) {
            return text[position];
        }
        
        TextBlock(const string a ) {
            text = a;
        }
    private:
        string text;
};

int main(int argc, char const *argv[])
{
    
    TextBlock tb("hello");
    cout << tb[0] << endl;
    tb[0] = 'x';
    cout << tb[0] << endl;

    const TextBlock ctb("world");
    cout << ctb[0] << endl;
    //this will throw an error
    //ctb[0] = 'y';
    //cout << ctb[0] << endl;

    return 0;
}
