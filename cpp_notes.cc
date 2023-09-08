/*
CPP notes for myself - learned from various sources
Mostly connected to newer/advanced language features, google cpp guide, etc.
Márton Jakab, 2023
*/

int main(){
    //in case I ever need to run something for testing purposes.


    //heap alloc and dealloc

    int* heap_int = new int {5};

    delete heap_int;

    return 0;
}

//new definition method

int my_int {3};


class MyClass {
    private:
    int my_number;
    bool my_state;
    public:
    MyClass();
    MyClass(int num);
    MyClass(int num, bool state);
};

//initialization lists
MyClass::MyClass() 
    : my_number {1}, my_state {false} 
    {

    }

MyClass::MyClass(int num, bool state) 
    : my_number(num), my_state(state){

    }

//delegating a constructor

MyClass::MyClass(int num)
    : MyClass {num, false} {
        
    }
