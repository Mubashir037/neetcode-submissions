class MyHashMap {
public:

  vector<pair<int, int>> arr;

    MyHashMap() {
        // Constructor can stay empty
    }
    
    void put(int key, int value) {
        // Look if the key already exists
        auto it = find_if(arr.begin(), arr.end(), [key](const auto& p) {
            return p.first == key;
        });

        if (it != arr.end()) {
            it->second = value; // Update existing key
        } else {
            arr.push_back({key, value}); // Insert new key
        }
    }
    
    int get(int key) {
        // Find by key matching pair.first
        auto it = find_if(arr.begin(), arr.end(), [key](const auto& p) {
            return p.first == key;
        });

        if (it != arr.end()) {
            return it->second; // Return the actual value
        }
        return -1;
    }
    
    void remove(int key) {
        // Find by key matching pair.first
        auto it = find_if(arr.begin(), arr.end(), [key](const auto& p) {
            return p.first == key;
        });

        if (it != arr.end()) {
            arr.erase(it); // Erase the element at this iterator
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */