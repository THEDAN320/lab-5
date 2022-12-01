#include <iostream>
using namespace std;

void create_arr(int size){
    int arr[size][size];
    int step = size * 2 - 1;
    int up = 0;
    int right = 0;
    int dawn = 0;
    int left = 0;
    
    while(true){
        
        if(step > 0){
            for(int i = up; i < size - up; i++){
                arr[up][i] = 0;
            }
            step--;
            up++;
        }
        
        if(step > 0){
            for(int i = right + 1; i < size - right; i++){
                arr[i][size - right - 1] = 1;
            }
            step--;
            right++;
        }
        
        if(step > 0){
            for(int i = size - 1 - right; i >= left; i--){
                arr[size - 1 - dawn][i] = 2;
            }
            step--;
            dawn++;
        }
        
        
        if(step > 0){
            for(int i = size - 1 - dawn; i >= up; i--){
                arr[i][left] = 3;
            }
            step--;
            left++;
        }
        
        if(step == 0) break;
    } 

    for(int i = 0;i < size;i++){
        for(int j = 0;j < size; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int size;
    cout<<"enter massiv size - ";
    cin>>size;
    create_arr(size);
}

