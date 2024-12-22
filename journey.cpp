#include <iostream>
using namespace std;

int main(){
   
long n , a, b, c; 
cin>>n>>a>>b>>c;

long totalPerDay = a+b+c; 

long total = 0;
int day = 0;

while(total + totalPerDay <= n ){
  total+=totalPerDay;
  day+=3;
}


if(total < n){
  total+=a;
  day++;
}
if(total < n){
  total+=b;
  day++;
}

if(total < n){
  total+=c;
  day++;
}


cout<<day;

return 0;  

}