#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    vector<int> vec(std::istream_iterator<int>(std::cin), std::istream_iterator<int>());

    sort(vec.begin(), vec.end());
    copy(vec.cbegin(), vec.cend(), ostream_iterator<int>(cout, " "));
}
