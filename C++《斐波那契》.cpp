#include <iostream>
using namespace std; 
int F(int i)
{
	int a1=1,a2=1,a3,N;
	if(N<3) { 
		a1=a2=a3=1;
		}else{a3=a1+a2;}
	return a3;
}
int main()
{
	int a1,a2,a3,N;
	cout << "Please enter a number'N'(N>0):\n";
	cin  >> N;
	for(int i=1;i<=N;i++)
	{
		 {
			a3=F(N); 
		 }
	}
	cout << "F("<<N<<")="<<a3;
  return 0;
}
//改进法二if的简化
#include <iostream>
using namespace std;
int a = 0;
int dg(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return dg(n - 1) + dg(n - 2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<dg(n)<<endl;
    return 0;
}
