#include<iostream>

using namespace std;

int main(){
    int i,j,k=0;
    int arr[3][3];
    int spa[100][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter the element ["<<i<<"] ["<<j<<"]";
            cin>>arr[i][j];
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]!=0){
                spa[k][0]=i;
                spa[k][1]=j;
                spa[k][2]=arr[i][j];
                k++;
            }
        }
    }
    cout<<"spacre matrix"<<endl;
    cout<<"rows  column  values"<<endl;;
    for(i=0;i<k;i++){
        cout<<spa[i][0]<<"    "<<spa[i][1]<<"    "<<spa[i][2]<<endl;
    }
    
    return 0;
}
