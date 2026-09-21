#include <stdio.h>

void traversal(int a[], int n)
{
    printf("{");
    for (int i=0; i<n; i++)
    {
        printf("%d", a[i]);

        if (i==(n-1))
        break;

        printf(",");
    }
    printf("}\n");
}

void linearsearch(int a[], int n)
{
    int key,count=0;
    printf("Enter Element To Find In Array: ");
    scanf("%d",&key);

    for (int i=0; i<n; i++){

        if(a[i]==key){
        printf("Element Found At Position %d \n",i+1);
        count=1;
        }

    }

    if(count==0)
    {
    printf("Element Not Found");
    }

}

void bubblesort(int a[], int n)
{
    int temp;
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
{
    int b,pos,ins;
    printf("Press 1 for Insertion / Press 2 for Deletion : ");
    scanf("%d",&b);

    if(b==1){
        printf("Enter the Element Position for Insertion: ");
        scanf("%d",&pos);
        --pos;

        printf("Enter the Insertion Value: ");
        scanf("%d",&ins);

        for(int i=n-1; i>=pos; i--) {
            a[i+1]=a[i];
        }

        a[pos]=ins;
        n++;
    }

    if(b==2){
        printf("Enter the Element Position for Deletion: ");
        scanf("%d",&pos);
        --pos;

        for(int i=pos; i<n-1; i++) {
            a[i]=a[i+1];
        }

        n--;
    }

    traversal(a,n);
}

void binarysearch(int a[], int n)
{
    bubblesort(a,n);

    int key,low=0,high=n-1;
    printf("Enter Element to Find: ");
    scanf("%d",&key);

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("Element found at Position %d\n",mid+1);
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

    printf("Element not found\n");
}

int main(){

    int n,a[100];
    printf("Enter array size: ");
    scanf("%d",&n);

    for (int i=0; i<n; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }

    linearsearch(a,n);
    bubblesort(a,n);
    ins_del(a,n);
    binarysearch(a,n);

    return 0;
}
