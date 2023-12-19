#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    int count = 0;
    double ans ,sum = 0 ,sd = 0;
    string num;
    while(getline(source,num)){
        sum += atof(num.c_str());
        sd += pow(atof(num.c_str()),2);
        count++;
    }
    ans =  sqrt((sd/count)-pow(sum/count,2));
    cout << "Number of data = "<< count <<endl;
    cout << setprecision(3);
    cout << "Mean = "<< sum/count <<endl;
    cout << "Standard deviation = " << ans;
}