#include <iostream.h>
#include <conio.h>
#include <malloc.h>
#define nil NULL
struct nod
{
 struct nod *left;char
 data;struct nod *right;
};
typedef struct nod NOD;
typedef NOD POKOK;
NOD *NodBaru(char item){
	NOD *n;n=(NOD *)malloc(sizeof(NOD));
   if(n != NULL){
    n ->data=item;
    n ->left=NULL;
    n ->right=NULL;
   }
   return n;
}
void BinaPokok(POKOK **T){
	*T=NULL;
}
bool PokokKosong (POKOK *T){
	return((bool)(T==NULL));
}
void TambahNod(NOD **p, char item){
	NOD*n;
   n=NodBaru(item);
   *p-n;
}
void preOrder(POKOK *T){
	if(!PokokKosong(T)){
   cout<<" "<< T->data;preOrder(T ->left);preOrder(T ->right);
   }
}
void inOrder(POKOK *T){
	if(!PokokKosong(T)){
   inOrder(T ->left);
   cout<<""<<T ->data;inOrder(T ->right);
   }
}
void postOrder(POKOK *T){
	if(!PokokKosong(T)){
   postOrder(T ->left);
   postOrder(T ->right);
   cout<<" "<<T ->data;
   }
}
int main(){
	POKOK *kelapa;
   char buah;
   BinaPokok(&kelapa);
   TambahNod(&kelapa,buah='M');
   TambahNod(&kelapa->left,buah='E');
   TambahNod(&kelapa->left->right,buah='I');
   TambahNod(&kelapa->right->right,buah='O');
   TambahNod(&kelapa->right->right->left,buah='D');
   cout<<"Tampilkan secara preorder : ";
   preOrder (kelapa);
   cout<<endl;
   cout<<"tampilkan secara in order : ";
   inOrder (kelapa);
   cout<<endl;
   cout<<"tampilkan secara postOrder : ";
   postOrder(kelapa);
   cout<<endl;
   cout<<endl;

   getch();
   return 0;
}