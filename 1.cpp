#include <iostream>
#include <cmath>
using namespace std;

void get_math_wait(double* arr, double &math_wait) {
    double ar = 0;
    int count;

    for (count = 0 ; count < 10 ; count++ ) {
        ar += arr[count];
    }
    math_wait = ar/count;
    cout<<"math wait = "<<math_wait<<endl;
}

void get_dispersia(double* arr,double math_wait, double &dispersia) {
    int count;
    for (count = 0 ; count < 10 ; count++) {
        dispersia += pow((arr[count] - math_wait), 2);
    }
    dispersia /= count - 1;
    cout<<"dispersia = "<<dispersia<<endl;
    cout<<"otklonenie = "<<pow(dispersia,0.5)<<endl;
}

void get_normalization(double* arr,double math_wait,double &normalization){
    int min = arr[0], max =arr[0];
    for(int i = 1; i < 10; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        
        if(max < arr[i]){
            max = arr[i];
        }
    }
    normalization = (math_wait - min)/(max - min);
    cout<<"normalization max min = "<<normalization<<endl;
}

void three_sigm_rule(double math_wait, double dispersia){
    double choice;
    double sigma_up = math_wait + 3 * pow(dispersia, 0.5);
    double sigma_dawn = math_wait - 3 * pow(dispersia, 0.5);
    cout<<"enter number - ";
    cin>>choice;
    
    if(sigma_up > choice && choice > sigma_dawn){
        cout<<"this number falls under the 3 sigma rule"<<endl;
    }
    else{
        cout<<"this number does not fall under the 3 sigma rule"<<endl;
    }
}

int main()
{
    double arr[10];
    for (int count = 0 ; count < 10 ; count++) {
        double user_input;
        cout<<"enter number - ";
        cin>>user_input;
        arr[count] = user_input;
    }
    
    double math_wait = 0;
    double dispersia = 0;
    double normalization = 0;
    
    get_math_wait(arr, math_wait);
    get_dispersia(arr, math_wait, dispersia);
    get_normalization(arr, math_wait, normalization);
    
    while(true){
        three_sigm_rule(math_wait,dispersia);
    }
}
