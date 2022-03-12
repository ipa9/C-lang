using namespace std;

void reverse(string &str, int k)
{
    static int i = 0;

    if (k == str.length()) {
        return;
    }

    reverse(str, k + 1);

    if (i <= k) {
        swap(str[i++], str[k]);
    }
}

int main()
{
    string str;
    cin>> str;

    reverse(str, 0);
    cout <<str;

    return 0;
}
