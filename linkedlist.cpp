#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define ha "YES"
#define na "NO"
#define fo(i,a,b) for(int i=a;i<b;i++)
#define arrin int n;cin>>n;vector<int> a(n);for(int i=0;i<n;i++)cin>>a[i];
#define sumarr int sum=0;for(int i=0;i<n;i++)sum+=a[i];
#define forloop for(int i=0;i<n;i++)
#define allr(v) (v).rbegin(),(v).rend()
#define vi vector <int>
#define set_bits __builtin_popcountll
#define mp map<int,int>
#define pb push_back
#define po pop_back
#define int long long
#define endl "\n"
#define F first
#define S second
#define mod 1e9 + 7
#define inf 1e15
class node{
	public:
	   int data;
	   node* next;
	   node(int val){
	   	 data=val;
	   	 next=NULL;
	   }
};
void insertathead(node* &head,int val){
	node* n=new node(val);
	n->next=head;
	head=n;
}
void insertattail(node* &head,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void deleteathead(node* &head){
	node* todelete=head;
	head=head->next;
	delete todelete;
}
void deletion(node* &head,int val){
	if(head==NULL) return;
	if(head->next==NULL){
		deleteathead(head);
		return;
	}
   node* temp=head;
   
   while(temp->next->data!=val){
   	  temp=temp->next;
   }
     node* todelete=temp->next;	
   temp->next=temp->next->next;
 delete todelete;
}
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertathead(head,4);
    deletion(head,3);
    deleteathead(head);
    display(head);
return 0;    
}
