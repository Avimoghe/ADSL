#include<iostream>
using namespace std;
class bt{
    public:
     char data;
     bt *l;
     bt *r;

     bt(char d){
        
        data=d;
        l=NULL;
        r=NULL;
     }
};
int height (bt *root){

    if(root==NULL){return 0;}
    if(root->l==NULL && root->r==NULL){return 0;}
    int hl,hr;
    hl=height(root->l);
    hr=height(root->r);
    if(hl>hr){return hl+1;}
    return hr+1;
}
int main(){

    bt *root = new bt('A');
    bt *second = new bt('B');
    root->l=second;
    bt *third = new bt('C');
    root->r=third;
    bt *fourth = new bt('D');
    root->l->l=fourth;
    bt *fifth = new bt('E');
    root->l->r=fifth;
    bt *sixth = new bt('F');
    root->r->r=sixth;
    bt *seventh = new bt('G'); 
    root->r->r->r=seventh;

    cout<<"printing the binary tree:"<<endl;
    cout<<root->data<<" ";
    cout<<root->l->data<<" ";
    cout<<root->r->data<<" ";
    cout<<root->l->l->data<<" ";
    cout<<root->l->r->data<<" ";
    cout<<root->r->r->data<<" ";
    cout<<root->r->r->r->data<<" "<<endl;
    cout<<"the height of tree is:";
    cout<<height(root);
    return 0;
}

