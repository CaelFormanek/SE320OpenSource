Overview:
This c++ application is meant to give users a studying game.
Users can enter quiz questions in the main file, add them to 
an existing game, and then hit play! There is an Option (one of the
potential answers to a quiz question), a Question (the actual question
being asked), and a StudyGame (a game for the user to play).

Instructions for Running:
g++  *.cpp -o source
./source

List of Five Issues to Fix:
1. addOption() is a function in Question.cpp. Currently, it does not add an option to the question or change the number of questions. Fill out this method, then add a test after "Test addOption() 1" to main that will test whether q->getOption(5)->getOptionStr() is "North Dakota"
2. Make is so that the number of Questions in a StudyGame can change (the array can resize dynamically). This means that if a user defines a StudyGame with one question, but they decide to add a second, this will work.
3. Make it so that the options for a question are in a random order, no matter which order they are initialized in.
4. Add an option for users to shuffle the order in which quiz questions are asked.
5. Say you have a StudyGame with two questions. Even if you only add one question, both questions become a copy of the first! Fix the function addQuestion() in StudyGame.cpp.