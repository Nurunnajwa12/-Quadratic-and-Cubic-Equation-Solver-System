#include <iostream>
#include <cmath>
#include<cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;

/*********************************************************************************
 *                  QUADRATIC AND CUBIC EQUATION SOLVER PROGRAM                  *
 *     This program enable user to solve quadratic equation and cubic equation   *
 *                     by using fixed point iteration approach.                  *
 *********************************************************************************/

void createQuadEqn(double,double,double);
void fixedPointQuad(double,double,double);

void createCubicEqn(double,double,double,double);
void fixedPointCube(double,double,double,double);

double f,g,h,j;
double x,y,z;

int main()
{   double h,i,j,k;
    double a,b,c;
    int userChoice;

	    cout<<"\n\t\t************** WELCOME TO EQUATION SOLVER **************\n"<<endl;

	    cout<<"\n\t\tThis program is to solve quadratic equation and cubic equation"<<endl;
	    cout<<"\t\tby using fixed number iteration."<<endl;

        cout<<"\n\t\t>>Please Choose Any Type of Option \n";
        cout<<"\n\t\t1.Quadratic Equation\n\n\t\t2.Cubic Equation\n\n\t\t3.Close Application\n";

        cout<<"\n\t\tEnter your choice >> ";
        cin >> userChoice;


    if (userChoice==1)
    {

    createQuadEqn(a,b,c);

    }

    else if(userChoice==2)
    {

    createCubicEqn(h,i,j,k);

    }

    {

      cout<<"\n\t\t==============================================================="<<endl;
      cout<<"\n\t\tThank you for using our service! Please come again."<<endl;
      cout<<"\n\t\t==============================================================="<<endl;

    }

    if (userChoice==3)
    {
        cout<<"\n\t\t==============================================================="<<endl;
        cout<<"\n\t\tApplicaton closed....Thank you for using our service.";
        cout<<"\n\t\tSee you again."<<endl;
        cout<<"\n\t\t==============================================================="<<endl;
    }


    return 0;
}
/*****************************************************************************
 *                             createQuadEqn                                 *
 *     This function serve two choice for user to create a random quadratic  *
 *   equation  or create their own cubic equation by enter the value of      *
 *                                coefficient                                *
 *****************************************************************************/
void createQuadEqn (double a, double b, double c)
{
    int choiceNum;
    double disc;

     cout<<"\n\t\t************** CREATING QUADRATIC EQUATION **************\n"<<endl;

    cout<<"\n\t\tNow,we will generate a quadratic equation"<<endl;
    cout<<" \n\t\tThe form of the equation is ax^2 + bx + c = 0"<<endl;

    cout<<endl;
    cout<<"\n\t\tPlease choose any option."<<endl;
    cout<<"\n\t\t1.Random Number Generator\n\n\t\t2.My Own Coefficient\n";
    cout<<endl;

    cout<<"\n\t\tEnter your choice>> ";
    cin >> choiceNum;

    cout<<endl;

     if (choiceNum == 1)
    {
    srand (time(NULL));
    a=rand()%5+1;
    b=-1*(rand()%50+1);
    c= rand()%5+1;


    cout<<"\n\t\tThe quadratic equation is ";
    cout<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
    cout<<endl;

    disc= pow(b,2)-4*a*c;
    cout<<"\t\tDiscriminant value is : "<< disc<<endl;

    if (disc >= 0)
     {

       fixedPointQuad(a,b,c);
     }
     else
     {
         cout<<"\t\tThe discriminant must above or equal 0. Thank you"<<endl;
     }

}
    else if(choiceNum == 2)
    {
        cout<<"\t\tEnter your first number: ";
        cin >> a;

        cout<<"\t\tEnter your second number: ";
        cin >> b;

        cout<<"\t\tEnter your third number: ";
        cin >> c;


        cout<<"\n\t\tThe quadratic equation is ";
        cout<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;


    disc= pow(b,2)-4*a*c;
    cout<<"\n\t\tDiscriminant value is : "<< disc<<endl;
    cout<<endl;

    if (disc >= 0)
     {
       fixedPointQuad(a,b,c);
     }
     else
     {
         cout<<"\t\tThe discriminant must above or equal 0. Thank you."<<endl;
     }

    }

    else
    {
        cout<<"\t\tThank you for using our service."<<endl;
        exit(EXIT_FAILURE);
    }

}
/*****************************************************************************
 *                             fixedPointQuad                                *
 *     This function is to find the root of the quadratic equation           *
 *                using the fixed-point iteration approach                   *
 *****************************************************************************/
