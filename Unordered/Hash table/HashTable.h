int main() {
    HashTable hashTable(10);

    // Insert some integers
    hashTable.insert(5);
    hashTable.insert(15);
    hashTable.insert(25);

    // Search for integers
    int searchKey1 = 15;
    int searchKey2 = 10;
    std::cout << "Search for " << searchKey1 << ": " << (hashTable.search(searchKey1) ? "Found" : "Not Found") << std::endl;
    std::cout << "Search for " << searchKey2 << ": " << (hashTable.search(searchKey2) ? "Found" : "Not Found") << std::endl;

    // Remove an integer
    int removeKey = 15;
    hashTable.remove(removeKey);
    std::cout << "Search for " << removeKey << " after removal: " << (hashTable.search(removeKey) ? "Found" : "Not Found") << std::endl;

    return 0;
}
