Vim�UnDo� �o��Ɖ�5͙Hj����s#�,xͩ(?W   �           dp[u]++, dp[v]++;    �         =       =   =   =    _���    _�                     .       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�ǭ     �   -   0   0          �   -   /   /    �   -   /   6      
    int T;       cin >> T;           repA(tc, 1, T){           solve();       }           return 0;5�_�                    (        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�ǭ     �   (   *   2          �   (   *   1    5�_�                   )   	    ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�ǳ     �   (   *   2      
    int n;5�_�                    )       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�ǵ     �   *   ,   3    �   )   +   3          int n, m;;�   )   +   2    �   )   *   2    5�_�                    )       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�Ƿ     �   (   *   4          int n, m;;5�_�                    *       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�Ǹ     �   )   +   4          cin >> n >> m;;5�_�      	              &        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _���     �   &   ,   5       �   &   (   4    5�_�      
           	   *        ����                                                    &                                                                                                                                                                       -           -                                                                                                                    _���    �   )   .   9       5�_�   	              
   2        ����                                                    &                                                                                                                                                                       0           0                                                                                                                    _���     �   2   6   =          �   2   4   <    5�_�   
                 5       ����                                                    &                                                                                                                                                                       0           0                                                                                                                    _���     �   6   =   A              �   6   8   @    �   5   7   @              int a, b;�   5   7   ?    �   5   6   ?    5�_�                    ;        ����                                                    &                                                                                                                                                                       0           0                                                                                                                    _��5     �   ;   >   G          �   ;   =   F    5�_�                    =       ����                                                    &                                                                                                                                                                       0           0                                                                                                                    _��>     �   >   I   J              �   >   @   I    �   =   ?   I              int a, b;�   =   ?   H    �   =   >   H    5�_�                    3        ����                                                    &                                                                                                                                                                       0           0                                                                                                                    _��x    �   O   P              return 0;�   N   P           �   M   O        �   M   N              solve();�   L   N           �   K   M        �   J   K          signed main(){�   I   K           �   H   J        �   H   I                  }�   G   I           �   F   H        �   D   E              rep(i, n){�   C   E           �   B   D        �   B   C              dfs(0, 0);�   A   C           �   @   B        �   ;   <              rep(i, m){�   :   <           �   9   ;        �   3   4              rep(i, n - 1){�   2   4           �   1   3        �   0   1              int n, m;�   /   1           �   .   0        �   .   /              void solve(){�   -   /           �   ,   .        �   ,   -          }�   +   -           �   *   ,        �   *   +          void recur(int root, int p){�   )   +           �   (   *        �   '   (          vvi g;�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              �   2   4              5�_�                    (       ����                                                    &                                                                                                                                                                       /           /                                                                                                                    _��z     �   '   )   P      vi dp;5�_�                    2        ����                                                    &                                                                                                                                                                       /           /                                                                                                                    _��~     �   2   4   Q          �   2   4   P    5�_�                    3       ����                                                    &                                                                                                                                                                       /           /                                                                                                                    _�Ȇ     �   3   5   Q    �   3   4   Q    5�_�                    4       ����                                                    &                                                                                                                                                                       /           /                                                                                                                    _�Ȇ     �   4   6   R    �   4   5   R    5�_�                    6       ����                                                    &                                                                                                                                                                       /           6                                                                                                                   _�Ȇ     �   5   7   S    5�_�                    4       ����                                                    &                                                                                                                                                                       /           7                                                                                                                   _�Ȉ     �   3   5   T          g.rsz(n);5�_�                    5       ����                                                    &                                                                                                                                                                       /           7                                                                                                                   _�Ȋ     �   4   6   T          g.rsz(n);5�_�                           ����                                                    &                                                                                                                                                                       /           7                                                                                                                   _�ȶ    �   S   T              return 0;�   R   T           �   Q   S        �   Q   R              solve();�   P   R           �   O   Q        �   N   O          signed main(){�   M   O           �   L   N        �   L   M          }�   K   M           �   J   L        �   H   I              rep(i, n){�   G   I           �   F   H        �   F   G              dfs(0, 0);�   E   G           �   D   F        �   ?   @              rep(i, m){�   >   @           �   =   ?        �   7   8              rep(i, n - 1){�   6   8           �   5   7        �   3   4              g.rsz(n);�   2   4           �   1   3        �   0   1              int n, m;�   /   1           �   .   0        �   .   /          void solve(){�   -   /           �   ,   .        �   ,   -          }�   +   -           �   *   ,        �   *   +          void recur(int root, int p){�   )   +           �   (   *        �   '   (          vvi g;�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5�_�                            ����                                                    &                                                                                                                                                                       /                                                                                                                                _���     �              T   #include <bits/stdc++.h>   using namespace std;       typedef long long int lli;   #define int lli   typedef pair<int, int> pii;   typedef vector<int> vi;   typedef vector<bool> vb;   typedef vector<vi> vvi;   typedef vector<lli> vli;   typedef vector<pii> vii;       const int MOD   = 1e9 + 7;   const double PI = acos(-1.0);   7const int xd[4] = {1, 0, -1, 0}, yd[4] = {0, 1, 0, -1};   const int INF   = 1e18;       E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)   #define sz(a) int((a).size())   #define rsz resize   #define pb push_back   #define mp make_pair   #define mt make_tuple   #define eb emplace_back   #define f first   #define s second   $#define all(c) (c).begin(),(c).end()   '#define rall(c) (c).rbegin(),(c).rend()   /#define present(c,x) ((c).find(x) != (c).end())   3#define cpresent(c,x) (find(all(c),x) != (c).end())   1#define rep(i, n)    for(int i = 0; i < (n); ++i)   4#define repA(i, a, n)  for(int i = a; i <= (n); ++i)   4#define repD(i, a, n)  for(int i = a; i >= (n); --i)   #define endl "\n"   #define spc " "   =template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}   >template <typename T> T lcm(T a, T b){return (a*b)/gcd(a,b); }       vvi g;   vi dp, ans;       void recur(int root, int p){       }       void solve(){           int n, m;       cin >> n >> m;           g.rsz(n);       ans.rsz(n);       dp.rsz(n);           rep(i, n - 1){           int a, b;           cin >> a >> b;           a--; b--;           g[a].pb(b);           g[b].pb(a);       }           rep(i, m){           int a, b;           cin >> a >> b;           a--, b--;           dp[a]++, dp[b]--;       }           dfs(0, 0);           rep(i, n){           cout << ans[i] << spc;       }       }       signed main(){       fastio;           solve();           return 0;   }5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _���     �                   �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _���     �                  5�_�                    )       ����                                                                                                                                                                                                                                                                                                                                                             _���     �   (   *   q      vi h, tin, tout;5�_�                    ,       ����                                                                                                                                                                                                                                                                                                                                                             _���     �   +   ,              h[root] = 1 + h[p];5�_�                    ,        ����                                                                                                                                                                                                                                                                                                                                                             _���     �   +   ,           5�_�                    S       ����                                                                                                                                                                                                                                                                                                                                                             _���     �   R   S              h.rsz(n);5�_�                     c        ����                                                                                                                                                                                                                                                                                                                                                             _���     �   b   c          1        cout << h[u] + h[v] - 2 * h[anc] << endl;5�_�      !               b       ����                                                                                                                                                                                                                                                                                                                                                             _���     �   b   d   n              �   b   d   m    5�_�       "           !   d       ����                                                                                                                                                                                                                                                                                                                                                             _���     �   d   h   o          �   d   f   n    5�_�   !   #           "   R       ����                                                                                                                                                                                                                                                                                                                                                             _��     �   R   T   r          �   R   T   q    5�_�   "   $           #   9        ����                                                                                                                                                                                                                                                                                                                                                             _��     �   9   =   s       �   9   ;   r    5�_�   #   %           $   )       ����                                                                                                                                                                                                                                                                                                                                                             _��%     �   (   *   v      vi dp, tin, tout;    �   )   +   v       �   )   +   u    5�_�   $   &           %   <       ����                                                                                                                                                                                                                                                                                                                                                             _��.     �   ;   C   u          for(5�_�   %   '           &   @        ����                                                                                                                                                                                                                                                                                                                                                             _��M     �   @   B   |          �   @   B   {    5�_�   &   (           '   r        ����                                                                                                                                                                                                                                                                                                                                                             _��_     �   r   u   }          �   r   t   |    5�_�   '   )           (   ]       ����                                                                                                                                                                                                                                                                                                                                                             _��l    �   ]   _             �   ]   _   ~    5�_�   (   +           )   t       ����                                                                                                                                                                                                                                                                                                                                                             _��t    �   s   u             rep(i, n){5�_�   )   ,   *       +   u       ����                                                    T                                                                                                                                                                       V                                                                                                                    V        _��~    �   t   v                 cout << ans[i] << endl;5�_�   +   -           ,   n       ����                                                    T                                                                                                                                                                       V                                                                                                                    V        _���     �   n   p       5�_�   ,   .           -   p       ����                                                    T                                                                                                                                                                       V                                                                                                         �           V        _���     �   o   q   �      $        dp[u]++, dp[v]++, dp[anc]--;5�_�   -   /           .   p       ����                                                    T                                                                                                                                                                       V                                                                                                         �           V        _���     �   o   r   �      $        dp[u]++, dp[v]++; dp[anc]--;5�_�   .   0           /   p       ����                                                    T                                                                                                                                                                       V                                                                                                         �           V        _���     �   p   r   �              �   p   r   �    5�_�   /   1           0   r       ����                                                    T                                                                                                                                                                       V                                                                                              r          r          v       _���     �   q   s   �              dp[anc]--;5�_�   0   2           1   r       ����                                                    T                                                                                                                                                                       V                                                                                              r          r          v       _���    �   q   s   �                  dp[anc]--;5�_�   1   3           2   s       ����                                                    T                                                                                                                                                                       V                                                                                              r          r          v       _��    �   s   u   �          �   s   u   �    5�_�   2   4           3   T        ����                                                    T                                                                                                                                                                       V                                                                                              r          r          v       _��#     �   S   U   �           �   T   V   �       �   T   V   �    5�_�   3   5           4   &        ����                                                    T                                                                                                                                                                       V                                                                                              r          r          v       _��'   
 �   &   `   �    �   &   (   �       �   &   (   �    5�_�   4   6           5   z        ����    `                                               �                                                                                                                                                                       �                                                                                              �          �          v       _��I     �   z   |   �          �   z   |   �    5�_�   5   7           6   {       ����    `                                               �                                                                                                                                                                       �                                                                                              �          �          v       _��Q    �   z   |   �          dbg(dp[root]);5�_�   6   :           7   x       ����    `                                               �                                                                                                                                                                       �                                                                                              �          �          v       _��b    �   w   y   �              dfs(child, root);5�_�   7   ;   8       :   �        ����    `                                               �                                                                                                                                                                       �                                                                                              �          �          v       _��{    �   �   �                  if(up[anc][0] != anc)5�_�   :   <           ;   �       ����    `                                               �                                                                                                                                                                       �                                                                                              �          �          v       _�ц     �   �   �          #        /* if(up[anc][0] != anc) */5�_�   ;   =           <   �       ����    `                                               �                                                                                                                                                                       �                                                                                              �          �          v       _�ш    �   �   �   �              dp[u]++, dp[v]++; 5�_�   <               =           ����    `                                               �                                                                                                                                                                       �                                                                                              �          �          v       _���    �   �   �              return 0;�   �   �           �   �   �        �   �   �              solve();�   �   �           �   �   �        �   �   �          signed main(){�   �   �           �   �   �        �   �   �          }�   �   �           �   �   �        �   �   �              rep(i, n)�   �   �           �   �   �        �   �   �              dfs_ans(0, 0);�   �   �           �   �   �        �   �   �          $        dp[u]++, dp[v]++, dp[anc]--;�   �   �           �   �   �        �   �   �              rep(i, q){�   �   �           �   �   �        �   �   �              dfs(0, 0);�   �   �           �   �   �        �   �   �              rep(i, n - 1){�   �   �           �   �   �        �   �   �              g.rsz(n);�   �   �           �   �   �        �   �   �          void solve(){�   �   �           �   �   �        �   �   �              return up[tv][0];�   �   �           �   �   �        �   �   �              int tv = v;�   �   �           �   �   �        �   �   �          int query(int u, int v){�   �   �           �   �   �        �   ~                 ,inline bool is_ancestor(int child, int anc){�   }              �   |   ~        �   t   u          void dfs_ans(int root, int p){�   s   u           �   r   t        �   q   r              tout[root] = timer++;�   p   r           �   o   q        �   l   m              for(auto child : g[root]){�   k   m           �   j   l        �   g   h              up[root][0] = p;�   f   h           �   e   g        �   d   e          void dfs(int root, int p){�   c   e           �   b   d        �   `   a          int n, lg, timer = 0;�   _   a           �   ^   `        �   U   V          // DEBUG�   T   V           �   S   U        �   K   L          
    #endif�   J   L           �   I   K        �   '   (              // TO_STRING�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5�_�   7   9       :   8   �        ����    `                                               �                                                                                                                                                                       �                                                                                              �          �          v       _��u     �   �   �   �      g       if(up[anc][0] != anc)5�_�   8               9   �        ����    `                                               �                                                                                                                                                                       �                                                                                              �          �          v       _��u     �   �   �   �       g       if(up[anc][0] != anc)5�_�   )           +   *           ����                                                                                                                                                                                                                                                                                                                                                  V        _��x     �      �        �                  5�_�                    *       ����                                                    &                                                                                                                                                                       0           8                                                                                                                   _�ȍ     �   *   +   T       5�_�                    )   	    ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�ǰ     �   )   *   2    �   )   *   2      
    int n;�   )   +   3          cin >> n;�   *   +   3       5��