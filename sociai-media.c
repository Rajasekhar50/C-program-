#include <stdio.h>
#include <string.h>

struct Account {
    char username[50];
    int num_followers;
    int num_posts;
};

int main() {
    struct Account user1;
    strcpy(user1.username, "rajaram");
    user1.num_followers = 1500;
    user1.num_posts = 45;

    printf("Username: %s\n", user1.username);
    printf("Followers: %d\n", user1.num_followers);
    return 0;
}
