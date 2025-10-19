#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;

    map<string, string> current_to_original;
    map<string, string> original_to_current;

    for (int i = 0; i < q; i++) {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;

        string original;
        if (current_to_original.count(old_handle)) {
            original = current_to_original[old_handle];
            current_to_original.erase(old_handle);
        } else {
            original = old_handle;
        }

        current_to_original[new_handle] = original;
        original_to_current[original] = new_handle;
    }

    cout << original_to_current.size() << '\n';
   for (auto it = original_to_current.begin(); it != original_to_current.end(); it++) {
    cout << it->first << " " << it->second << '\n';
}

    return 0;
}
