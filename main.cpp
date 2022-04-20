/* --------------------------------------------------------------
*       MATH CALCULATIONS THAT INCLUDES:
        1.Area of a triangel
        2.Area of a circle
*       Name of Programmer: Joseph Sakala
*       School: The Copperbelt University
*       Location: Copperbelt Provice, Kitwe-Zambia, Jambo drive.
*-----------------------------------------------------------------*/

#include<iostream>

using namespace std;

const float PI=3.142857143;  //constant pi
float R;   //Radius of a circle
//int hight_of_a_triangel,base;   //hight and base of a triangle

int area_of_a_triangle(int hight, int base){
        int area=(base*hight)/2;
        return area;
}

        float volume_of_a_sphere(const float PI, float R){
            float volume_of_a_sphere=(PI*R*R*R*4)/3;
            return volume_of_a_sphere;

}

int main()


{

    int hight, base; //hight and base of a traingle respecttively
    float R;//raduis of the sphere
    int a; //user option

    cout<<"What shape are you working with?\n";
    cout<<"1.Sphere.\n"; //users first option
    cout<<"2.Triangle.\n"; //users second option
    cin>>a; //user enters their option of choice that is either 1 or 2.




    if (a==1){
            cout<<"To calculate the area of a triangle enter\n";
            cout<<"High = ";cin>>hight;//user enters hight of a triangle
            cout<<"Base = ";cin>>base;    //user enters base of a triangle
            cout<<"The area of your triangle is "<<area_of_a_triangle(hight, base)<<" Units";
    }




    else if(a==2){
            cout<<"To calculate the volume of a sphere\n";
            cout<<"Enter radius\n";
            cin>>R;
            cout<<volume_of_a_sphere(PI,R);
    }


    else{cout<<"You have selected and invalid option";}


    return(0);

}
