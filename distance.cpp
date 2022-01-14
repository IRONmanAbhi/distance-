#include<iostream>
#include <cmath>

#define pi 3.14159265358979323846

using namespace std;

double calDist(double lat1, double lon1, double lat2, double lon2) 
{
    double dist;
    dist = sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon1 - lon2);
    dist = acos(dist);
    dist = (6371 * pi * dist) / 180;
    return dist;
}

int main() 
{   double lat1, lat2, lon1, lon2;
    cout<<"\nEnter the lattitue of place 1: ";
    cin>>lat1;
    cout<<"\nEnter the longitude of place 1: ";
    cin>>lon1;
    cout<<"\nEnter the lattitue of place 2: ";
    cin>>lat2;
    cout<<"\nEnter the lattitue of place 2: ";
    cin>>lon2;
    cout << calDist(51.752021, -1.257726, 51.507351, -0.127758);
    return 0;
}