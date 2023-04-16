#include <iostream>

void testCase(){
	std::string binary, gray = "1";
	std::cin >> binary;
	gray[0] = binary[0];
	for(int i = 1; i < (int)binary.size(); i++){
		if(binary[i] == binary[i - 1]) gray += '0';
		else gray += "1";
	}
	std::cout << gray << std::endl;
}

int main(){
	int t; std::cin >> t;
	while(t--) testCase();
}