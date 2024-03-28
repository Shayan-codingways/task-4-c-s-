#include<iostream>
using namespace std;

template<typename  T>  //T is like int and double
class cal{
	public:
		T sum(T a, T b){
			return a+b;
		}
		T sub(T a, T b){
			return a-b;
		}
};
int main(){
	cal<int> obj;
    cout << obj.sum(5,8) << endl;

	cal<double> obj1;
	cout << obj1.sub(9.5,4.3);
	
}