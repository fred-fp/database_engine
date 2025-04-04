#include <iostream>

class Database {
public:
    Database();                          // Constructor
    bool open(const std::string& dbName); // Open the database
    void executeQuery(const std::string& query); // Execute a query
    // Add other database functions as needed
};

