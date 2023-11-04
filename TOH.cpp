#include<iostream>
using namespace std;
/*
void TOH(int n, char Sour, char Aux, char Des){
	if(n == 1){
		cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
		return;
	}
	TOH(n-1, Sour, Des, Aux);
	cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
	TOH(n-1, Aux, Sour, Des);

}

int main(){
	int n;
	cout<<"Enter no. of disks: ";
	cin>>n;
	
	TOH(n,'A','B','C');
}
*/
int towerOfHanoiMoves(int n) {
    if(n == 1){
        return 1;
    }
    
    return 2 * towerOfHanoiMoves(n-1) + 1;
}

int main() {
    int n;
    cin >> n;

    int moves = towerOfHanoiMoves(n);
    cout <<  moves ;

    return 0;
}
