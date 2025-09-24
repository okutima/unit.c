//promting the user to enter the  radius and height 
/*
Name:SANDRA KUYA OKUTIMA
Reg No:PA106\G\28757\25
Discription:prompting the user to enter the heigh and the radius
*/
#include<stdio.h>
 

int main()
{
	float radius, height;
    float volume, surface_area;
    float pi=3.1416;
    
    //prompt the user for height and radius
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    
    //calculate the surace area and volume
    surface_area= 2 * pi * radius * radius + pi * 2 * radius * height;
    volume= pi * radius *radius * height;
    
    //Display results
    printf("Surface area of the cylinder = %.2f\n",surface_area);
    printf("volume of the cylinder = %.2f\n",volume);
    
    return 0;
}
		