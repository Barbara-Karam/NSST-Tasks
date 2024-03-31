#include <iostream>
#include <cmath>
#define G 0.00000000006674
#define PI 3.141592653589
#include <stdlib.h>
using namespace std;
double UGL (  double m1, double m2,  double r) //universal gravitational law function
        {return (G*m1*m2/(r*r));}
class Kepler //Kepler`s third law class
{
private:
    double Mass,Semi_Major_Axis;
public:
    double Law (double M,double A)
    {
        Mass = M; Semi_Major_Axis = A;
        return (sqrt((4*PI*Semi_Major_Axis*Semi_Major_Axis*Semi_Major_Axis)/(Mass*G)));
    }

};
int main()
{
    double a,b,c;int i,j,k,L;
    cout<<"Hey and welcome to NSST space science guide \n";
    b:cout<<" what do you wanna do today? \n 1-solve some problems (unless you`re in an exam, cheater) \n 2- read some cool space facts "<<endl<< "3- quiz yourself on Newton`s Universal Gravitational Law dealing with space bodies \n or tab 0 to exit \n";
    cin>>j;
    switch (j)
    {

    case 1:{/*problem solver part*/
    double M,A;
    c:cout<<"what type of problem do you want to solve? \n 1-Universal Gravitational law \n 2-Newton`s second law \n 3- Kepler`s third law \n or tab 0 to get back \n";
    cin>>i;
    if (i==1) //Universal Gravitational law
    {   cout<<"enter the mass of the first body in kgs"<<endl;
        cin>>a;
        cout<<"enter the mass of the second body in kgs"<<endl;
        cin>>b;
        cout<<"enter the distance between their cores in meters"<<endl;
        cin>>c;
        cout<<"the force of gravitation =  "<<UGL(a,b,c)<<endl;
    }
    else if (i==2) //Newton`s second law
    {
        cout<<"enter the mass of the body in kgs"<<endl;
        cin>>a;
        cout<<"enter the acceleration of its movement \n";
        cin>>b;
        cout<<"the force acting upon it = "<<a*b<<endl;
    }
    else if (i==3) //Kepler`s third law
    {
        Kepler third;
        cout<<"enter the mass of the body that`s being revolved around in kgs"<<endl;
        cin>>M;
        cout<<"enter the distance between their cores \n";
        cin>>A;
        cout<<"the orbital period = "<< third.Law(M,A)<<endl;
    }
    else if (i==0) goto b;//going back to the main menu
    cout<<"\n want another one? enter 1 or tap 0 to get back"<<endl;
    cin>>L;
    if (L==1) goto c;
    else if (L==0) goto b;break;
    }

    case 2:{/*fun facts part*/
        int k,L;
    cout<<"here`s a fun fact for you \n \n";
    a:k= rand()%21 + 1;
    switch (k)
    {
        case 1:cout<<"One million Earths could fit inside the sun – and the sun is considered an average-size star."<<endl; break;
        case 2:cout<<" For years it was believed that Earth was the only planet in our solar system with liquid water. More recently, NASA revealed its strongest evidence yet that there is intermittent running water on Mars, too!"<<endl; break;
        case 3:cout<<"Comets are leftovers from the creation of our solar system about 4.5 billion years ago – they consist of sand, ice and carbon dioxide."<<endl; break;
        case 4:cout<<"You wouldn’t be able to walk on Jupiter, Saturn, Uranus or Neptune because they have no solid surface!"<<endl; break;
        case 5:cout<<"If you could fly a plane to Pluto, the trip would take more than 800 years!"<<endl; break;
        case 6:cout<<"Space junk is any human-made object orbiting Earth that no longer serves a useful purpose. Scientists estimate there are about 500,000 pieces of space junk today, including fragments from rockets and satellites, and everyday items like spanners dropped during construction of the International Space Station!"<<endl; break;
        case 7:cout<<"An asteroid about the size of a car enters Earth’s atmosphere roughly once a year – but it burns up before it reaches us. Phew!"<<endl; break;
        case 8:cout<<"The highest mountain known to man is on an asteroid called Vesta. Measuring a whopping 22km in height, it is three times as tall as Mount Everest!"<<endl; break;
        case 9:cout<<"There are more stars in the universe than grains of sand on all the beaches on Earth. That’s at least a billion trillion!"<<endl; break;
        case 10:cout<<"The sunset on Mars appears blue."<<endl; break;
        case 11:cout<<"Neptune's moon, Triton, orbits the planet backwards. It's the only large moon in our solar system that does this."<<endl; break;
        case 12:cout<<"Mercury & Venus are the only 2 planets in our solar system that have no moons."<<endl; break;
        case 13:cout<<"If a star passes too close to a black hole, it can be torn apart."<<endl; break;
        case 14:cout<<"Our solar system is 4.57 billion years old."<<endl; break;
        case 15:cout<<"Enceladus, one of Saturn’s smaller moons, reflects 90% of the Sun’s light."<<endl; break;
        case 16:cout<<"The Whirlpool Galaxy (M51) was the first celestial object identified as being spiral."<<endl;break;
        case 17:cout<<"The Milky Way galaxy is 105,700 light-years wide."<<endl;break;
        case 18:cout<<"Footprints left on the Moon won’t disappear as there is no wind."<<endl;break;
        case 19:cout<<"The Martian day is 24 hours 39 minutes and 35 seconds long."<<endl;break;
        case 20:cout<<"NASA’s Crater Observation and Sensing Satellite (LCROSS) found evidence of water on the Earth’s Moon."<<endl;break;
        case 21:cout<<"The element helium (helios is Greek for Sun) was discovered in the chromosphere (an outer layer of the sun) before it was discovered on Earth"<<endl;
    };
    cout<<"\n want another one? enter 1 or tap 0 to get back"<<endl;
    cin>>L;
    if (L==1) goto a;
    else if (L==0) goto b;break;
    }
    case 3:{//quiz on UGL
        //reused variables defined in another case to minimize storage usage
        START:a={((rand()%9)+1)*1000000000000};b={((rand()%9)+1)*1000000000000};c = {((rand()%9)+1)*10000}; if (a==b) goto START;//in order for the number to be in the form of 1000 instead of 1*10^3
        cout<<"answer the following questions"<<endl;
        cout<<"if a space body has a mass of "<<a<<" kgs and another body has a mass of "<<b<<" kgs and the distance between their centers is "<<c<<" meters \n";
        cout<<"first question :"<<endl<<"which one is the moon?"<<endl<<"1-first body \n2-second body \n";
        cin>>i;
        if ( a<b && i==1) cout<<"correct \n";
        else if (a>b && i==2) cout<<"correct \n";
        else cout <<"incorrect because in space the lighter bodies orbit the heavier bodies as proven in Albert Einstein`s theory of relativity. check it out, its`s interesting! \n";
        p:cout<<"second question : \ncalculate the force of attraction and round it \n use 6.674*10^-11 for G"<<endl;
        cin>>k;
        if (k==round(UGL(a,b,c))) {cout<<"your answer is correct! good job!"<<endl; W:cout<< "want another question? \n 0-try another one \n 3-get back to the main menu \n 4- exit the program \n";}
        else cout<<"incorrect :( \n do you want to try again? \n 1-check answer \n 2-try again \n 3-get back to the main menu \n 4- exit the program \n";
        cin>>i;//reused variable defined in the same case minimize storage usage
        switch (i) {case 0: {goto START;break;}
                    case 1: {cout<<"the answer is "<<round(UGL(a,b,c))<<endl;goto W;}
                    case 2: {goto p;break;}
                    case 3: {goto b;break;}
                    default:break;}
    }


    cout<<"\n***************************************************************************************************************************\n\n";
    cout<<"**************************************************  project members  ******************************************************\n\n\n\n";

    cout<<" [ Barbra Karam aziz ]  [ Fady Romany bakheet ] [Shahd Mohammad Elkilany]  ---> [ Idea & Code writing ] \n\n";

    cout<<" [ Ahmed Mohamed Taha ] [ Martin Nady Shokry ]  [Omar Sobhi Abd-elkader]   ---> [ Mathematical laws , testing & debugging ]\n\n\n\n";

    cout<<"***************************************************************************************************************************\n\n";
    cout<<"\n**************************************************  have a great day  *****************************************************\n\n\n" ;

        return 0;
}
}
