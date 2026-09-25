#include <iostream>
using namespace std;

int main()
{

int loop;
while(loop<=1000000){
// declare variables
loop++;
string inputType;
string colorFull1;
string colorFull2;

int r1;
int g1;
int b1;

int r2;
int g2;
int b2;

//informing the user
cout<<"This is a colorblind color differentiation test." <<endl<< "This test will accept two colors and decide whether or not someone who has a type" <<endl<< "of red green color blindess will be able to differentiatie between two colors"<<endl;
cout<<"   "<<endl<<"This program will will focus on these four types of red green color blindness:" <<endl<< "Deuteranomaly, Protanomaly, Deuteranopia, and Protanopia"<<endl;
// asking for user input
cout<<"  "<<endl<< "How would you like to enter your colors?" <<endl;
cout<<"Enter 'rgb' for RGB values or 'name' for color names:"<<endl;
cin>>inputType;

//evaluation

//RGB
if (inputType == "rgb") {
cout << "Great choice!" << endl;
cout << "Enter the RGB values for your first color." << endl;
cout << "R: ";
cin >> r1;
cout << "G: ";
cin >> g1;
cout << "B: ";
cin >> b1;
cout << endl;

cout << "Enter the RGB values for your second color." << endl;
cout << "R: ";
cin >> r2;
cout << "G: ";
cin >> g2;
cout << "B: ";
cin >> b2;
// evaluate the user input
 bool color1Red = (r1 > 200 && g1 < 100 && b1 < 100);
bool color2Red = (r2 > 200 && g2 < 100 && b2 < 100);
        
bool color1Green = (g1 > 100 && r1 < 100 && b1 < 100);
bool color2Green = (g2 > 100 && r2 < 100 && b2 < 100);

bool color1Yellow = (r1 > 150 && g1 > 150 && b1 < 100);
bool color2Yellow = (r2 > 150 && g2 > 150 && b2 < 100);

bool color1Orange = (r1 > 200 && g1 > 75 && g1 < 180 && b1 < 100);
bool color2Orange = (r2 > 200 && g2 > 75 && g2 < 180 && b2 < 100);

bool color1Problem = color1Red || color1Green || color1Yellow || color1Orange;
bool color2Problem = color2Red || color2Green || color2Yellow || color2Orange;
cout << endl;

if (color1Problem && color2Problem)
    { cout << "Warning: These colors may be difficult to differentiate for someone with red-green color blindness." << endl;
    }
 // Only first color is in problem group
else if (color1Problem)
   {
  cout << "The first color may be difficult to differentiate from some red/green colors." << endl;
   cout << "Consider avoiding colors that are similar to the first color." << endl;
   }

   // Only second color is in problem group
else if (color2Problem)
   {
cout << "The second color may be difficult to differentiate from some red/green colors." << endl;
cout << "Consider avoiding colors that are similar to the second color." << endl;
}

// Neither color is in problem group
else
{
cout << "These colors are likely to be easier to differentiate for someone with red-green color blindness." << endl;
        }
}


else if (inputType == "name")
    {
        cout << endl;
        cout << "Great choice!" << endl;

        cout << "Enter the name of your first color: ";
        cin >> colorFull1;

        cout << "Enter the name of your second color: ";
        cin >> colorFull2;
        //evaluate whether or not differentiable
        bool color1Problem = (colorFull1 == "red" ||colorFull1 == "green" ||colorFull1 == "yellow" ||colorFull1 == "orange");

        bool color2Problem = (colorFull2 == "red" ||colorFull2 == "green" ||colorFull2 == "yellow" ||colorFull2 == "orange");
         if (color1Problem && color2Problem)
        {
            cout << endl;
            cout << "Warning: " << colorFull1 << " and "
            << colorFull2 << " may be difficult to differentiate for someone with red-green color blindness." << endl;
            cout << "Consider using colors with more contrast." << endl;
        }

        // First color is potentially difficult
        else if (color1Problem)
        {
        cout << endl;
       cout << colorFull1 << " may be difficult to differentiate from some colors." << endl;

    cout << "Consider avoiding colors that are similar to " << colorFull1 << "." << endl;
        }

        // Second color is potentially difficult
        else if (color2Problem)
        {
            cout << colorFull2 << " may be difficult todifferentiate from some colors." << endl;

            cout << "Consider avoiding colors that are similar to " << colorFull2 << "." << endl;
        }

        // Neither color is potentially difficult
        else
        {  
            cout << "These colors are likely to be easier to differentiate for someone with red-green color blindness." << endl;
        }
    }

    // Invalid input
    else
    {
        cout << "Invalid choice. Please restart the program and enter either 'rgb' or 'name'." << endl;
    }
 //ask about a specfic colorblindness
 int blindnessType;
 cout<<endl;
 cout<<"Which kind of color blindness would you like to learn about?"<<endl;
 cout << "1. Deuteranomaly" << endl;
    cout << "2. Protanomaly" << endl;
    cout << "3. Deuteranopia" << endl;
    cout << "4. Protanopia" << endl;
    cout<<"Enter in a number (1-4)"<<endl;
    cin>> blindnessType;

    switch(blindnessType){
case 1:
cout<<"Deuteranomaly: This means greens, yellows, and reds all appear more similar than they should"<<endl;
cout<<"But many people will go their whole lives with out knowign they have this kind of colorblindness";
break;

case 2:
cout<<"Protanomaly: Reds appear duller and darker than normal, and orange, yellow, and green look more similar to each other"<<endl;
cout<<"Stop signals,break lighs and red text can be hard to see on the daily basis";
break;

case 3:
cout<<"Deuteranopia:The entire red-orange-yellow-green range collapses into varying shades of brownish-yellow."<<endl;
cout<<"This type can severly effect a person. A ripe strawberry will look no diffent from the green plant it is on";
break;

case 4:
cout<<"Protanopia: Red-green discrimination is lost, reds appear very dark, almost black"<<endl;
cout<<"Red-orange-yellow-green range all become shades of brownish yellow";
break;

    }
}
  return 0;
}