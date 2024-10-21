#include<iostream>
#include<string>
using namespace std;

int main(){
	
	
	int num;
	int i,j,k=0;
	  int spa[100][100];
	cout<<"enter the number of city of city u want to add :";
	cin>>num;
		string city[100];
	for(i=0;i<num;i++){
	    cout<<"city "<<i+1<<"name :";
	    cin>>city[i];
	}
	

	 int arr[100][100];
    
	for(i=0;i<num;i++){
			for(j=0;j<num;j++){
				char var;
				
				if(city[i]!=city[j]){
				      cout<<"is flight avaible between "<<city[i]<<" and "<<city[j]<< " (y/n) ? ";
			   cin>>var;
			   
			   if(var=='y'||var=='Y'){
			   	arr[i][j]=1;
			   }
			   else{
			   	arr[i][j]=0;
			   }
				}
				
				
			 
			   
			   
			
			}
			
		
		cout<<endl;
	}
	
   
   
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    
   for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(arr[i][j]!=0){
                spa[k][0]=i;
                spa[k][1]=j;
                spa[k][2]=arr[i][j];
                k++;
            }
        }
    }
     cout<<"spacre matrix"<<endl;
    cout<<"rows  column  values"<<endl;
    cout<<"  "<<num<<"    "<<num<<"    "<<k<<endl;
    for(i=0;i<k;i++){
        cout<<"  "<<spa[i][0]<<"    "<<spa[i][1]<<"    "<<spa[i][2]<<endl;
    }
     cout<<"fligth avaible :"<<endl;
    
    for(i=0;i<k;i++){
        
        cout<<"flight is avaible form "<<city[spa[i][0]]<<" to "<<city[spa[i][1]]<<endl;
        
    }
    
    return 0;
}
