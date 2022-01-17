#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a, int &b, int &c, int &d){
	int num[4] = {a, b, c, d};
	int i = 0;
    int z[4];
    while(i <= 3){
        z[i] = rand()%4;
        for(int k = 0; k < i;k++){
            if(z[i] == z[k]){
                i--;
                break;
            } 
        }
        i++;
    }
	a = num[z[0]];
	b = num[z[1]];
	c = num[z[2]];
	d = num[z[3]];
}