#include<iostream> // Include the header file for input and output operations
#include<list> // Include the header file for using lists
#include<fstream> // Include the header file for file stream operations
using namespace std; // Using the standard namespace

class YouTube_Channel{ // Define a class named YouTube_Channel
    public:
    string Name; // Declare a public member variable for the name of the YouTube channel
    string OwnerName; // Declare a public member variable for the owner's name of the YouTube channel
    int SubscribersCount; // Declare a public member variable for the number of subscribers of the YouTube channel
    list<string> PublishedVideoTitles; // Declare a public member variable for the list of published video titles
};

void write_YouTube_Channel(const YouTube_Channel& channel, const string& filename){ // Define a function to write YouTube channel data to a file
    ofstream file(filename.c_str(), ios::app); // Open the file in append mode
    if (file.is_open()){ // Check if the file is successfully opened
        file<<"Name :\""<<channel.Name<<"\""<<endl; // Write the name of the YouTube channel to the file
        file<<"Owner Name :\""<<channel.OwnerName<<"\""<<endl; // Write the owner's name of the YouTube channel to the file
        file<<"Subscribers :\""<<channel.SubscribersCount<<"\""<<endl; // Write the number of subscribers of the YouTube channel to the file
        file<<"Published Videos :\""<<"\""<<endl; // Write the label for published videos to the file
        if(!channel.PublishedVideoTitles.empty()){ // Check if there are published video titles
            for(string vid: channel.PublishedVideoTitles){ // Loop through each published video title
                file<<vid<<endl; // Write the published video title to the file
            }
        }
        else{ // If there are no published video titles
            file<<"No videos published yet!"<<endl; // Write a message indicating no videos published to the file
        }
        file.close(); // Close the file
        cout<<"Data written to file: "<<filename<<endl; // Output a message indicating successful writing to the file
    }
    else{ // If the file cannot be opened
        cout<<"Unable to open file: "<<filename<<endl; // Output a message indicating inability to open the file
    }
}

int main(){ // Define the main function
    YouTube_Channel ytChannel; // Declare an object of YouTube_Channel class
    string Name, OwnerName; // Declare variables to store the name and owner's name of the YouTube channel
    int SubscribersCount; // Declare a variable to store the number of subscribers
    list<string> PublishedVideoTitles; // Declare a list to store the published video titles
    cout<<"Enter the name of the YouTube channel: "<<endl; // Prompt the user to enter the name of the YouTube channel
    getline(cin, Name); // Read the name of the YouTube channel from the user
    cout<<"Enter the name of the owner of the YouTube channel: "<<endl; // Prompt the user to enter the owner's name of the YouTube channel
    getline(cin, OwnerName); // Read the owner's name of the YouTube channel from the user
    cout<<"Enter the number of subscribers of the YouTube channel: "<<endl; // Prompt the user to enter the number of subscribers
    cin>>SubscribersCount; // Read the number of subscribers from the user
    cout<<"Enter the number of videos published by the YouTube channel: "<<endl; // Prompt the user to enter the number of videos published
    int n; // Declare a variable to store the number of videos published
    cin>>n; // Read the number of videos published from the user
    cout<<"Enter the titles of the videos: "<<endl; // Prompt the user to enter the titles of the videos
    for(int i=0; i<n; i++){ // Loop to read each video title from the user
        string title; // Declare a variable to store the video title
        cin>>title; // Read the video title from the user
        PublishedVideoTitles.push_back(title); // Add the video title to the list of published video titles
    }

    ytChannel.Name = Name; // Assign the name of the YouTube channel to the object
    ytChannel.OwnerName = OwnerName; // Assign the owner's name of the YouTube channel to the object
    ytChannel.SubscribersCount = SubscribersCount; // Assign the number of subscribers to the object
    ytChannel.PublishedVideoTitles = PublishedVideoTitles; // Assign the list of published video titles to the object
    cout<<"Name: "<<ytChannel.Name<<endl; // Output the name of the YouTube channel
    cout<<"Owner Name: "<<ytChannel.OwnerName<<endl; // Output the owner's name of the YouTube channel
    cout<<"Subscribers: "<<ytChannel.SubscribersCount<<endl; // Output the number of subscribers
    cout<<"Videos: "<<endl; // Output the label for videos
    for(string vids: ytChannel.PublishedVideoTitles){ // Loop to output each published video title
        cout<<vids<<endl; // Output the published video title
    }
    write_YouTube_Channel(ytChannel, "YouTube_Channel.txt"); // Call the function to write YouTube channel data to a file
    return 0; // Exit the program
}
