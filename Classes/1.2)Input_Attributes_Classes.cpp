/**
 * The above C++ program defines a class YouTube_Channel with attributes like name, owner name,
 * subscribers count, and a list of published video titles, allowing users to input channel information
 * and display it.
 * @return The main function in the code snippet returns an integer value of 0. This is a common
 * practice in C++ programs to indicate that the program executed successfully without any errors.
 */

  #include <iostream>
  #include <string>
  #include <list>
using namespace std;
/* The class `YouTube_Channel` represents a YouTube channel with properties such as name, owner name,
subscribers count, and a list of published video titles, along with methods to input and display
channel information. */

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
    }/**
     * The function `showInfo` displays information about a YouTube channel, including its name, owner
     * name, number of subscribers, and published video titles.
     */
    
    void showInfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Owner Name: "<<OwnerName<<endl;
        cout<<"Subscribers: "<<SubscribersCount<<endl;
        cout<<"Videos: "<<endl;
        for(string vids: PublishedVideoTitles){
            cout<<vids<<endl;
        }
    }/**
     * The YouTube_Channel constructor initializes the Name, OwnerName, and SubscribersCount variables
     * with default values.
     */
    
    YouTube_Channel(){
        Name = "No Name";
        OwnerName = "No Owner";
        SubscribersCount = 0;
    }
   /**
    * The above function is a destructor for a C++ class named YouTube_Channel that prints a message
    * indicating the destruction of an object.
    */
    ~YouTube_Channel(){
        cout<<"Destructor called for "<<Name<<endl;
    }
};

int main(){
    YouTube_Channel ytChannel;
    ytChannel.getInfo();
    ytChannel.showInfo();
    return 0;
}