using namespace std;

int main(){
 int i,j,n;
 cin>>n;
 int arr[n];
 for(i=0;i<n;i++)
	cin>>arr[i];
 int m,x,c,max,freq;
 cin>>m;
 while(m--){
  cin>>i;
  cin>>j;
  max=1;
  for(x=i;x<j;x++){
    c=1;
    while(arr[x]==arr[x+1]{
    c++;
    x++;
    }
   if(c>=max){
    freq=x;
    max=c;
   }
  }

  cout<<"Most frequent value is"<<arr[freq];
 }

return 0;
}
