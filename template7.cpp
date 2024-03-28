#include<iostream>
using namespace std;

template <class T, int size>
class array{
    private:
        T arr[size];
    
    public:
        T& print (int index){
            return arr[index];
        }
};

int main(){
    array <int, 3> obj;

    for (int i = 0; i<3; i++){
        obj.print(i) = i + 2;
    }
    cout << "array’s elements:\t";

    for (int i = 0; i < 3; i++) {
       cout << obj.print(i) << " ";
    }

cout << endl;

}
