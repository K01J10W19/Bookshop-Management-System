#include "BookManagementSystem.hpp"

int main(){
    pass();
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, HOST, USER, PASS, DATABASE, PORT, NULL, 0);
    int choice;
    if(conn){
        while(1){
            system("cls");
            main_menu();
        }
    }else{
        system("cls");
        cout << "Error While connection to database." << endl << "Contact Tech Expert." << endl;
		getch();
    }
    return 0;
}