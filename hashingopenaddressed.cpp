#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pi (3.141592653589)
#define mod 1e9 + 7
#define ill int long long
#define vi vector<int>
#define vf vector<float>
#define vc vector<char>
#define db double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define minn(a, b, c) min(c, min(a, b))
#define mini(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define repp(j, i, n) for (int j = i; j <= n; j++)
#define ts 13
#define prime 7
class doublehash
{
    int *Hashtable;
    int cs;

public:
    doublehash(){
        Hashtable = new int[ts];
        cs = 0;
        rep(i,ts) Hashtable[i] = -1;
    }
    bool isfull()
    {
        if (cs == ts)
            return true;
        return false;
    }
    int hash1(int key)
    {
        return key % ts;
    }
    int hash2(int key)
    {
        return (prime - (key % prime));
    }
    void insert(int key)
    {
        if (isfull())
            return;

        int idx = hash1(key);
        if (Hashtable[idx] != -1){
            int idx1 = hash2(key);
            int i = 1;
            while (1)
            {
                int newidx = (idx + i*idx1)%ts;
                if (Hashtable[newidx] == -1){
                    Hashtable[newidx] = key;
                    break;
                }
                i++;
            }
        }
        else
            Hashtable[idx] = key;
        cs++;
    }
    bool search(int key)
    {
        int index1 = hash1(key);
        int index2 = hash2(key);
        int i = 0;
        while (Hashtable[(index1 + i * index2) % ts] != key)
        {
            if (Hashtable[(index1 + i * index2) % ts] == -1)
            {
                return false;
            }
            i++;
        }
        return true;
    }
    void displayHash()
    {
        rep(i, ts)
        {
            if (Hashtable[i] != -1)
                cout << i << " --> "
                     << Hashtable[i] << endl;
            else
                cout << i << endl;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    rep(i, n) cin >> arr[i];
    doublehash h;
    rep(i, n) h.insert(arr[i]);
    cout << "1. hashtable is full? \n 2. insert hash. \n 3. search key \n 4. display hash. \n 5. exit" << endl;
    int i;
    cin >> i;
    switch (i)
    {
    case 1: 
        if(h.isfull())
            cout<<"yes"<<endl;
        else 
            cout<<"NO"<<endl;
    case 2:
        int key;
        cin >> key;
        h.insert(key);
    case 3:
        int key1;
        cin >> key1;
        h.search(key1);
    case 4:
        h.displayHash();
    default:
        break;
    }
    return 0;
}