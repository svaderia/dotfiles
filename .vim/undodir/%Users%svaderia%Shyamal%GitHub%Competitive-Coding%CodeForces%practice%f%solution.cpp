Vim�UnDo� H�oo;%Y�M6�Ifo�@��N�r=��j�   �   )            int tx = a == par[b] ? a : b;   �   #      B       B   B   B    _?��    _�                     (        ����                                                    &                                                                                                                                                                       (                                                                                                                                _?�I     �   (   *   7          �   (   *   6    5�_�                   )   	    ����                                                    &                                                                                                                                                                       (                                                                                                                                _?�T     �   (   *   7      
    int n;5�_�                    )       ����                                                    &                                                                                                                                                                       (                                                                                                                                _?�T     �   *   -   9          �   *   ,   8    �   )   +   8          int n, q;�   )   +   7    �   )   *   7    5�_�                    ,       ����                                                    &                                                                                                                                                                       (                                                                                                                                _?�d     �   -   1   <              �   -   /   ;    �   ,   .   ;              int a, b;�   ,   .   :    �   ,   -   :    5�_�                    .       ����                                                    &                                                                                                                                                                       (                                                                                                                                _?ζ     �   .   2   ?              �   .   0   >    5�_�                    1        ����                                                    &                                                                                                                                                                       (                                                                                                                                _?��     �   0   1           5�_�      	              &        ����                                                    &                                                                                                                                                                       (                                                                                                                                _?��     �   %   6   @       �   &   '   @    5�_�                 	   &        ����                                                    &                                                                                                                                                                       7           &                                                                                                                    _?��     �   %   '   O    5�_�   	      
          7        ����                                                    '                                                                                                                                                                       8           7                                                                                                                    _?��     �   6   8   P    5�_�                    ;        ����                                                    '                                                                                                                                                                       9           8                                                                                                                    _?��     �   ;   =   Q    �   ;   <   Q    5�_�                    C       ����                                                    '                                                                                                                                                                       9           8                                                                                                                    _?�     �   C   H   S          �   C   E   R    5�_�                    &        ����                                                    '                                                                                                                                                                       9           8                                                                                                                    _?�     �   &   s   W    �   &   (   W       �   &   (   V    5�_�                    )       ����    s                                               t                                                                                                                                                                       �           �                                                                                                                    _?�&    �   (   )          typedef long long int lli;   typedef vector<lli> vli;    5�_�                    a       ����    p                                               q                                                                                                                                                                       �           �                                                                                                                    _?�.     �   `   b   �              node id;5�_�                    b       ����    p                                               q                                                                                                                                                                       �           �                                                                                                                    _?�1     �   a   c   �              id.assign(0);5�_�                    c       ����    p                                               q                                                                                                                                                                       �           �                                                                                                                    _?�2    �   b   d   �              return id;5�_�                    A       ����    p                                               q                                                                                                                                                                       �           �                                                                                   A          A          v       _?�H     �   @   B   �              seg[id].assign(arr[l]);5�_�                   ?       ����    p                                               q                                                                                                                                                                       �           �                                                                                   A          A          v       _?�Y     �   >   ?              if(r - l < 2){   =        //base case : leaf node information to be stored here           seg[id].assign(0);           return;       }           int mid = (l + r) / 2;   (    int left = 2 * id, right = left + 1;       build(left, l, mid);       build(right, mid, r);   +    seg[id] = merge(seg[left], seg[right]);5�_�                    >        ����    e                                               f                                                                                                                                                                       x           w                                                                                   ?          ?          v       _?�Z     �   >   A   �          �   >   @   �    5�_�                    >       ����    g                                               h                                                                                                                                                                       z           y                                                                                   A          A          v       _?�j    �   =   ?   �      -void build(int id = 1, int l = 0, int r = N){5�_�                    3        ����    g                                               h                                                                                                                                                                       z           y                                                                                   A          A          v       _?�s     �   2   3          vli arr;5�_�                    �        ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?�     �   �   �   �          �   �   �   �    5�_�                    �       ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?Ϛ     �   �   �   �          �   �   �   �    5�_�                    �       ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?ϯ     �   �   �   �              �   �   �   �    �   �   �   �              int a, b, xi;�   �   �   �    �   �   �   �    5�_�                    �       ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?��     �   �   �   �              �   �   �   �    5�_�                    �       ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?��     �   �   �   �                  �   �   �   �    5�_�                    �   	    ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?�     �   �   �   �      	        }5�_�                     �       ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?�     �   �   �   �    �   �   �   �    5�_�      !               �       ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?�     �   �   �   �      "            update(nEntry[a], xi);5�_�       "           !   �       ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?�     �   �   �   �      "            update(nEntry[b], xi);5�_�   !   #           "   �       ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?�     �   �   �   �                  �   �   �   �    5�_�   "   %           #   h       ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?�2     �   g   i   �      vi nEntry, nExit;5�_�   #   &   $       %   m        ����    f                                               g                                                                                                                                                                       y           x                                                                                   @          @          v       _?�7     �   m   o   �          �   m   o   �    5�_�   %   '           &   h       ����    f                                               g                                                                                                                                                                       z           y                                                                                   @          @          v       _?�D     �   g   i   �      vi nEntry, nExit, p;5�_�   &   (           '   �       ����    f                                               g                                                                                                                                                                       z           y                                                                                   @          @          v       _?�L    �   �   �   �      '            int tx = a == p[b] ? a : b;5�_�   '   )           (   �   4    ����    f                                               g                                                                                                                                                                       z           y                                                                                   @          @          v       _?�V    �   �   �   �      =            cout << query(nEntry[tx], nExit[tx] + 1) << endl;5�_�   (   *           )   }   *    ����    f                                               g                                                                                                                                                                       z           y                                                                                   @          @          v       _?�e    �   |   ~   �      *    g.rsz(n); nEntry.rsz(n); nExit.rsz(n);5�_�   )   +           *   �   (    ����    f                                               g                                                                                                                                                                       z           y                                                                                   @          @          v       _?Е    �   �   �   �                  �   �   �   �    5�_�   *   ,           +   f        ����    f                                               g                                                                                                                                                                       z           y                                                                                   @          @          v       _?Ъ   	 �   e   �   �    �   e   g   �       5�_�   +   -           ,   �   4    ����    �                                               �                                                                                                                                                                       �           �                                                                                   @          @          v       _?��     �   �   �   �      6    g.rsz(n); nEntry.rsz(n); nExit.rsz(n); par.rsz(n);5�_�   ,   .           -   F       ����    �                                               �                                                                                                                                                                       �           �                                                                                   @          @          v       _?ա   
 �   E   G   �              seg[id].assign(y);5�_�   -   /           .   �       ����    �                                               �                                                                                                                                                                       �           �                                                                                  @          @          v       _?�9     �   �   �   �    5�_�   .   1           /   U       ����    �                                               �                                                                                                                                                                       �           �                                                                                  @          @          v       _?�c    �   U   W   �          �   U   W   �    5�_�   /   2   0       1   V       ����    �                                               �                                                                                                                                                                       �           �                                                                                  @          @          v       _?�}     �   U   W   �          dbg(x, y);5�_�   1   3           2   g        ����    �                                               �                                                                                                                                                                       �           �                                                                                  g           �           v       _?֌     �   f   h   �   :       // TO_STRING   4    string to_string(char c) { return string(1,c); }   9    string to_string(const char* s) { return (string)s; }   ,    string to_string(string s) { return s; }       string to_string(bool b) {           #ifdef DEBUG   (            return b ? "true" : "false";           #else   %            return to_string((int)b);           #endif       }   6    template<class A> string to_string(complex<A> c) {   4        stringstream ss; ss << c; return ss.str(); }   &    string to_string(vector<bool> v) {   =        string res = "{"; rep(i,sz(v)) res += char('0'+v[i]);   !        res += "}"; return res; }   8    template<size_t SZ> string to_string(bitset<SZ> b) {   9        string res = ""; rep(i,SZ) res += char('0'+b[i]);           return res; }   =    template<class A, class B> string to_string(pair<A,B> p);   O    template<class T> string to_string(T v) { // containers with begin(), end()           #ifdef DEBUG   +            bool fst = 1; string res = "{";   $            for (const auto& x: v) {   &                if (!fst) res += ", ";   -                fst = 0; res += to_string(x);               }   #            res += "}"; return res;           #else   *            bool fst = 1; string res = "";   $            for (const auto& x: v) {   %                if (!fst) res += " ";   -                fst = 0; res += to_string(x);               }               return res;               #endif       }   >    template<class A, class B> string to_string(pair<A,B> p) {           #ifdef DEBUG   >            return "("+to_string(p.f)+", "+to_string(p.s)+")";           #else   5            return to_string(p.f)+" "+to_string(p.s);           #endif       }           // DEBUG   '    void DBG() { cerr << "]" << endl; }   9    template<class H, class... T> void DBG(H h, T... t) {   =        cerr << to_string(h); if (sizeof...(t)) cerr << ", ";           DBG(t...); }   $#ifdef DEBUG // compile with -DDEBUG   h    #define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)   #else       #define dbg(...) 0   #endif       vvi g;5�_�   2   4           3   g        ����                                                    g                                                                                                                                                                       z           g                                                                                   g           g           v       _?֍     �   f   h   �    5�_�   3   5           4   &        ����                                                    h                                                                                                                                                                       {           h                                                                                   h           h           v       _?֕    �   %   `   �       �   &   '   �    5�_�   4   6           5   �       ����                                                    �                                                                                                                                                                       �           �                                                                                   �           �           v       _?�<    �   �   �   �              �   �   �   �    5�_�   5   7           6   �       ����                                                    �                                                                                                                                                                       �           �                                                                                   �           �           v       _?��    �   �   �   �          �   �   �   �    5�_�   6   8           7   �   -    ����                                                    �                                                                                                                                                                       �           �                                                                                   �           �           v       _?��    �   �   �   �      -    g.clear(); nEntry.clear(); nExit.clear();5�_�   7   9           8   �       ����                                                    �                                                                                                                                                                       �           �                                                                                   �           �           v       _?�     �   �   �   �      B            cout << query(nEntry[tx], nExit[tx] + 1).data << endl;5�_�   8   :           9   �   =    ����                                                    �                                                                                                                                                                       �           �                                                                                   �           �           v       _?�!    �   �   �   �      F            cout << abs(query(nEntry[tx], nExit[tx] + 1).data << endl;5�_�   9   ;           :   t        ����                                                    �                                                                                                                                                                       �           �                                                                                                                    _?��     �   t   �   �    �   t   u   �    5�_�   :   <           ;   �        ����                                                    �                                                                                                                                                                       �           �                                                                                                                    _?��     �   �   �          //Complexity: O(n)   void build(){       seg.clear();       seg.rsz(4 * N);   }5�_�   ;   =           <   y       ����                                                    �                                                                                                                                                                       �           �                                                                                                                    _?��    �   x   z   �              seg[id].assign(arr[l]);5�_�   <   >           =   �       ����                                                    �                                                                                                                                                                       �           �                                                                                                                    _?�    �   �   �   �          �   �   �   �    5�_�   =   ?           >   �       ����                                                    �                                                                                                                                                                       �           �                                                                                                                    _?�)     �   �   �               seg.clear(); seg.rsz(4 * N);5�_�   >   @           ?   �       ����                                                    �                                                                                                                                                                       �           �                                                                                                                    _?�*    �   �   �   �    �   �   �   �    5�_�   ?   A           @   �   #    ����                                                    �                                                                                                                                                                       �           �                                                                                                                    _?�l     �   �   �   �      )            int tx = a == par[b] ? a : b;5�_�   @   B           A   �   '    ����                                                    �                                                                                                                                                                       �           �                                                                                                                    _?�p    �   �   �   �      )            int tx = a == par[b] ? b : b;5�_�   A               B   �        ����                                                    �                                                                                                                                                                       �           �                                                                                                                    _?��    �   �   �              return 0;�   �   �           �   �   �        �   �   �              repA(tc, 1, T){�   �   �           �   �   �        �   �   �          
    int T;�   �   �           �   �   �        �   �   �          signed main(){�   �   �           �   �   �        �   �   �                          }�   �   �           �   �   �        �   �   �              rep(i, q){�   �   �           �   �   �        �   �   �              N = n + 5;�   �   �           �   �   �        �   �   �              int n, q;�   �   �           �   �   �        �   �   �          void solve(){�   �   �           �   �   �        �   �   �              nExit[root] = counter;�   �   �           �   �   �        �   �   �              par[root] = p;�   �   �           �   �   �        �   �   �          void dfs(int root, int p){�   �   �           �   �   �        �   �   �          vvi g;�   �   �           �   �   �        �   �   �              int mid = (l + r) / 2;�   �   �           �   �   �        �   �   �          $    if(x <= l && r <= y){ // overlap�   �   �           �   �   �        �   �   �          //Complexity: O(log n)�   �   �           �   �   �        �   �   �              int mid = (l + r) / 2;�   �   �           �   �   �        �   �   �          //Complexity: O(log n)�   �   �           �   �   �        �   |   }              int mid = (l + r) / 2;�   {   }           �   z   |        �   t   u          //Complexity: O(n)�   s   u           �   r   t        �   l   m          //Complexity: O(1)�   k   m           �   j   l        �   i   j          vector<node> seg;�   h   j           �   g   i        �   d   e              void assign(lli val){�   c   e           �   b   d        �   a   b          struct node{�   `   b           �   _   a        �   _   `              7//Segment tree operations: Point update and Range Query�   ^   `           �   ]   _        �   T   U              // DEBUG�   S   U           �   R   T        �   J   K                  #endif�   I   K           �   H   J        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              �   �   �              if(r - l < 2){ 5�_�   /           1   0   V       ����    �                                               �                                                                                                                                                                       �           �                                                                                  @          @          v       _?�q     �   U   W   �          dbg(l, y);5�_�   #           %   $   m        ����    f                                               g                                                                                                                                                                       z           y                                                                                   @          @          v       _?�5     �   m   n   �    �   m   n   �      "            update(nEntry[a], xi);5�_�                    5       ����    e                                               f                                                                                                                                                                       x           w                                                                                   6          6          v       _?�S     �   4   @        5�_�   	              
   6        ����                                                    '                                                                                                                                                                       9           7                                                                                                                    _?��     �   5   6   P       5�_�                    )   	    ����                                                    &                                                                                                                                                                       (                                                                                                                                _?�J     �   )   *   7    �   )   *   7      
    int n;�   )   +   8          cin >> n;�   *   +   8       5��