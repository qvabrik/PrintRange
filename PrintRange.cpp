template<typename IteratorType>
void PrintRange(IteratorType it, IteratorType end) {
    bool isFirst = true;
    for (; it != end; ++it) {
        if (isFirst) {
            cout << *it;
            isFirst = false;
            continue;
        }
        cout << " "s << *it;
    }
    cout << endl;
}