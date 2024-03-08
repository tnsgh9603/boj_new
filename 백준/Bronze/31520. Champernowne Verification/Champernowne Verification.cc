#include <iostream>
int main(){
	std::string str;
	std::cin >> str;
	for(int idx = 0; idx < str.length(); ++idx){
		if(str.at(idx) - '0' != idx + 1){
			std::cout << "-1";
			return 0;
		}
	}	
	std::cout << str.length();
}