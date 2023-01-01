#include<iostream>
using namespace std;
main(){
float bag_size_pounds, cost_of_bag,area_covered_by_each_bag_square_feet, cost_of_fertilizing_per_pound, cost_of_fertilizing_area_per_square_feet;
cout<<"Enter bag size in pounds";
cin>>bag_size_pounds;
cout<<"Enter cost of bag";
cin>>cost_of_bag;
cout<<"Enter area covered by each bag in square feet";
cin>>area_covered_by_each_bag_square_feet;
cost_of_fertilizing_per_pound = cost_of_bag / bag_size_pounds;
cost_of_fertilizing_area_per_square_feet = cost_of_bag / area_covered_by_each_bag_square_feet;
cout<<"cost of fertilizing per pound "<<cost_of_fertilizing_per_pound<<endl;
cout<<"cost of fertilizing area per square feet "<<cost_of_fertilizing_area_per_square_feet;
}