#include <iostream>
#include <string>
#include "../include/database.h"
using namespace std;

void handleCommands(Database& db) {
  string command;
  string query;

  while (true) {

    // prompt for user input
    cout << "Enter command: ";
    getline(cin, command);

    // simple command parsing
    if (command == "exit") {

      cout << "Shutting down database" << endl;
      break;

    } else if (command == "open") {

      cout << "Opening database" << endl;

      if (!db.open("my_database")) {

        cerr << "Error opening database!" << endl;

      } else {

        cout << "Database opened successfully!" << endl;

      }
    } else if (command == "query") {

      cout << "Enter your query: ";
      getline(cin, query);
      db.executeQuery(query);

    } else {

      cout << "Unknown command: " << command << endl;

    }
  }
}

int main(){

  cout << "This will be a database engine some day! For now, welcome to this test." << endl;

  Database db;

  handleCommands(db);

  return 0;
}
