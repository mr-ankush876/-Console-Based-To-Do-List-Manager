# -Console-Based-To-Do-List-Manager
A simple C++ console application that allows users to manage their daily tasks efficiently. This lightweight program supports adding tasks, viewing the task list, marking tasks as complete, and removing tasks — all from the terminal.

🚀 Features
- Add Tasks: Input a task name and store it in the list.
- View Tasks: Display all tasks with their completion status.
- Mark as Complete: Update a task to show it's done.
- Remove Tasks: Delete a task from the list by its number.
📦 Code Overview
The application uses a Task struct to represent each to-do item, with two fields:
struct Task {
    string name;
    bool done;
};


All tasks are stored in a vector<Task> container, allowing dynamic addition and removal.
Menu Options
The program runs in an infinite loop, presenting the user with the following choices:
1. Add
2. View
3. Mark task as Complete
4. Remove Task


Each option is handled with a conditional block (if-else if) to perform the corresponding action.
Sample Output
1.Add  2.View  3. mark task as Complete  4.Remove Task
choise: 1
Task: Buy groceries

1.Add  2.View  3. mark task as Complete  4.Remove Task
choise: 2
1. [ ] Buy groceries


🛠️ How It Works
- Add Task: Prompts the user to enter a task name. The task is added with done = false.
- View Tasks: Iterates through the task list and displays each task with a checkbox ([X] for completed, [ ] for pending).
- Mark Complete: Asks for the task number and sets done = true for that task.
- Remove Task: Deletes the task at the specified index using vector::erase.
⚠️ Known Issues
- Minor typos in prompts (e.g., "choise" should be "choice", "invalide" should be "invalid").
- No input validation for non-integer inputs.
- No exit option — the loop runs indefinitely.
✅ Improvements You Can Make
- Add an option to exit the program gracefully.
- Implement input validation to handle incorrect types.
- Save tasks to a file for persistence across sessions.
- Sort tasks or categorize them by priority or deadline.
📚 Requirements
- C++11 or later
- Any standard C++ compiler (e.g., g++, clang)
🧠 Author
Created as a beginner-friendly project to practice basic C++ concepts like:
- Structs
- Vectors
- Loops and conditionals
- Console I/O

Let me know if you'd like a logo, banner, or even a version with file-saving capabilities.
