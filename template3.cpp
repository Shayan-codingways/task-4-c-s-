#include<iostream>     //MAIN POINT....auto class ko detect nhi kr pata......................................//

using namespace std;
   template<typename T , typename Z>  //T is like int and double

		T math_operation(T a, T b, Z op){ //Z op is a function name op with type t ::it's an anonymys function
		                                  // and 2 variables a, b with T
			return op(a, b);
		}
	auto sum = [](auto a, auto b){               //ananymys function syntax like this
			return a+b;
		};
	auto sub = [](auto a, auto b){               //ananymys function syntax like this
			return a-b;
		};

int main(){
	cout << math_operation(4.5,5.8, sum) << endl;
	cout << math_operation(9,4, sub);
}