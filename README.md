
# Fun Game :)

Authors: [Caleb DeSouza](https://github.com/c9leb), [Riya Patel](https://github.com/Patelriyaaa), [Ezekiel Pogue](https://github.com/ezpogue), [Matthew Ramer](https://github.com/MatthewRamer)

## Project Description
For our project we will be making a Pokemon inspired text based RPG. In the Pokemon series of games, the player controls a Pokemon trainer. The gameplay is focused around collecting monsters, training them to be stronger, and battling them against other trainers. It is effectively legal dogfighting marketed towards children.
### Language and Tools
We will be writing this game in [C++](https://www.cplusplus.com/), and will be utilizing tools such as [GitHub](https://github.com/), [GoogleTest](https://github.com/google/googletest), [Valgrind](https://www.valgrind.org/), etc. 
### Input and Output
For input and output we will be using the terminal. The game will output the current situation, along with options on how to proceed. The user will then input what they want to do, and the game will respond accordingly. 
### Features
Features of the game will include core Pokemon features, such as battling monsters, catching monsters, using items, and [whiting out because of Whitney's Miltank](https://rage-quit.fandom.com/wiki/Whitney%27s_Miltank_(Pok%C3%A9mon)).

## Class Diagram
Our class diagrams can be viewed [here.](https://lucid.app/lucidchart/bead12b5-0e52-4913-a2b0-adf8b4624c81/edit?viewport_loc=13%2C-36%2C2219%2C989%2C0_0&invitationId=inv_2795bc8a-8a70-4143-a02d-184a171e0b08)
 
##Design Patterns
###Composite Pattern
We utilize the composite pattern in our Move class. Because each Pokemon has 4 moves it can use, we thought it would be useful to aggregate all 4 Moves into a composite called Move_Set. This allows us to use a singular interface to use a specific Move or a random Move out of the 4. This allows our code to be more user friendly and accessible due to the interface being the same for all use cases.

###Strategy Pattern
We plan to utilize the strategy pattern in the trainer AI. In the Pokemon games, each trainer has a different playstyle, and may have a set strategy they are using. Using the strategy pattern, we can make it easier to add new trainers with unique strategies, or change the strategy of an existing trainer. This allows our code to be more extensible, in case we wanted to expand our game later.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
