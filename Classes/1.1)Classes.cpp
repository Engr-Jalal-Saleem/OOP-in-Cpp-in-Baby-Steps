/**
 * This C++ program defines a class representing a YouTube channel and creates an instance of it with
 * specific attributes, then prints out the details of the channel.
 * 
 * @return The program returns the details of a YouTube channel named "JS Tutorials" owned by "Engr.
 * Jalal Saleem" with 1000 subscribers and the following published video titles:
 * 1. C++ Tutorials
 * 2. Java Tutorials
 * 3. Python Tutorials
 */
#include<iostream>
#include<list>
using namespace std;

class YouTube_Channel{
    public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};
int main(){
    YouTube_Channel ytChannel;
    ytChannel.Name = "JS Tutorials";
    ytChannel.OwnerName = "Engr. Jalal Saleem";
    ytChannel.SubscribersCount = 1000;
    ytChannel.PublishedVideoTitles = {"C++ Tutorials", "Java Tutorials", "Python Tutorials"};
    cout<<"Name: "<<ytChannel.Name<<endl;
    cout<<"Owner Name: "<<ytChannel.OwnerName<<endl;
    cout<<"Subscribers: "<<ytChannel.SubscribersCount<<endl;
    cout<<"Videos: "<<endl;
    for(string vids: ytChannel.PublishedVideoTitles){
        cout<<vids<<endl;
    }
    return 0;
}