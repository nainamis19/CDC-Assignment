class KidUser : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() override {
        if (age < 12) {
            cout << "You have successfully registered under a Kids Account" << endl;
        } else {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    void requestBook() override {
        if (bookType == "Kids" || bookType == "kids") {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
    }
};
