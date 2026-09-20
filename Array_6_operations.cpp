#include <iostream>
using namespace std;

void traversal(int a[], int n)
{
    cout<<"{";
    for (int i=0; i<n; i++)
    { 
      cout<<a[i];
      
      if (i==(n-1))
      break;  

      cout<<",";
    }
    cout<<"}"<<endl;
}

void linearsearch(int a[], int n)
{
int key,count=0;
cout<<"Enter Element To Find In Array: ";
cin>>key;

for (int i=0; i<n; i++){
    
    if(a[i]==key){
    cout<<"Element Found At Position "<<i+1<<" "<<endl;
    count=1;
    }
    
}

if(count==0)
{
cout<<"Element Not Found";
}

}

void bubblesort(int a[], int n)
{ int temp;
   for(int i=1; i<n; i++)
   {
    for(int j=0; j<n-i; j++){
        if(a[j]>a[j+1]){
         temp = a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
        }
    }
   }
   traversal(a,n); 
}

void ins_del(int a[], int n)
{ int b,pos,ins;
   cout<<"Press 1 for Insertion / Press 2 for Deletion : ";
   cin>>b;
   
   if(b==1){
    cout<<"Enter the Element Position for Insertion: ";
   cin>>pos;
   --pos;
    cout<<"Enter the Insertion Value: ";
    cin>>ins;
   for(int i=n-1; i>=pos; i--) {
     a[i+1]=a[i];
   }
   a[pos]=ins;
   n++;
   
   }

    if(b==2){
    cout<<"Enter the Element Position for Deletion: ";
   cin>>pos;
   --pos;
   for(int i=pos; i<n-1; i++) {
     a[i]=a[i+1];
     
   } 
   n--;
   }

   traversal(a,n);
}


void binarysearch(int a[], int n)
{ bubblesort(a,n);
    int key,low=0,high=n-1;
    cout << "Enter Element to Find: ";
    cin >> key;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
        {
            cout << "Element found at Position " << mid+1 << endl;
            return;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Element not found" << endl;
}


int main(){

int n,a[100];
cout<<"Enter array size: ";
cin>>n;

for (int i=0; i<n; i++){
cout<<"Enter element "<<i+1<<" : ";
cin>>a[i];
}

linearsearch(a,n);
bubblesort(a,n);
ins_del(a,n);
binarysearch(a,n);


    return 0;
}


    

    
  
