#include<bits/stdc++.h>

using namespace std;
int main(){
                  // transpose of  a matrix 
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<i;j++){
           int temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
/*int row=3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int temp=a[i][j];
            a[i][j]=a[row-i-1][j];
            int temp1=a[row-i-1];
            temp1=temp;
        }
    }   

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
        }
    }
*/

}