/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float metric;
    float inter;
    float ecat;
    cout<<"Enter your marks in metric: ";
    cin>>metric;
    cout<<"Enter your marks in inter: ";
    cin>>inter;
    cout<<"ENTER YOUR MARKS IN ECAT: ";
    cin>>ecat;
    float sum;
    float per_metric;
    float per_inter;
    float  per_ecat;
    per_metric =metric/1100 *100*0.25;
    per_inter =inter/1100*100*0.45;
    per_ecat =ecat/400*100*0.30;
    sum =per_metric +per_inter+per_ecat;
    cout<<"Your aggregate is: "<<sum;
    
}
