#include<stdio.h>
long long int count_dig(long long int n){
	long long int count=0;
	while(n!=0){
		count++;
		n/=10;
	}return count;
}
long long int fast_pow(long long int n,long long int p){
	long long int temp;
	if(p==0)return 1;
	temp=fast_pow(n,p/2);
	if(n%2==0){
		return temp*temp;
	}else{
		return n*temp*temp;
	}
}
int amstr(long long int n){
	long long int ans=0,num=n,digits=count_dig(num);
	while(n!=0){
		ans+=fast_pow(n%10,digits);
		n/=10;
	}
	if(num==ans)
	   return 1;
	return 0;
}
int main(){
	long long int n;
	scanf("%d",&n);
	if(amstr(n)){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}
