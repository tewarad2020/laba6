#include <iostream>

/*  change 1.int to double of output and b.
           2.cout << output << output << \n; to cout << "output" << output << "\n"; 
           3.outpot to output and count to cout*/
        
using namespace std;

int main() {
    int a  =  20, b = 30;
    int c = 4; 
    double output;

    output = a - double(b)/c;
    cout << "output: " << output << "\n";
    return 0;
}
