Vim�UnDo� ;�U��&!��}�xK���	U>�x���   q   5        cout << h[u] + h[v] - 2 * h[anc] + 2 << endl;   f   )      (       (   (   (    _�Ǩ    _�                             ����                                                    &                                                                                                                                                                       (                                                                                                                                _�y�     �              6   #include <bits/stdc++.h>   using namespace std;       typedef long long int lli;   #define int lli   typedef pair<int, int> pii;   typedef vector<int> vi;   typedef vector<bool> vb;   typedef vector<vi> vvi;   typedef vector<lli> vli;   typedef vector<pii> vii;       const int MOD   = 1e9 + 7;   const double PI = acos(-1.0);   7const int xd[4] = {1, 0, -1, 0}, yd[4] = {0, 1, 0, -1};   const int INF   = 1e18;       E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)   #define sz(a) int((a).size())   #define rsz resize   #define pb push_back   #define mp make_pair   #define mt make_tuple   #define eb emplace_back   #define f first   #define s second   $#define all(c) (c).begin(),(c).end()   '#define rall(c) (c).rbegin(),(c).rend()   /#define present(c,x) ((c).find(x) != (c).end())   3#define cpresent(c,x) (find(all(c),x) != (c).end())   1#define rep(i, n)    for(int i = 0; i < (n); ++i)   4#define repA(i, a, n)  for(int i = a; i <= (n); ++i)   4#define repD(i, a, n)  for(int i = a; i >= (n); --i)   #define endl "\n"   #define spc " "   =template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}   >template <typename T> T lcm(T a, T b){return (a*b)/gcd(a,b); }       void solve(){       }       signed main(){       fastio;       
    int T;       cin >> T;           repA(tc, 1, T){           solve();       }           return 0;   }5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _�y�    �                   �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _�y�     �                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _�y�    �   k   l              return 0;�   j   l           �   i   k        �   i   j              solve();�   h   j           �   g   i        �   f   g          signed main(){�   e   g           �   d   f        �   d   e          }�   c   e           �   b   d        �   ]   ^              rep(i, q){�   \   ^           �   [   ]        �   [   \              dfs(0, 0);�   Z   \           �   Y   [        �   T   U              rep(i, n - 1){�   S   U           �   R   T        �   P   Q              g.rsz(n);�   O   Q           �   N   P        �   K   L          void solve(){�   J   L           �   I   K        �   H   I              return up[tv][0] + 1;�   G   I           �   F   H        �   C   D              int tv = v;�   B   D           �   A   C        �   ?   @          int query(int u, int v){�   >   @           �   =   ?        �   ;   <          ,inline bool is_ancestor(int child, int anc){�   :   <           �   9   ;        �   8   9              tout[root] = timer++;�   7   9           �   6   8        �   3   4              for(auto child : g[root]){�   2   4           �   1   3        �   .   /              up[root][0] = p;�   -   /           �   ,   .        �   +   ,          void dfs(int root, int p){�   *   ,           �   )   +        �   '   (          int n, lg, timer = 0;�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5�_�                    )       ����                                                                                                                                                                                                                                                                                                                                                             _�y�     �   (   *   l      vi tin, tout;5�_�                    +       ����                                                                                                                                                                                                                                                                                                                                                             _�y�     �   +   -   m          �   +   -   l    5�_�                    -       ����                                                                                                                                                                                                                                        -                                                                                                                   _�z     �   ,   .   m    5�_�      	              T        ����                                                                                                                                                                                                                                        .                                                                                                                   _�z     �   T   V   o          �   T   V   n    5�_�      
           	   d       ����                                                    L                                                                                                                                                                       N          .                                                                                                                   _�z     �   c   e   o      $        cout << query(u, v) << endl;5�_�   	              
   d       ����                                                    L                                                                                                                                                                       N          .                                                                                                                   _�z     �   c   e   o              << query(u, v) << endl;5�_�   
                 d       ����                                                    L                                                                                                                                                                       N          .                                                                                                                   _�z     �   c   e   o              query(u, v) << endl;5�_�                    d       ����                                                    L                                                                                                                                                                       N          .                                                                                                                   _�z     �   c   e   o      &        int anc = query(u, v) << endl;5�_�                    d       ����                                                    L                                                                                                                                                                       N          .                                                                                                                   _�z     �   c   e   o              int anc = query(u, v) 5�_�                    d       ����                                                    L                                                                                                                                                                       N          .                                                                                                                   _�z!    �   d   f   p              �   d   f   o    5�_�                    _        ����                                                    L                                                                                                                                                                       N          .                                                                                                                   _�z�     �   _   a   q          �   _   a   p    5�_�                   L        ����                                                    L                                                                                                                                                                       N          .                                                                                                                   _�z�     �   M   O   s       �   M   O   r    �   L   N   r       �   L   N   q    �   L   M   q    5�_�                    L        ����                                                    L                                                                                                                                                                       P          .                                                                                                                   _�z�     �   K   L              cin >>5�_�                    &        ����                                                                                                                                                                                                                            N          .                                                                                                                   _�z�    �   &   `   r    �   &   (   r       �   &   (   q    5�_�                    �       ����    `                                                                                                                                                                                                                       �          h                                                                                                                   _�z�    �   �   �   �              �   �   �   �    5�_�                    �       ����    `                                                                                                                                                                                                                       �          h                                                                                                                   _�z�     �   �   �                  int b;           cin >> b;5�_�                    �       ����    `                                                                                                                                                                                                                       �          h                                                                                                                   _�z�     �   �   �                  b--;5�_�                   �       ����    `                                                                                                                                                                                                                       �          h                                                                                                                   _�z�     �   �   �                  g[b].pb(i + 1);5�_�                    �       ����    `                                                                                                                                                                                                                       �          h                                                                                                                   _�z�     �   �   �   �              �   �   �   �    5�_�                    �       ����    `                                                                                                                                                                                                                       �          h                                                                                                                   _�z�    �   �   �   �              �   �   �   �    �   �   �   �              int a, b;�   �   �   �    �   �   �   �    5�_�                    �   (    ����    `                                                                                                                                                                                                                       �          h                                                                                                                   _�{    �   �   �   �      1        cout << h[u] + h[v] - 2 * h[anc] << endl;5�_�                    �       ����    `                                                                                                                                                                                                                       �          h                                                                                                                   _�{      �   �   �                  dbg(u, v, anc);5�_�                    �       ����    `                                                                                                                                                                                                                       �          h                                                                                                                   _�{!     �   �   �              dbg(h);5�_�                    (        ����    `                                                                                                                                                                                                                       �          h                                                                                  `           (           v        _�{'   	 �   '   )   �   :   // TO_STRING   0string to_string(char c) { return string(1,c); }   5string to_string(const char* s) { return (string)s; }   (string to_string(string s) { return s; }   string to_string(bool b) {       #ifdef DEBUG   $        return b ? "true" : "false";   	    #else   !        return to_string((int)b);   
    #endif   }   2template<class A> string to_string(complex<A> c) {   0    stringstream ss; ss << c; return ss.str(); }   "string to_string(vector<bool> v) {   9    string res = "{"; rep(i,sz(v)) res += char('0'+v[i]);       res += "}"; return res; }   4template<size_t SZ> string to_string(bitset<SZ> b) {   5    string res = ""; rep(i,SZ) res += char('0'+b[i]);       return res; }   9template<class A, class B> string to_string(pair<A,B> p);   Ktemplate<class T> string to_string(T v) { // containers with begin(), end()       #ifdef DEBUG   '        bool fst = 1; string res = "{";            for (const auto& x: v) {   "            if (!fst) res += ", ";   )            fst = 0; res += to_string(x);   	        }           res += "}"; return res;   	    #else   &        bool fst = 1; string res = "";            for (const auto& x: v) {   !            if (!fst) res += " ";   )            fst = 0; res += to_string(x);   	        }           return res;       
    #endif   }   :template<class A, class B> string to_string(pair<A,B> p) {       #ifdef DEBUG   :        return "("+to_string(p.f)+", "+to_string(p.s)+")";   	    #else   1        return to_string(p.f)+" "+to_string(p.s);   
    #endif   }       // DEBUG   #void DBG() { cerr << "]" << endl; }   5template<class H, class... T> void DBG(H h, T... t) {   9    cerr << to_string(h); if (sizeof...(t)) cerr << ", ";       DBG(t...); }   $#ifdef DEBUG // compile with -DDEBUG   h    #define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)   #else       #define dbg(...) 0   #endif       int n, lg, timer = 0;5�_�                     M        ����                                                                                                                                                                                                                            O          /                                                                                  (           (           v        _�{,   
 �   p   q              return 0;�   o   q           �   n   p        �   n   o              solve();�   m   o           �   l   n        �   k   l          signed main(){�   j   l           �   i   k        �   i   j          }�   h   j           �   g   i        �   a   b              rep(i, q){�   `   b           �   _   a        �   _   `              dfs(0, 0);�   ^   `           �   ]   _        �   W   X              rep(i, n - 1){�   V   X           �   U   W        �   R   S              g.rsz(n);�   Q   S           �   P   R        �   M   N          void solve(){�   L   N           �   K   M        �   J   K              return up[tv][0] + 1;�   I   K           �   H   J        �   E   F              int tv = v;�   D   F           �   C   E        �   A   B          int query(int u, int v){�   @   B           �   ?   A        �   =   >          ,inline bool is_ancestor(int child, int anc){�   <   >           �   ;   =        �   :   ;              tout[root] = timer++;�   9   ;           �   8   :        �   5   6              for(auto child : g[root]){�   4   6           �   3   5        �   0   1              up[root][0] = p;�   /   1           �   .   0        �   .   /              tin[root] = timer++;�   -   /           �   ,   .        �   +   ,          void dfs(int root, int p){�   *   ,           �   )   +        �   '   (              int n, lg, timer = 0;�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              �   L   N           5�_�      !               B   "    ����                                                                                                                                                                                                                            N                                                                                             (           (           v        _�{�     �   A   C   q      '    if(is_ancestor(v, u)) return u + 1;5�_�       #           !   C   "    ����                                                                                                                                                                                                                            N                                                                                             (           (           v        _�{�     �   B   D   q      '    if(is_ancestor(u, v)) return v + 1;5�_�   !   $   "       #   J       ����                                                                                                                                                                                                                            N                                                                                             (           (           v        _�{�    �   I   K   q          return up[tv][0] + 1;5�_�   #   %           $   f   )    ����                                                                                                                                                                                                                            N                                                                                             (           (           v        _�{�     �   e   g   q      5        cout << h[u] + h[v] - 2 * h[anc] + 2 << endl;5�_�   $   &           %   f   )    ����                                                                                                                                                                                                                            N                                                                                             (           (           v        _�{�     �   e   g   q      4        cout << h[u] + h[v] - 2 * h[anc]  2 << endl;5�_�   %   '           &   f   )    ����                                                                                                                                                                                                                            N                                                                                             (           (           v        _�{�     �   e   g   q      3        cout << h[u] + h[v] - 2 * h[anc] 2 << endl;5�_�   &   (           '   f   (    ����                                                                                                                                                                                                                            N                                                                                             (           (           v        _�{�    �   e   g   q      2        cout << h[u] + h[v] - 2 * h[anc]  << endl;5�_�   '               (           ����                                                                                                                                                                                                                            N                                                                                             (           (           v        _�ǧ    �   p   q              return 0;�   o   q           �   n   p        �   n   o              solve();�   m   o           �   l   n        �   k   l          signed main(){�   j   l           �   i   k        �   i   j          }�   h   j           �   g   i        �   a   b              rep(i, q){�   `   b           �   _   a        �   _   `              dfs(0, 0);�   ^   `           �   ]   _        �   W   X              rep(i, n - 1){�   V   X           �   U   W        �   R   S              g.rsz(n);�   Q   S           �   P   R        �   M   N          void solve(){�   L   N           �   K   M        �   J   K              return up[tv][0];�   I   K           �   H   J        �   E   F              int tv = v;�   D   F           �   C   E        �   A   B          int query(int u, int v){�   @   B           �   ?   A        �   =   >          ,inline bool is_ancestor(int child, int anc){�   <   >           �   ;   =        �   :   ;              tout[root] = timer++;�   9   ;           �   8   :        �   5   6              for(auto child : g[root]){�   4   6           �   3   5        �   0   1              up[root][0] = p;�   /   1           �   .   0        �   .   /              tin[root] = timer++;�   -   /           �   ,   .        �   +   ,          void dfs(int root, int p){�   *   ,           �   )   +        �   '   (          int n, lg, timer = 0;�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5�_�   !           #   "   J       ����                                                                                                                                                                                                                            N                                                                                             (           (           v        _�{�     �   I   K   q          return up[tv][0;5�_�                    �       ����    `                                                                                                                                                                                                                       �          h                                                                                                                   _�z�     �   �   �        5�_�                    L        ����                                                    L                                                                                                                                                                       P          .                                                                                                                   _�z�     �   L   M   q    �   L   M   q       �   L   N   r      cin >>�   M   N   r       �   M   O   s       5��