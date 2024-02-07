#include <iostream>
using namespace std;
void metodoBurbuja(int arr[], int tmo){
    for (int i = 0; i < tmo - 1; i++) {
        for (int j=0;j<tmo-1;j++) {
            if(arr[j]>arr[j+1]){
                int aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
        }
    }

}

int main() {
    int arr[]={3,5,7,8,9};
    int tmo=sizeof(arr)/sizeof (arr[0]);
    cout<<"Arreglo original: ";
    for (int i = 0; i < tmo; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    metodoBurbuja(arr,tmo);
    cout<<"Ordenamiento : ";
    for (int i = 0; i < tmo; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
