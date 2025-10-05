import os

# Employee class encapsulating employee details
class Employee:
    def __init__(self, emp_id, name, age, designation):
        self.__emp_id = emp_id
        self.__name = name
        self.__age = age
        self.__designation = designation

    # Getters
    def get_id(self):
        return self.__emp_id

    def get_name(self):
        return self.__name

    def get_age(self):
        return self.__age

    def get_designation(self):
        return self.__designation

    # Setters
    def set_name(self, name):
        self.__name = name

    def set_age(self, age):
        self.__age = age

    def set_designation(self, designation):
        self.__designation = designation

    def to_string(self):
        return f"{self.__emp_id},{self.__name},{self.__age},{self.__designation}"

    @staticmethod
    def from_string(emp_string):
        emp_id, name, age, designation = emp_string.strip().split(',')
        return Employee(emp_id, name, int(age), designation)

# Manager class handling all operations
class EmployeeManager:
    def __init__(self, data_file="employees.txt"):
        self.data_file = data_file
        self.employees = []
        self.load_employees()

    def load_employees(self):
        if os.path.exists(self.data_file):
            with open(self.data_file, "r") as file:
                for line in file:
                    self.employees.append(Employee.from_string(line))

    def save_employees(self):
        with open(self.data_file, "w") as file:
            for emp in self.employees:
                file.write(emp.to_string() + "\n")

    def add_employee(self, name, age, designation):
        emp_id = str(len(self.employees) + 1)
        new_employee = Employee(emp_id, name, age, designation)
        self.employees.append(new_employee)
        self.save_employees()
        print(f"Employee {name} added successfully!")

    def update_employee(self, emp_id, name=None, age=None, designation=None):
        for emp in self.employees:
            if emp.get_id() == emp_id:
                if name:
                    emp.set_name(name)
                if age:
                    emp.set_age(age)
                if designation:
                    emp.set_designation(designation)
                self.save_employees()
                print(f"Employee ID {emp_id} updated successfully!")
                return
        print(f"Employee with ID {emp_id} not found.")

    def delete_employee(self, emp_id):
        self.employees = [emp for emp in self.employees if emp.get_id() != emp_id]
        self.save_employees()
        print(f"Employee ID {emp_id} deleted successfully!")

    def view_all_employees(self):
        if not self.employees:
            print("No employees found.")
        else:
            for emp in self.employees:
                print(f"ID: {emp.get_id()}, Name: {emp.get_name()}, Age: {emp.get_age()}, Designation: {emp.get_designation()}")

    def search_employee(self, name=None, designation=None):
        results = [
            emp for emp in self.employees
            if (name and name.lower() in emp.get_name().lower()) or 
               (designation and designation.lower() in emp.get_designation().lower())
        ]
        if results:
            for emp in results:
                print(f"ID: {emp.get_id()}, Name: {emp.get_name()}, Age: {emp.get_age()}, Designation: {emp.get_designation()}")
        else:
            print("No matching employees found.")

# CLI Interface
def cli_menu():
    manager = EmployeeManager()

    while True:
        print("\n--- Employee Management System ---")
        print("1. Add Employee")
        print("2. Update Employee")
        print("3. Delete Employee")
        print("4. View All Employees")
        print("5. Search Employee")
        print("6. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            name = input("Enter name: ")
            age = input("Enter age: ")
            designation = input("Enter designation: ")
            manager.add_employee(name, int(age), designation)
        elif choice == "2":
            emp_id = input("Enter employee ID to update: ")
            name = input("Enter new name (leave blank to keep unchanged): ")
            age = input("Enter new age (leave blank to keep unchanged): ")
            designation = input("Enter new designation (leave blank to keep unchanged): ")
            manager.update_employee(emp_id, name or None, int(age) if age else None, designation or None)
        elif choice == "3":
            emp_id = input("Enter employee ID to delete: ")
            manager.delete_employee(emp_id)
        elif choice == "4":
            manager.view_all_employees()
        elif choice == "5":
            name = input("Search by name (leave blank to skip): ")
            designation = input("Search by designation (leave blank to skip): ")
            manager.search_employee(name or None, designation or None)
        elif choice == "6":
            print("Exiting Employee Management System. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    cli_menu()