void fixedPointQuad(double x, double y, double z)
{
    unsigned int Nit;
    unsigned int counter=0;
    double x1;//initial value
    double x2;

    cout<<"\n\t\t***************** FINDING THE ROOTS ***********************\n"<<endl;

    cout<<"\t\tNow, we will find the roots by using fixed point iteration."<<endl;

    cout<<endl;

    cout<<"\t\tEnter your initial value: ";
    cin >> x1;
    cout<<"\t\tEnter number of iteration: ";
    cin >> Nit;

    cout<<endl;
    while(counter <= Nit)
    {

        x1 = pow((-(y/x*x1)-(z/x)),0.5);

        cout<<setw(25)<<"\t\tIteration("<<counter<<") x value: "<<"\t\t"<<x1<<endl;
        counter+=1;
    }
}

/*****************************************************************************
 *                             createCubicEqn                                *
 *     This function serve two choice for user to create a random cubic      *
 *   equation  or create their own cubic equation by enter the value of      *
 *                                coefficient                                 *
 *****************************************************************************/
void createCubicEqn (double m, double n, double o, double p)
{
    int choiceNum;
    double disc;

    cout<<"\n\t\t************** CREATING CUBIC EQUATION **************\n"<<endl;

    cout<<"\n\t\tNow,we will generate a cubic equation"<<endl;
    cout<<" \n\t\tThe form of the equation is ax^3 + bx2 + cx + d = 0"<<endl;
    cout<<endl;

    cout<<"\n\t\tPlease choose any option."<<endl;
    cout<<"\n\t\t1.Random Number Generator\n\n\t\t2.My Own Coefficient\n";
    cout<<endl;

    cout<<"\n\t\tEnter your choice>> ";
    cin >> choiceNum;

    cout<<endl;

     if (choiceNum == 1)
    {
    srand (time(NULL));
    m=rand()%5+1;
    n=rand()%5+1;
    o=-1*(rand()%50+1);
    p= rand()%5+1;

    cout<<"\t\tThe cubic equation is ";
    cout<<m<<"x^3 + "<<n<<"x^2 + "<<o<<"x +" << p <<" = 0"<<endl;
    cout<<endl;

    disc= (pow(n,2)*pow(o,2))- (4*m*pow (o,3)) - (4*pow(n,3)*p) - (27*pow(m,2)*pow(p,2))+(18*m*n*o*p);
    cout<<"\t\tDiscriminant value is : "<< disc<<endl;
    cout<<endl;

    if (disc >= 0)
     {
       fixedPointCube(m,n,o,p);
     }
     else
     {
         cout<<"\t\tThe discriminant must above or equal 0"<<endl;
     }

}
    else if(choiceNum == 2)
    {
        cout<<"\t\tEnter your first number: ";
        cin >> m;

        cout<<"\t\tEnter your second number: ";
        cin >> n;

        cout<<"\t\tEnter your third number: ";
        cin >> o;

        cout<<"\t\tEnter your fourth number: ";
        cin >> p;

       cout<<endl;
       cout<<"\t\tThe cubic equation is ";
       cout<<m<<"x^3 + "<<n<<"x^2 + "<<o<<"x +" << p <<" = 0"<<endl;
       cout<<endl;

    disc = (pow(n,2)*pow(o,2))- (4*m*pow (o,3)) - (4*pow(n,3)*p) - (27*pow(m,2)*pow(p,2))+(18*m*n*o*p);

    cout<<"\t\tDiscriminant value is : "<< disc<<endl;

    if (disc >= 0)
     {
       fixedPointCube(m,n,o,p);
     }
     else
     {
         cout<<"\t\tThe discriminant must above or equal 0. Thank you."<<endl;
     }

    }

    else
    {
        cout<<"\t\tThank you for using our service."<<endl;
        exit(EXIT_FAILURE);
    }


}
/*****************************************************************************
 *                             fixedPointCube                                *
 *     This function is to find the root of the cubic equation               *
 *                using the fixed-point iteration approach                   *
 *****************************************************************************/

void fixedPointCube(double f, double g , double h, double j)
{
    unsigned int Nit;
    unsigned int counter=0;
    double x1;//initial value


     cout<<"\n\t\t************** FINDING THE ROOTS **************\n"<<endl;

    cout<<"\t\tNow, we will find the roots by using fixed point iteration."<<endl;

    cout<<endl;

    cout<<"\t\tEnter your initial value: ";
    cin >> x1;
    cout<<"\t\tEnter number of iteration: ";
    cin >> Nit;

    cout<<endl;

    while(counter <= Nit)
    {
        x1= pow(((-g*x1*x1-h*x1-j)/f), 0.3333);

        cout<<setw(25)<<"\t\tIteration("<<counter<<") x value: "<<"\t\t"<<x1<<endl;
        counter+=1;

    }
}
