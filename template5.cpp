
#include<iostream>
#include<string>
using namespace std;

int my_max(int a , int b){
	if(a>b){
		return a;
	}
	else if(b>a) {
		return b;
	}
}

int main(){
	cout << my_max(5,7);
}
 

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//double my_max(double a , double b){
//	if(a>b){
//		return a;
//	}
//	else if(b>a) {
//		return b;
//	}
//}
//int main(){
//	cout << my_max(2.5,5.7);
//}

//same function with different datatype
//which would decide on runtime where to check binary way or another
//overload the function
//or build the template
//#include<iostream>
//#include<string>
//using namespace std;
//template <class T> // t is a generic type, it'll treate the value as they are when u give them on runtime
//
//// template <typename T> // another way to write same thing
//
//
//T my_max(T a , T b){
//	if(a>b){
//		return a;
//	}
//	else if(b>a) {
//		return b;
//	}
//}
//int main(){
//	cout << my_max(2.5,5.7) <<endl;
//	cout << my_max(5,3) << endl;
//	cout << my_max('a', 'b') << endl;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//template <class T> // t is a generic type, it'll treate the value as they are when u give them on runtime
//
//// template <typename T> // another way to write same thing
////upcast, downcast, or
//
//T my_max(T a , T b){
//	if(a>b){
//		return a;
//	}
//	else if(b>a) {
//		return b;
//	}
//}
//int main(){
//	cout << my_max(2.5,5.7) <<endl;
//	cout << my_max(5,3) << endl;
//	cout << my_max('a', 'b') << endl;
//}