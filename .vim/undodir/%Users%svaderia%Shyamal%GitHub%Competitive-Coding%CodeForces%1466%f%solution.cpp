Vim�UnDo� �e��d����W��ף�-U�ѿ��c�Z�%}T   �   }   �          '       '   '   '    _��    _�                     '        ����                                                    &                                                                                                                                                                       (                                                                                                                                _���     �   '   )   7          �   '   )   6    5�_�                    (   	    ����                                                    &                                                                                                                                                                       )                                                                                                                                _���     �   )   +   8    �   (   *   8      
    int n;�   (   *   7    �   (   )   7    5�_�                    )        ����                                                    &                                                                                                                                                                       +                                                                                                                                _���     �   (   )              cin >> n;5�_�                    (   
    ����                                                    &                                                                                                                                                                       *                                                                                                                                _���     �   '   )   8      
    int n;5�_�                    (       ����                                                    &                                                                                                                                                                       *                                                                                                                                _���     �   )   ,   :          �   )   +   9    �   (   *   9          int n, m;�   (   *   8    �   (   )   8    5�_�                    *        ����                                                    &                                                                                                                                                                       -                                                                                                                                _���     �   %   9   <    �   *   ,   <          �   *   ,   ;    5�_�                    >       ����    >                                              9                                                                                                                                                                       A                                                                                                                                _���     �   =   @   O          5�_�      	              >       ����    >                                              9                                                                                                                                                                       B                                                                                                                                _���     �   =   ?   P          Graph g(m);5�_�      
           	   >       ����    >                                              9                                                                                                                                                                       B                                                                                                                                _���     �   >   A   Q          �   >   @   P    5�_�   	              
   @       ����    >                                              9                                                                                                                                                                       D                                                                                                                                _���     �   A   D   T              �   A   C   S    �   @   B   S              int k;�   @   B   R    �   @   A   R    5�_�   
                 C       ����    >                                              9                                                                                                                                                                       G                                                                                                                                _���     �   D   H   W                  �   D   F   V    �   C   E   V                  int a;�   C   E   U    �   C   D   U    5�_�                    G       ����    >                                              9                                                                                                                                                                       K                                                                                                                                _��     �   H   J   [                  �   H   J   Z    �   G   I   Z                  int a, b;�   G   I   Y    �   G   H   Y    5�_�                    >       ����    >                                              9                                                                                                                                                                       M                                                                                                                                _��     �   =   >              Graph g(m + 1);5�_�                    =        ����                                                   9                                                                                                                                                                       L                                                                                                                                _��     �   =   ?   [          �   =   ?   Z    5�_�                    >       ����                                                   9                                                                                                                                                                       M                                                                                                                                _��     �   =   ?   [          vii edge5�_�                    E       ����                                                   9                                                                                                                                                                       M                                                                                                                                _��     �   D   E                      g.addEdge(0, a);5�_�                    D       ����                                                   9                                                                                                                                                                       L                                                                                                                                _��     �   D   F   [                  �   D   F   Z    5�_�                    E       ����                                                   9                                                                                                                                                                       M                                                                                                                                _��!     �   D   E                      edge.eb(mp(0, a));5�_�                    &        ����                                                   9                                                                                                                                                                       L                                                                                               8           &           v        _��(     �   %   '   Z      struct Edge{       int to, w, id;   =    Edge(int ii, int ww, int idx) : to(ii), w(ww), id(idx) {}   };       struct Graph{       int n, m;       vector<vector<Edge>> adj;       #    Graph() : n(0), m(0), adj(0) {}   +    Graph(int nn) : n(nn), m(0), adj(nn) {}       A    void addEdge(int u, int v, bool directed = false, int w = 0){   !        adj[u].pb(Edge(v, w, m));           if(!directed)   %            adj[v].pb(Edge(u, w, m));           m++;       }   };5�_�                    &        ����                                                   '                                                                                                                                                                       :                                                                                               &           &           v        _��)     �   %   &          ;5�_�                    *        ����                                                   &                                                                                                                                                                       9                                                                                               &           &           v        _��,     �   %   E   H    �   *   ,   H          �   *   ,   G    5�_�                    J       ����    J                                              E                                                                                                                                                                       Y                                                                                               E           E           v        _��0     �   J   L   h          �   J   L   g    5�_�                    K       ����    J                                              E                                                                                                                                                                       Z                                                                                               E           E           v        _��7     �   K   M   i          �   K   M   h    5�_�                    M       ����    J                                              E                                                                                                                                                                       [           M                                                                                  E           E           v        _��E     �   L   N   i    5�_�                    T       ����    J                                              E                                                                                                                                                                       \           N                                                                                  E           E           v        _��F     �   T   V   k                  �   T   V   j    5�_�                   K       ����    J                                              E                                                                                                                                                                       ]           N                                                                                  E           E           v        _��_     �   J   L   k          set<int> s;5�_�                    J        ����    J                                              E                                                                                                                                                                       ]           N                                                                                  E           E           v        _��a    �   f   g              return 0;�   e   g           �   d   f        �   b   c              repA(tc, 1, T){�   a   c           �   `   b        �   _   `          
    int T;�   ^   `           �   ]   _        �   \   ]          signed main(){�   [   ]           �   Z   \        �   Z   [                      }�   Y   [           �   X   Z        �   M   N              vii edge;�   L   N           �   K   M        �   J   K              	    vi s;�   I   K           �   H   J        �   F   G          void solve(){�   E   G           �   D   F        �   C   D          #    int size() { return set_size; }�   B   D           �   A   C        �   ?   @              bool same(int x, int y){�   >   @           �   =   ?        �   5   6              bool merge(int x, int y) {�   4   6           �   3   5        �   0   1              int find(int x) {�   /   1           �   .   0        �   ,   -          A    UnionFind(int a) : n(a), set_size(n), parent(n), rank(n, 1) {�   +   -           �   *   ,        �   (   )          struct UnionFind {�   '   )           �   &   (        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              �   I   K              5�_�                    X       ����                                                   E                                                                                                                                                                                                                                                                      E           E           v        _��e     �   W   X                      g.addEdge(5�_�                    W        ����                                                   E                                                                                                                                                                                                                                                                      E           E           v        _��e     �   D   �   k    �   W   ]   g                  �   W   Y   f    5�_�                     �        ����    �                                              �                                                                                                                                                                                                                                                                      �           �           v        _��s     �   �   �   �          �   �   �   �    5�_�      !               �       ����    �                                              �                                                                                                                                                                                                                                                                      �           �           v        _���     �   �   �              rep(i, n){5�_�       "           !   �       ����    �                                              �                                                                                                                                                                                                                                                                      �           �           v        _���     �   �   �   �          �   �   �   �    5�_�   !   $           "   �       ����    �                                              �                                                                                                                                                                                                                                                                      �           �           v        _���    �   �   �   �              cout << 5�_�   "   %   #       $   �       ����    �                                              &                                                                                                                                                                       �           �                                                                                   �           �           v        _���     �   �   �   �          �   �   �   �    �   �   �   �      
    int T;       cin >> T;           repA(tc, 1, T){           solve();       }           return 0;5�_�   $   '           %   �        ����    �                                              &                                                                                                                                                                       �           �                                                                                   �           �           v        _���    �   �   �              return 0;�   �   �           �   �   �        �   �   �              solve();�   �   �           �   �   �        �   �   �          signed main(){�   �   �           �   �   �        �   �   �          }�   �   �           �   �   �        �   �   �              &    modint ans = modint(2).pow(sz(s));�   �   �           �   �   �        �   �   �              vii edge;�   �   �           �   �   �        �   �   �          	    vi s;�   �   �           �   �   �        �   �   �          void solve(){�   �   �           �   �   �        �   �   �          typedef vector<modint> vm;�   �   �           �   �   �        �   �   �          // for debug�   �   �           �   �   �        �   �   �          "    modint invert(modint z) const{�   �   �           �   �   �        �   �   �          "    modint pow(long long x) const{�   �   �           �      �        �   w   x          <    friend ostream &operator<<(ostream &os,const modint &x){�   v   x           �   u   w        �   d   e          (    modint &operator+=(const modint &x){�   c   e           �   b   d        �   _   `          I    modint operator+(const modint &x) const{ return modint(*this) += x; }�   ^   `           �   ]   _        �   \   ]          A    modint operator-() const{ return modint(a ? (mod - a) : 0); }�   [   ]           �   Z   \        �   Y   Z          >    bool operator==(const modint &x) const{ return a == x.a; }�   X   Z           �   W   Y        �   W   X          +    operator long long() const{ return a; }�   V   X           �   U   W        �   Q   R          "    modint() : a(0), used(false){}�   P   R           �   O   Q        �   K   L          !const long long mod = 1000000007;�   J   L           �   I   K        �   C   D          #    int size() { return set_size; }�   B   D           �   A   C        �   ?   @              bool same(int x, int y){�   >   @           �   =   ?        �   5   6              bool merge(int x, int y) {�   4   6           �   3   5        �   0   1              int find(int x) {�   /   1           �   .   0        �   ,   -          A    UnionFind(int a) : n(a), set_size(n), parent(n), rank(n, 1) {�   +   -           �   *   ,        �   (   )          struct UnionFind {�   '   )           �   &   (        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              �   �   �              5�_�   %       &       '           ����                                                   &                                                                                                                                                                       �           �                                                                                   �           �           v        _��    �   �   �              return 0;�   �   �           �   �   �        �   �   �              solve();�   �   �           �   �   �        �   �   �          signed main(){�   �   �           �   �   �        �   �   �          }�   �   �           �   �   �        �   �   �          &    modint ans = modint(2).pow(sz(s));�   �   �           �   �   �        �   �   �              vii edge;�   �   �           �   �   �        �   �   �          	    vi s;�   �   �           �   �   �        �   �   �          void solve(){�   �   �           �   �   �        �   �   �          typedef vector<modint> vm;�   �   �           �   �   �        �   �   �          // for debug�   �   �           �   �   �        �   �   �          "    modint invert(modint z) const{�   �   �           �   �   �        �   �   �          "    modint pow(long long x) const{�   �   �           �      �        �   w   x          <    friend ostream &operator<<(ostream &os,const modint &x){�   v   x           �   u   w        �   d   e          (    modint &operator+=(const modint &x){�   c   e           �   b   d        �   _   `          I    modint operator+(const modint &x) const{ return modint(*this) += x; }�   ^   `           �   ]   _        �   \   ]          A    modint operator-() const{ return modint(a ? (mod - a) : 0); }�   [   ]           �   Z   \        �   Y   Z          >    bool operator==(const modint &x) const{ return a == x.a; }�   X   Z           �   W   Y        �   W   X          +    operator long long() const{ return a; }�   V   X           �   U   W        �   Q   R          "    modint() : a(0), used(false){}�   P   R           �   O   Q        �   K   L          !const long long mod = 1000000007;�   J   L           �   I   K        �   C   D          #    int size() { return set_size; }�   B   D           �   A   C        �   ?   @              bool same(int x, int y){�   >   @           �   =   ?        �   5   6              bool merge(int x, int y) {�   4   6           �   3   5        �   0   1              int find(int x) {�   /   1           �   .   0        �   ,   -          A    UnionFind(int a) : n(a), set_size(n), parent(n), rank(n, 1) {�   +   -           �   *   ,        �   (   )          struct UnionFind {�   '   )           �   &   (        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5�_�   %           '   &   �        ����                                                   &                                                                                                                                                                       �           �                                                                                   �           �           v        _���     �   �   �   �    �   �   �   �      }int T;       cin >> T;           repA(tc, 1, T){           solve();       }           5�_�   "           $   #   �       ����    �                                              �                                                                                                                                                                                                                                                                      �           �           v        _���     �   �   �   �          cout << endl5�_�                    K       ����    J                                              E                                                                                                                                                                       ]           N                                                                                  E           E           v        _��\     �   J   L   k          <int> s;5��