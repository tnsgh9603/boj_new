#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

class Document {
public:
    int deadline;
    int index;
    Document(int deadline, int index) : deadline(deadline), index(index) {}
};

bool compareDocuments(const Document &a, const Document &b) {
    return a.deadline < b.deadline;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int docCount;
    cin >> docCount;

    vector<Document> docs;
    for (int i = 0; i < docCount; ++i) {
        int deadline;
        cin >> deadline;
        docs.emplace_back(deadline, i);
    }

    sort(docs.begin(), docs.end(), compareDocuments);

    vector<int> result(docCount);
    int currentDay = 1;

    for (int i = 0; i < docCount; ++i) {
        result[docs[i].index] = currentDay;
        currentDay++;
    }

    for (int i = 0; i < docCount; ++i) {
        cout << result[i] << ' ';
    }

    return 0;
}
