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
    string Name, OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
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

    ytChannel.Name = Name;
    ytChannel.OwnerName = OwnerName;
    ytChannel.SubscribersCount = SubscribersCount;
    ytChannel.PublishedVideoTitles = PublishedVideoTitles;
    cout<<"Name: "<<ytChannel.Name<<endl;
    cout<<"Owner Name: "<<ytChannel.OwnerName<<endl;
    cout<<"Subscribers: "<<ytChannel.SubscribersCount<<endl;
    cout<<"Videos: "<<endl;
    for(string vids: ytChannel.PublishedVideoTitles){
        cout<<vids<<endl;
    }
    return 0;
}