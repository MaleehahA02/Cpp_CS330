/* This code simulates a game of War between 2 players. In involves a 10 card deck with values between 2 and 11. 
Each round, the players play the top card of their hand and whoever has a higher value card wins the round and collects the played cards. 
The game ends when the losing player has no cards left in their hand.  */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Node class for linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Linked list class
class LinkedList {
public:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Add node/card at the end of the list
    void addNode(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Count the number of cards in players' hand
    int countCards() {
        int count = 0;
        Node* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }
};

// Randomly shuffle the deck
class DeckShuffler {
public:
    void shuffleList(LinkedList& deck) {
        srand(time(0));
        int size = deck.countCards();

        for (int i = 0; i < size - 1; i++) {
            Node* current = deck.head;
            int randomIndex = rand() % size;
            int count = 0;

            while (count < randomIndex) {
                current = current->next;
                count++;
            }

            swap(deck.head->data, current->data);
        }
    }
};

// Divide deck equally among players
class DeckDivider {
public:
    void divide(LinkedList& deck, LinkedList& hand1, LinkedList& hand2) {
        Node* current = deck.head;
        int count = 0;

        while (current != nullptr) {
            if (count < 5) {
                hand1.addNode(current->data);
            } else {
                hand2.addNode(current->data);
            }

            current = current->next;
            count++;
        }
    }
};

class DeckPrinter {
public:
    void printList(const LinkedList& list) {
        Node* current = list.head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList deck;
    LinkedList player1_deck;
    LinkedList player2_deck;

    // Create a deck of 10 cards with values between 2 and 11
    for (int i = 2; i <= 11; i++) {
        deck.addNode(i);
    }

    // Shuffle the deck
   DeckShuffler shuffler;
    shuffler.shuffleList(deck);

    // Divide the deck between each player
    DeckDivider divider;
    divider.divide(deck, player1_deck, player2_deck);

    // Print what cards each player has
    DeckPrinter printer;
    cout << "Player 1 has ";
    printer.printList(player1_deck);
    cout << " cards." << endl;
    cout << "Player 2 has ";
    printer.printList(player2_deck);
    cout << " cards." << endl;

    int round_num = 1;
    while (player1_deck.head != nullptr && player2_deck.head != nullptr) {
        cout << "Round " << round_num << ":" << endl;
        int player1_card = player1_deck.head->data;
        int player2_card = player2_deck.head->data;
        cout << "Player 1 plays: " << player1_card << endl;
        cout << "Player 2 plays: " << player2_card << endl;

        if (player1_card > player2_card) {
            cout << "Player 1 wins the round!" << endl;
            player1_deck.addNode(player1_card);
            player1_deck.addNode(player2_card);
        } else if (player2_card > player1_card) {
            cout << "Player 2 wins the round!" << endl;
            player2_deck.addNode(player2_card);
            player2_deck.addNode(player1_card);
        }

        player1_deck.head = player1_deck.head->next;
        player2_deck.head = player2_deck.head->next;
        round_num++;
    }

    // Determine the winner of the game

    // Print the final number of cards for each player
    cout << "Player 1 has " << player1_deck.countCards() << " cards remaining." << endl;
    cout << "Player 2 has " << player2_deck.countCards() << " cards remaining." << endl;

    if (player1_deck.head != nullptr) {
        cout << "Player 1 wins the game!" << endl;
    } else if (player2_deck.head != nullptr) {
        cout << "Player 2 wins the game!" << endl;
    return 0;}
}
