#include <iostream>
#include <string>
using namespace std;


struct Patient {
    int id;
    string name;
    int age;
    string disease;
    Patient* next;
};


class PatientList {
private:
    Patient* head;

public:
    PatientList() : head(nullptr) {}

    
    void addPatient(int id, string name, int age, string disease) {
        Patient* newPatient = new Patient{id, name, age, disease, nullptr};
        if (!head) {
            head = newPatient;
        } else {
            Patient* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newPatient;
        }
        cout << "Patient added successfully!\n";
    }

   
    void displayPatients() {
        if (!head) {
            cout << "No patients in the list.\n";
            return;
        }
        Patient* temp = head;
        cout << "\n--- Patient Records ---\n";
        while (temp) {
            cout << "ID: " << temp->id
                 << ", Name: " << temp->name
                 << ", Age: " << temp->age
                 << ", Disease: " << temp->disease << endl;
            temp = temp->next;
        }
    }

    
    void deletePatient(int id) {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }
        if (head->id == id) {
            Patient* toDelete = head;
            head = head->next;
            delete toDelete;
            cout << "Patient deleted successfully!\n";
            return;
        }
        Patient* temp = head;
        while (temp->next && temp->next->id != id) {
            temp = temp->next;
        }
        if (temp->next) {
            Patient* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            cout << "Patient deleted successfully!\n";
        } else {
            cout << "Patient with ID " << id << " not found.\n";
        }
    }
};


int main() {
    PatientList list;
    int choice;

    do {
        cout << "\n--- Patient Management System ---\n";
        cout << "1. Add Patient\n";
        cout << "2. Display Patients\n";
        cout << "3. Delete Patient\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id, age;
            string name, disease;
            cout << "Enter ID: "; cin >> id;
            cout << "Enter Name: "; cin >> name;
            cout << "Enter Age: "; cin >> age;
            cout << "Enter Disease: "; cin >> disease;
            list.addPatient(id, name, age, disease);
        } else if (choice == 2) {
            list.displayPatients();
        } else if (choice == 3) {
            int id;
            cout << "Enter ID to delete: ";
            cin >> id;
            list.deletePatient(id);
        }
    } while (choice != 4);

    cout << "Exiting program...\n";
    return 0;
}