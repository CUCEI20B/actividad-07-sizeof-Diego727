#include <iostream>

using namespace std;

int main() {
    string datoPrimitivo;
    cin>> datoPrimitivo;

    if(datoPrimitivo == "char")
        cout<<sizeof(char);

    if(datoPrimitivo == "int")
        cout<<sizeof(int);
    
    if(datoPrimitivo == "short")
        cout<<sizeof(short);
    
    if(datoPrimitivo == "float")
        cout<<sizeof(float);
    
    if(datoPrimitivo == "double")
        cout<<sizeof(double);
    
    if(datoPrimitivo == "long")
        cout<<sizeof(long);

    return 0;
}