#include <iostream>
#include <string>

void exchange(int &v1, int &v2) {
	int temp = v1;
	v1 = v2;
	v2 = temp;	
}

int foo () {
	int i;
	return i;
}

int main(int argc, char **argv) {
	int var1 = 1;
	int var2 = 2;	
    std::cout << "var1: " << var1 << std::endl;		//1
    std::cout << "var2: " << var2 << std::endl;		//2
	
	std::cout << "exchange" << std::endl;
	exchange(var1, var2);
	
    std::cout << "var1: " << var1 << std::endl;		//2
    std::cout << "var2: " << var2 << std::endl;		//1
	std::cout << std::endl;
	
	
	// Reference not initialized -> like uninitialized variable (see 'automaticInitializationOfVariables.cpp')
	var1 = 1;
	int var3;
    std::cout << "var1: " << var1 << std::endl;		//1
    std::cout << "var3: " << var3 << std::endl;		//garbage
	std::cout << "exchange" << std::endl;
	exchange(var1, var3);	
    std::cout << "var1: " << var1 << std::endl;		//1
    std::cout << "var3: " << var3 << std::endl;		//garbage
	std::cout << std::endl;
	
	
	// Was passiert bei: int x = 100; int& y = x; y = 200
	int x = 100;
	int& y = x;
	std::cout << "x:   " << x << std::endl;			//100
	std::cout << "y:   " << y << std::endl;			//100
	std::cout << "y = 200" << std::endl;
	y = 200;	
	std::cout << "x:   " << x << std::endl;			//200
	std::cout << "y:   " << y << std::endl;			//200
	
    return 0;
}



