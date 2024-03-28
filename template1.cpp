////we are going to build generic class of the following generic functions
#include<iostream>
using namespace std;
 
template<typename T> //is sy generic class bany gii, agar ye nhi banyn gy to neichcy
//                 //saary functions ki type decide krni ho gii like int sum(int a, int b)
class cal{
	public:		

    int sum(int a, int b){
		return a+b;		
    }

	int sub(int a, int b){
		return a-b;
	}
};

int main(){
	cal <int> obj;
    cout << obj.sum(4,5) << endl;
	cout << obj.sub(9,4);
	
}
//we are going to build generic class of the following generic functions