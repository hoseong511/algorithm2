template<typename T>
std::ostream& operator<<(std::ostream& s, const std::vector<T>& vec)
{
	s.put('[');
	char c[3] = {0, ' ', 0};
	for (size_t i = 0; i < vec.size(); i++)
	{
		s << c << vec[i];
		c[0] = ',';
	}
	return s << "]\n";
}

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int begin = 0;
        int end = s.size() / 2;
        int rbegin = s.size() - 1;
        while (begin < end) {
            char tmp = s[begin];
            s[begin] = s[rbegin];
            s[rbegin] = tmp;
            begin++;
            rbegin--;
        }
    }
};