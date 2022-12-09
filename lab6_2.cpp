#include<iostream>
#include<cmath>
using namespace std;

double deg2rad(double A){
    return A*(M_PI/180);
}

double rad2deg(double B){
    return B*(180/M_PI);
}

double findXComponent(double F ,double G,double H,double I){
     return F*cos(H)+G*cos(I);
}

double findYComponent(double F ,double G,double H,double I){
    return F*sin(H)+G*sin(I);
}

double pythagoras(double K,double L){
     return sqrt(pow(K,2)+pow(L,2));
}

void showResult(double P,double Q){
     cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
     cout<<"Length of the resultant vector = "<<P<<"\n";
     cout<<"Direction of the resultant vector (deg) = "<<Q<<"\n";
     cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}