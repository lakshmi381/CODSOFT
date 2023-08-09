// Task1:
// Number Guessing Game by C++:
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;g

int main()
{
    // add the random number generator:
    srand(time(0));

    // Generate a random number between 1 and 100:
    int randomNumber = rand() % 100 + 1;
g
    // Now add some variable for storing data:
    int guess;
    // for counting number of attempts;
    int attempts = 0;

    cout<<"Welcome to the Number Guessing Game! "<<endl;
    cout<<endl;

    do{
        cout<<"Enter Your guess (between 1 and 100: )";
        cout<<endl
        cin>>guess;

        // Check if the guess is too high or too low?
        if(guess  > randomNumber){
            cout<<"Too high! Try again: "<<endl;
        }
        else if(guess < randomNumber){
            cout<<"Too low! Try again: "<<endl;
        }
g
        attempts++;
    }
    while(guess != randomNumber);

    cout<<"Congratulations! You guessed the number in "<<attempts<<" attempts:"<<endl;
    cout<<endl;

    return 0;
}
