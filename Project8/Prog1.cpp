#include <iostream>


void counting_function() {
    static int count = 0;
    ++count;
    std::cout << "call of the function counting_function(): " << count << std::endl;
}

 void run_prog1(){

     for (int i = 0; i < 15; ++i) {
         counting_function();
     }

}