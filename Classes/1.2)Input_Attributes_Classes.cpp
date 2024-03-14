/**
 * The code defines a C++ class representing a YouTube channel with properties like name, owner name,
 * subscribers count, and a list of published video titles, along with methods to input and display
 * channel information.
 * @return The main function in the code returns an integer value of 0. This is a common practice in
 * C++ programs to indicate that the program executed successfully without any errors.
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
    void getInfo(){
        cout<<"Enter the name of the YouTube channel: ";
        cin>>Name;
        cout<<"Enter the name of the owner of the YouTube channel: ";
        cin>>OwnerName;
        cout<<"Enter the number of subscribers of the YouTube channel: ";
        cin>>SubscribersCount;
        cout<<"Enter the number of videos published by the YouTube channel: ";
        int n;
        cin>>n;
        cout<<"Enter the titles of the videos: ";
        for(int i=0; i<n; i++){
            string title;
            cin>>title;
            PublishedVideoTitles.push_back(title);
        }
    }
    void showInfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Owner Name: "<<OwnerName<<endl;
        cout<<"Subscribers: "<<SubscribersCount<<endl;
        cout<<"Videos: "<<endl;
        for(string vids: PublishedVideoTitles){
            cout<<vids<<endl;
        }
    }
    YouTube_Channel(){
        Name = "No Name";
        OwnerName = "No Owner";
        SubscribersCount = 0;
    }
};

int main(){
    YouTube_Channel ytChannel;
    ytChannel.getInfo();
    ytChannel.showInfo();
    return 0;
}