class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> letterLogs;
        vector<string> digitLogs;
        for (const auto& log : logs) {
            int idx = log.find(' ');
            if (log[idx+1] >= 'a' && log[idx+1] <= 'z') {
                letterLogs.push_back(log);
            } else {
                digitLogs.push_back(log);
            }
        }
        sort(letterLogs.begin(), letterLogs.end(), [](const string &log1, const string &log2) {
            int l1Idx = log1.find(' ');
            int l2Idx = log2.find(' ');
            string lc1 = log1.substr(l1Idx + 1);
            string lc2 = log2.substr(l2Idx + 1);
            return lc1 == lc2 ? log1 < log2 : lc1 < lc2;
        });
        letterLogs.insert(letterLogs.end(), digitLogs.begin(), digitLogs.end());
        return letterLogs;
    }
};