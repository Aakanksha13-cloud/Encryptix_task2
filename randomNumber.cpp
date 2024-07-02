#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout<<"Welcome to Number Guessing Game!!!"<<endl<<"You have to choose a number from 1 to 100"<<endl;

    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int guess;
    do
    {
        cout<<"Plese guess the number:";
        
        cin >> guess;

        if (guess > randomNumber)
        {
            int a = guess-randomNumber;
           
            if (a <= 15 )
            {
                cout<<"The guess is high...Please try agin"<<endl;
            }
            else
            cout<<"The guess is too high...Please try agin"<<endl;
            
        }

        else if (randomNumber> guess)
        {
            int b = randomNumber - guess;
            if (b <= 15)
            {
                cout<<"The guess is low...Please try agin"<<endl;
            }
            else
            cout<<"The guess is too low...Please try agin"<<endl;
            
        }
        
        else
        cout<<"Congratulations!!!"<<endl<<"You found the correct number..."<<endl<<"Thanks for playing!"<<endl;
        
    }while (guess != randomNumber);
    
    return 0;
}
