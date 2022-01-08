#include<iostream>

using namespace std;

class Project
{
private:
    string admin_password;
    string user_password;
    string pass;
public:
    void password(){
        admin_password = "admin@123";
        user_password = "student@123";
    }
    int user_login();
    int admin_login();
    void add_grades();
    void view_grades();
};

int Project :: admin_login(){
    cout << "\nEnter Admin Password: " << endl;
    cin >> pass;
    if(pass == admin_password){
        return 1;
    }
    else{
        return -1;
    }
}

int Project :: user_login(){
    cout << "\nEnter User Password: " << endl;
    cin >> pass;
    if(pass == user_password){
        return 1;
    }
    else{
        return -1;
    }
}

void Project :: add_grades(){
    // add code here
}

void Project :: view_grades(){
    // add code here
}

int main(){
    int login_switch;
    int grades_switch;
    int status;
    int admin_status;
    int i;

    Project report_card;
    report_card.password();

    cout << "\n\t\t\t OOP Mini Project\n" << endl;
    do{
        cout << "\nMenu..." << endl;
        cout << "\n1.Admin Login" << endl;
        cout << "\n2.User Login" << endl;
        cout << "\n3.End Program" << endl;
        cin >> login_switch;

        switch(login_switch){
            case 1: {
                status = report_card.admin_login();
                if(status == 1){
                    do{
                        cout << "\n1. Add grades" << endl;
                        cout << "\n2. View grades" << endl;
                        cout << "\n3. Previous Menu" << endl;
                        cout << "\n4. End Program" << endl;
                        cin >> grades_switch;

                        switch(grades_switch){
                            case 1: {
                                report_card.add_grades();
                                break;
                            }
                            case 2: {
                                report_card.view_grades();
                                break;
                            }
                            case 3: {
                                break;
                            }
                            case 4: {
                                return 0;
                            }
                            default: {
                                cout << "\nInvalid Entry..." << endl;
                                break;
                            }
                        }
                        if(grades_switch == 3){
                            break;
                        }
                    }while(grades_switch == 1 || grades_switch == 2);
                break;  
                // continue;     
                }       
                else{
                    cout << "\nInvalid Password...." << endl;
                    // break;
                    // return 0;
                }
                // break;
                continue;
            }
                case 2: {
                    status = report_card.user_login();
                    if(status == 1){
                        
                        do{

                            cout << "\n1. View grades" << endl;
                                cout << "\n2. Previous Menu" << endl;
                                cout << "\n3. End Program" << endl;
                            cin >> grades_switch;

                            switch(grades_switch){
                                case 1: {
                                    report_card.view_grades();
                                    break;
                                }
                                case 2: {
                                    break;
                                }
                                case 3: {
                                    return 0;
                                }
                                default: {
                                    cout << "\nInvalid Entry..." << endl;
                                    break;
                                }
                            }
                        }while(grades_switch == 1);
                    }
                    else{
                        cout << "\nInvalid Password..." << endl;
                        // break;
                    }
                    // break;
                }

                case 3: {
                    return 0;
                }
                case 4: {
                    cout << "\nInvalid Entry...." << endl;
                    break;
                }

                cout << "\nPress 1 to continue...." << endl;
                cin >> i;
            }
        }while(i == 1);

    return 0;
}


