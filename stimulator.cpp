#include <bits/stdc++.h>
#include <unistd.h>
#define int long long
#define bigint __int128_t
#define short int32_t
#define float long double
#define all(x) x.begin(), x.end()
#define fastio                    \
    std::ios::sync_with_stdio(0); \
    std::cin.tie(NULL);           \
    std::cout.tie(NULL)
#define mod1 1000000007
#define mod2 998244353

using namespace std;

const int mod = mod1;

const int maxN = 2e5;
int n, m;

map<string, int> ctoimp;
map<string, int> ptoimp;
map<int, string> itocmp;
map<int, string> itopmp;
map<string, int> contributors[maxN];
int freeTime[maxN];
array<int, 5> projects[maxN];
map<string, vector<int>> skills[12];
// 0 -> duration
// 1 -> score
// 2 -> best_before
// 3 -> roles
vector<pair<string, int>> roles[maxN];

unsigned long mix(unsigned long a, unsigned long b, unsigned long c) {
    a = a - b;
    a = a - c;
    a = a ^ (c >> 13);
    b = b - c;
    b = b - a;
    b = b ^ (a << 8);
    c = c - a;
    c = c - b;
    c = c ^ (b >> 13);
    a = a - b;
    a = a - c;
    a = a ^ (c >> 12);
    b = b - c;
    b = b - a;
    b = b ^ (a << 16);
    c = c - a;
    c = c - b;
    c = c ^ (b >> 5);
    a = a - b;
    a = a - c;
    a = a ^ (c >> 3);
    b = b - c;
    b = b - a;
    b = b ^ (a << 10);
    c = c - a;
    c = c - b;
    c = c ^ (b >> 15);
    return c;
}

int rand(int a, int b) { return a + rand() % (b - a + 1); }

int32_t main(void) {
#ifdef LOCAL_ENV
    cout.setf(ios::unitbuf);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    unsigned long seed = mix(clock(), time(NULL), getpid());
    srand(seed);
    fastio;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ctoimp[s] = i;
        itocmp[i] = s;
        int sc;
        cin >> sc;
        for (int j = 0; j < sc; j++) {
            string skill;
            int level;
            cin >> skill >> level;
            contributors[i][skill] = max(contributors[i][skill], level);
            skills[level][skill].push_back(i);
        }
    }
    for (int i = 0; i < m; i++) {
        string pname;
        cin >> pname;
        ptoimp[pname] = i;
        itopmp[i] = pname;
        cin >> projects[i][0] >> projects[i][1];
        cin >> projects[i][2] >> projects[i][3];
        projects[i][4] = i;
        for (int j = 0; j < projects[i][3]; j++) {
            string skill;
            int level;
            cin >> skill >> level;
            roles[i].push_back({skill, level});
        }
    }
    random_shuffle(projects, projects + m);
    int count = 0;
    vector<pair<int, vector<int>>> ans;
    for (int i = 0; i < m; i++) {
        set<int> added;
        vector<pair<int, string>> temp;
        bool flag = 1;
        map<string, int> maxLevel;
        for (auto role : roles[projects[i][4]]) {
            maxLevel[role.first] = role.second;
            int foundContributor = -1;
            vector<int> tttt;
            for (int i = role.second; i <= 10; i++) tttt.push_back(i);
            random_shuffle(all(tttt));
            for (int l : tttt) {
                if (skills[l][role.first].size()) {
                    foundContributor = skills[l][role.first][rand(0, skills[l][role.first].size() - 1)];
                    if (added.find(foundContributor) == added.end()) {
                        added.insert(foundContributor);
                        temp.push_back({foundContributor, role.first});
                        break;
                    } else
                        foundContributor = -1;
                }
            }
            if (foundContributor == -1) {
                // exit(-1);
                flag = 0;
                break;
            }
        }
        if (flag) {
            ans.push_back({projects[i][4], {}});
            for (auto itr : temp) {
                ans.back().second.push_back(itr.first);
                int lastLevel = contributors[itr.first][itr.second];
                int newLevel = max(lastLevel, maxLevel[itr.second]);
                if (newLevel != lastLevel)
                    skills[lastLevel + 1][itr.second].push_back(itr.first);
                // }
            }
        }
    }
    // cerr << projects[0][4] << ' ';
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++) {
        cout << itopmp[ans[i].first] << '\n';
        for (int j : ans[i].second) {
            cout << itocmp[j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}