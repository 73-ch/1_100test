#include <iostream>
#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace std;
using R = boost::multiprecision::number<boost::multiprecision::cpp_dec_float<1024>>;

int main(int argc, const char * argv[]) {
    R a = 1000;
    a /= 998001;
    cout << a.str().substr(2,300) << endl;
    
    return 0;
}
