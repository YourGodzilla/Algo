#include <stdio.h>

enum notif_type {EMAIL,SMS};

typedef struct {
    char* title;
    char* message;
    enum notif_type type;
        char *phone_number;
        char *email_address;
}Notification;

void main() {
    Notification sms;
    Notification email;

    sms.type = SMS;
    sms.title = "Greeting";
    sms.message = "Halo Selamat Datang";
    sms.phone_number = "081234567890";

    email.type = EMAIL;
    email.title = "Welcome";
    email.message = "Selamat Datang Di Aplikasi";
    email.email_address = "mail@example.com";

    printf("## NOTIFICATION SMS ##\n");
    printf("to : %s\n",sms.phone_number);
    printf("Message : %s\n",sms.message);

    printf("## NOTIFICATION EMAIL ##\n");
    printf("subject : %s\n",email.title);
    printf("to : %s\n",email.email_address);
    printf("message: %s\n",email.message);
}