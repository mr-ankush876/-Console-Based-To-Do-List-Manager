// TO DO LIST
//Build a simple console-based To-do list manager that allows users to  add, view, mark task as to complete and remove tasks.
#include <iostream>
#include <vector>
using namespace std;

struct Task {
    string name;
    bool done;
};

int main() {
    vector<Task> tasks;
    int ch;

    while (true) {
        cout << "\n1.Add  2.View  3. mark task as Complete  4.Remove Task\nchoise: ";
        cin >> ch;
        cin.ignore();

        if (ch == 1) {
            Task n;
            cout << "Task: ";
            getline(cin, n.name);
            n.done = false;
            tasks.push_back(n);
        }
        else if (ch == 2) {
            if (tasks.empty()){
             cout << "No tasks  \n";
            }else 
                for (int i = 0; i < tasks.size(); i++) {
                    
                    cout << i+1 << ". [" << (tasks[i].done ? "X" : " ") << "] " << tasks[i].name << "\n" << endl;
                
                }
        }
        else if (ch == 3) {
            int n;
            cout << "mark task as Complete task no: " << " " << endl; 
            cin >> n;
            if (n > 0 && n <= tasks.size()) tasks[n - 1].done = true;
            
        }
        else if (ch == 4) {
            int n;
             cout << "Remove task no: ";
              cin >> n;
            if (n > 0 && n <= tasks.size()) {
                tasks.erase(tasks.begin() + (n - 1));
                cout << "removed task\n";
            }else{
                    cout<<"invalide";
            }
        }
        else {
            cout<<" invalide";
        }
            
}
}