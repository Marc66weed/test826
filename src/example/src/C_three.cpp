#include <stdio.h>
#include <stdlib.h>
#include <ros/ros.h>
#include <iostream>
using namespace std;

class data
{
    public:
            float height=1.95;
            float weight;
            char ID;
            float BMI();
}member1;

float data::BMI()
{
    return weight/(height*height);
}


int main(int argc,char **argv)
{
    ros::init(argc,argv,"C_three");
    ros::NodeHandle nh;

    member1.ID = 'M';
    //member1.height = 1.95;
    member1.weight = 85;
    
    printf("unit=meter\n");
    printf("ID = %c\n",member1.ID);
    printf("BMI = %f\n",member1.BMI());
    
    return 0;

}