Overview:
This c++ application is meant to give users a studying game.
Users can enter quiz questions in the main file, add them to 
an existing game, and then hit play! There is an Option (one of the
potential answers to a quiz question), a Question (the actual question
being asked), and a StudyGame (a game for the user to play).

Instructions for Running:
For running tests (change file directory for your computer):
g++ -std=c++17 -I/Users/cformanek/Documents/SE320/SE320OpenSource/googletest/googletest/include/gtest -L/usr/local/build/lib -lgtest -lgtest_main *.cpp -o test_executable
./test_executable

For running regularly
g++ -std=c++17 *.cpp -o source
./source

List of Five Issues to Fix:
1. The getOption() method in Question.cpp can access options outside the given range. Fix this bug so that the error is handled.
2. Make is so that the number of Questions in a StudyGame can change (the array can resize dynamically). This means that if a user defines a StudyGame with one question, but they decide to add a second, this will work.
3. When the program is run, it will ask the user if they want to press 1 or 2 to continue or quit. What happens if a user puts "banana"? Implement this error handling.
4. Add an option for users to shuffle the order in which quiz questions are asked
5. Say you have a StudyGame with two questions. Even if you only add one question, both questions become a copy of the first! Fix the function addQuestion() in StudyGame.cpp.