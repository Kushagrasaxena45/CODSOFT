#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string name;
    bool completed;

    Task(string taskName) {
        name = taskName;
        completed = false;
    }
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& taskName) {
        tasks.push_back(Task(taskName));
        cout << "Task added successfully!\n";
    }

    void viewTasks() {
        if (tasks.size()==0) {
            cout << "Tasks list empty.\n";
            return;
        }

        cout << "\n--- Current List ---\n";
        for (int i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].name;
            cout << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
        }
    }

    void markCompleted(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].completed = true;
            cout << "Task marked as completed.\n";
        } else {
            cout << "Invalid task number!\n";
        }
    }

    void removeTask(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task removed successfully.\n";
        } else {
            cout << "Invalid task number!\n";
        }
    }
};

int main() {
    ToDoList todo;
    int option;
    string taskName;
    int taskNum;

    do {
        cout << "\n=== To-Do List ===\n";
       cout << "\n=== Options Menu ===\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Select an option: ";
        cin >> option;
        cin.ignore();  

        switch (option) {
            case 1:
                cout << "Enter task name: ";
                getline(cin, taskName);
                todo.addTask(taskName);
                break;
            case 2:
                todo.viewTasks();
                break;
            case 3:
                cout << "Enter task number to mark completed: ";
                cin >> taskNum;
                todo.markCompleted(taskNum);
                break;
            case 4:
                cout << "Enter task number to remove: ";
                cin >> taskNum;
                todo.removeTask(taskNum);
                break;
            case 5:
                cout << "To-Do list program ended...\n";
                break;
            default:
                cout << "Invalid option!\n";
        }

    } while (option != 0);

    return 0;
}
