#include<iostream>     //MAIN POINT....auto class ko detect nhi kr pata......................................//
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> num = {2, 3, 45, 6};  /// IS COMPILOR MN MASLA HY BHAIIIIIII
    /// is ko sort krny kaliay sort function ko call krty

    sort(num.begin(), num.end(), [ ](int a, int b){return a>b;});

    for(int i: num){
	    cout << i <<endl;
    }

}
