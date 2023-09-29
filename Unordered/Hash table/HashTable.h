
#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <vector>

class HashTable {
private:
    std::vector<int> table;
    int tableSize;

public:
    HashTable(int size) : tableSize(size), table(size, -1) {}

    int hash(int key) const {
        return key % tableSize;
    }

    void insert(int key) {
        int index = hash(key);
        while (table[index] != -1) {
            index = (index + 1) % tableSize;
        }
        table[index] = key;
    }


    bool search(int key) const {
        int index = hash(key);
        int originalIndex = index;
        while (table[index] != -1) {
            if (table[index] == key) {
                return true;
            }
            index = (index + 1) % tableSize;
            if (index == originalIndex) {
                return false;
            }
        }
        return false;
    }

    void remove(int key) {
        int index = hash(key);
        int originalIndex = index;
        while (table[index] != -1) {
            if (table[index] == key) {
                table[index] = -1;
                return;
            }
            index = (index + 1) % tableSize;
            if (index == originalIndex) {
                return;
            }
        }
    }
};
#endif // HASHTABLE_H
