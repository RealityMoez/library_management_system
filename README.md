# Library Management System (C++)

This is a C++ based Library Management System implemented as a Visual Studio Project. The system allows administrators to create user accounts and users to interact with the library catalog.

## Features

1. **Admin Login**: The system includes an admin login feature for managing the library.
2. **User Account Creation**: Admins can create user accounts with various details like ID, name, email, password, phone number, and account type.
3. **User Login**: Users can login into the system using their ID and password.
4. **Access Menu**: Users can view all books, search for a book, and buy a book (only for staff account type).

## Installation

1. Clone this repository to your local machine.
2. Open the project in Visual Studio.
3. Build and run the project.

## Usage

1. **Admin Login**: Enter the admin username and password. The system accepts four admin credentials: `lib1/librarian1`, `lib2/librarian2`, `lib3/librarian3`, and `lib4/librarian4`.
2. **Create User Account**: Choose option 1 after admin login to create a new user account. Input the necessary details when prompted.
3. **User Login**: After the account is created, the user can log in using their ID and password.
4. **Access Menu**: After logging in, users can access the library catalog. They can choose to view all books, search for a specific book by title or production year, or buy a book (only available for staff accounts).

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.