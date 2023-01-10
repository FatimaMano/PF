#include<iostream>
#include<cmath>
using namespace std;
float pyramidVolume(float length,float width, float height,string units);
main()
{
   float length, width, height;
   string units;
   cout<<"Enter the length of the pyramid in meters";
   cin>>length;
   cout<<"Enter the width of the pyramid in meters";
   cin>>width;
   cout<<"Enter the height of the pyramid in meters";
   cin>>height;
   cout<<"Enter the desired unit";
   cin>>units;
   float Volume_units = pyramidVolume(length,width,height,units);
   cout<<Volume_units;
}
float pyramidVolume(float length,float width, float height,string units)
{
    float Volume;
    Volume = (length * width * height)/3;
    if(units == "centimeters")
    {
      float Volume_in_centimeters = Volume *  (pow(10,6));
      return Volume_in_centimeters;
    }
    Volume = (length * width * height)/3;
    if(units == "millimeters")
    {
      float Volume_in_millimeters = Volume *  (pow(10,9));
      return Volume_in_millimeters;
    }
    Volume = (length * width * height)/3;
    if(units == "kilometers")
    {
      float Volume_in_kilometers = Volume /  (pow(10,3));
      return Volume_in_kilometers;
    }

}