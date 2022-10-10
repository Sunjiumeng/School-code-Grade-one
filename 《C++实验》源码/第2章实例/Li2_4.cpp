//程序Li2_4.cpp
//引用的说明和用法
#include <iostream>
using namespace std;
int main()
{
  int num(5);
  int &refv=num;
  cout<<"num="<<num <<','<<"refv="<<refv<<endl;
  num+=5;
  cout<<"num="<<num <<','<<"refv="<<refv<<endl;
  refv+=8;
  cout<<"num="<<num <<','<<"refv="<<refv<<endl;
  return 0;
 }
