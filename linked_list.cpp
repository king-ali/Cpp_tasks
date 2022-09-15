#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
  int value;
  struct node *next;
};


int main(){

    /* Initialize nodes */
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    /* Allocate memory */
    one = new node;
    two = new node;
    three = new node;

    // Assign value values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // print the linked list value
    head = one;
    while (head != NULL) {
    cout << head->value<<" ";
    head = head->next;
    }

    return 0;
}