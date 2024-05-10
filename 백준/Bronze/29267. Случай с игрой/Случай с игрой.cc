#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main(){
	fastio;
	int n, k;  
	std::cin >> n >> k;
	
	std::cin.ignore();
	int ammo = 0;  
	int save = 0;  
	
	for(int i = 1; i <= n; ++i){
		std::string act;
		std::cin >> act;
		
		if(act.compare("save") == 0){  
			save = ammo;
		}
		else if(act.compare("load") == 0){  
			ammo = save;
		}
		else if(act.compare("shoot") == 0){   
			if(ammo >= 1){
				ammo -= 1;
			}
		}
		else{  
			ammo += k;
		}
		std::cout << ammo << '\n';
	}
}