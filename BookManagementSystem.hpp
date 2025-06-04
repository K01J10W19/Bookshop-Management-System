#ifndef BOOKMANAGEMENTSYSTEM_HPP
#define BOOKMANAGEMENTSYSTEM_HPP

// +----------------------------------------+
// |              Header Files           |
// +----------------------------------------+
#include <iostream>
#include <string>
#include <windows.h>
#include <mysql.h>
#include <sstream>
#include <conio.h>
#define HOST "127.0.0.1"
#define USER "root"
#define PASS ""
#define DATABASE "bookshop"
#define PORT 3307
#define PASSWORD 1234

using namespace std;

// +----------------------------------------+
// |              Global Variable           |
// +----------------------------------------+
extern MYSQL *conn;
extern MYSQL_RES *res_set;
extern MYSQL_ROW row;
extern stringstream stmt;
extern const char *q;
extern string query;
typedef struct
{
    int date;
    int month;
    int year;
}date;

// +----------------------------------------+
// |                Classes                 |
// +----------------------------------------+
class books{
    int id;
    string name;
    string auth;
    int price;
    int qty;
public:
    void add();
    void update_price();
    void search();
    void update();
    void display();
};

class suppliers{
    int id;
    string name;
    string addr_line1;
    string addr_line2;
    string city;
    string state;
    long int phn;
public:
    void add_supp();;
    void remove_supp();
    void search_id();
};

class purchases{
    int id;
    int book_id;
    int supp_id;
    int qty;
    date dt_ordered;
    int eta;
    char received;
    int inv;
public:
    void new_ord();
    void view();
    void mark_cancel();
    void mark_received();
};

class employees{
    int id;
    string name;
    string addr_line1;
    string addr_line2;
    string city;
    string state;
    long int phn;
    date dt_joining;
    long int salary;
    string mgr_status;
public:
    void add_emp();
    void search_emp();
    void assign_mgr_stat();
    void display();
    void update_sal();
};

class members{
    int id;
    string name;
    string addr_line1;
    string addr_line2;
    string city;
    string state;
    long int phn;
    date beg_date;
    date end_date;
    string valid;
public:
    void add_mem();
    void refresh();
    void search_mem();
};

class sales{
    int id;
    int mem_id;
    int book_id;
    int qty;
    int amount;
    date dt_sales;
public:
    void add();
    void find_total_sales();
};

// +----------------------------------------+
// |                Menu Functions          |
// +----------------------------------------+
void book_menu();
void sup_menu();
void pur_menu();
void emp_menu();
void mem_menu();
void sal_menu();
void main_menu();
// +----------------------------------------+
// |             Password Functions         |
// +----------------------------------------+
void pass();
#endif