#include <bits/stdc++.h>
using namespace std;

struct list{
    int value;
    int *next;
    int *pre;
}arr[100000];

int main()
{
    int N,head=1;
    cin>>N;
    for(int i=1;i<=N;i++){
        arr[i].value=i;
        arr[i].next=NULL;
        arr[i].pre=NULL;
    }
    int k,p;
    for(int i=2;i<=N;i++){
        cin>>k>>p;
        if(p){
            arr[k].next=arr[i];
            arr[i].pre=arr[k];
        }else{
            if(k==head) head=i;
            arr[k].pre=arr[i];
            arr[i].next=arr[k];
        }
    }
    bool flag[N]{1};
    int n,tmp;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        flag[tmp]=0;
    }
    for(;flag[head];){
        if(arr[head].next==NULL)    break;
        if(flag[head]){
            cout<<head<<" ";
            head=arr[head].next.value;
        }else{
            head=arr[head].next.value;
        }
    }
    system("pause");
	return 0;
}
