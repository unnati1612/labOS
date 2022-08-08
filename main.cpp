
#include <iostream>
using namespace std;
int bubble(int a[],int n){
  int i,j,c=0;
  for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        c++;
      if(a[j]>a[j+1]){
         swap(a[j+1],a[j]);
      }
    }
  }
  return c;
}

int main() {
  int n;
  cin>>n;
  int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
int c=bubble(a,n);
cout<<"Sorted Array: ";
for(int i=0;i<n;i++){
cout<<a[i]<<" ";

}
cout<<endl<<"Comparisons: "<<c;

}