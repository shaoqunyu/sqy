#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int i,j,H,W;
	char ch;
	int flag;
	cin>>H>>W>>ch>>flag;
	if (flag == 0) { 
		for(i=0;i<H;i++){
			for(j=0;j<W;j++){
				if(i==0||i==H-1||j==0||j==W-1)cout<<ch;
				else
				    cout<<' ';
			}
			cout<<endl;
		}
		return 0;
	}
	else{
		for(i=0;i<H;i++){
			for(j=0;j<W;j++){
				cout<<ch;
			}
			cout<<endl;
		}
	    return 0;
	}
}
