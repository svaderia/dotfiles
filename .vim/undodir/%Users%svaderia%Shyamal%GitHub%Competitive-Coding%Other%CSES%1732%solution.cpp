Vim�UnDo� �sVe�I]�mU.ZnKv�5,?CZ�	��.̇   N          C         7       7   7   7    _�R    _�                     .       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _��     �   -   0   0          �   -   /   /    �   -   /   6      
    int T;       cin >> T;           repA(tc, 1, T){           solve();       }           return 0;5�_�                    '        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _��     �   '   )   2          �   '   )   1    5�_�                    (       ����                                                    &                                                                                                                                                                       )           )                                                                                                                    _��     �   )   -   4          �   )   +   3    �   (   *   3          string s;�   (   *   2    �   (   )   2    5�_�                    ,       ����                                                    &                                                                                                                                                                       -           -                                                                                                                    _��     �   +   ,              rep5�_�                    +        ����                                                    &                                                                                                                                                                       ,           ,                                                                                                                    _��     �   +   7   6          �   +   -   5    5�_�                    5       ����                                                    &                                                                                                                                                                       7           7                                                                                                                    _體     �   4   6   @      !            if(z[k] < r - i + 1){5�_�                    5       ����                                                    &                                                                                                                                                                       7           7                                                                                                                    _髕     �   4   6   @      !            if(z[k] > r - i + 1){5�_�      	              5       ����                                                    &                                                                                                                                                                       7           7                                                                                                                    _髗     �   %   _   J    �   5   @   A                      �   5   7   @    5�_�      
           	   w        ����    x                                              _                                                                                                                                                                       z           z                                                                                                                    _��    �   w   y   �          �   w   y   �    5�_�   	              
   g       ����    y                                              _                                                                                                                                                                       {           {                                                                                                                    _�+     �   f   h   �          rep(i, n){5�_�   
                 g       ����    y                                              _                                                                                                                                                                       {           {                                                                                                                    _�-     �   f   h   �          repA(i, n){5�_�                    y        ����    y                                              _                                                                                                                                                                       {           {                                                                                                                    _�1    �   �   �              return 0;�   �   �           �      �        �      �              solve();�   ~   �           �   }           �   |   }          signed main(){�   {   }           �   z   |        �   z   {                  }�   y   {           �   x   z        �   x   y              dbg(z);�   w   y           �   v   x        �   d   e              int n = sz(s);�   c   e           �   b   d        �   `   a          void solve(){�   _   a           �   ^   `        �   U   V          // DEBUG�   T   V           �   S   U        �   K   L          
    #endif�   J   L           �   I   K        �   '   (          // TO_STRING�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              �   x   z              5�_�                    j       ����    y                                              _                                                                                                                                                                                                                                                                                                        _�B     �   i   k   �      5            while(r < n - 1 && s[r - l] == s[r]) r++;5�_�                    p       ����    y                                              _                                                                                                                                                                                                                                                                                                        _�E    �   o   q   �      9                while(r < n - 1 && s[r - l] == s[r]) r++;5�_�                    x   
    ����    y                                              _                                                                                                                                                                                                                                                                                                        _�d     �   x   {   �          �   x   z   �    5�_�                    z       ����    {                                              _                                                                                                                                                                                                                                                                                                        _�j     �   y   z          	    rep(i5�_�                    y        ����    z                                              _                                                                                                                                                                                                                                                                                                        _�j    �   y   �   �          �   y   {   �    5�_�                   g       ����    �                                              _                                                                                                                                                                                                                                                                                                        _�>     �   f   h   �          repA(i, 1, n){5�_�                    |   "    ����    �                                              _                                                                                                                                                                                                                                                                                                        _�E    �   {   }   �      $        if(z[i] + i == n) ans.pb(i);5�_�                    |       ����    �                                              _                                                                                                                                                                                                                                                                                                        _�g     �   {   |          +        if(z[i] + i == n) ans.pb(i - z[i]);5�_�                    {       ����                                                  _                                                                                                                                                                                                                                                                                                        _�h     �   {   }   �              �   {   }   �    5�_�                    |       ����    �                                              _                                                                                                                                                                                                                                                                                                        _�v     �   {   }   �              if(n - z[i] == i) 5�_�                    |       ����    �                                              _                                                                                                                                                                                                                                                                                                        _魀   	 �   {   }   �              if(n - z[i] == i + 1) 5�_�                    |       ����    �                                              _                                                                                                                                                                                                                                                                                                        _魥   
 �   {   }   �      (        if(n - z[i] == i + 1) ans.pb(i);5�_�                    |   !    ����    �                                              _                                                                                                                                                                                                                                                                                                        _魽     �   {   }   �      $        if(n - z[i] == i) ans.pb(i);5�_�                    |   !    ����    �                                              _                                                                                                                                                                                                                                                                                                        _魾    �   {   }   �      #        if(n - z[i] == i) ans.pb();5�_�                     {       ����    �                                              _                                                                                                                                                                                                                                                                                                        _��    �   z   |   �          rep(i, n){5�_�      !               w        ����    �                                              _                                                                                                                                                                                                                                                                                                        _�
    �   w   y   �          �   w   y   �    5�_�       "           !   }       ����    �                                              _                                                                                                                                                                                                                                                                                                        _鮍    �   |   ~   �      '        if(n - z[i] == i) ans.pb(z[i]);5�_�   !   #           "   l       ����    �                                              _                                                                                                                                                                                                                                                                                                        _鮶     �   k   m   �              } else{5�_�   "   $           #   n       ����    �                                              _                                                                                                                                                                                                                                                                                                        _鮻    �   m   o   �      !            if(z[k] > r - i + 1){5�_�   #   %           $   n       ����    �                                              _                                                                                                                                                                                                                                                                                                        _��     �   m   o   �      "            if(z[k] >= r - i + 1){5�_�   $   '           %   n       ����    �                                              _                                                                                                                                                                                                                                                                                                        _��     �   m   o   �      !            if(z[k] = r - i + 1){5�_�   %   (   &       '   n       ����    �                                              _                                                                                                                                                                                                                                                                                                        _��     �   m   o   �                   if(z[k]  r - i + 1){5�_�   '   )           (   s       ����    �                                              _                                                                                                                                                                                                                                                                                                        _��     �   r   s                          z[i] = z[k];5�_�   (   *           )   n       ����    �                                              _                                                                                                                                                                                                                                                                                                        _��     �   n   p   �    �   n   o   �    5�_�   )   +           *   p       ����    �                                              _                                                                                                                                                                                                                                                                                                        _��     �   o   p                          l = i;   5                while(r < n && s[r - l] == s[r]) r++;   "                z[i] = r - l; r--;5�_�   *   -           +   p       ����    ~                                              _                                                                                                                                                                                                                                                                                                        _��    �   p   t   �    �   p   q   �    5�_�   +   .   ,       -   x        ����    �                                              _                                                                                                                                                                                                                                                                                                        _��     �   w   x              dbg(s);       dbg(z);5�_�   -   6           .   x        ����                                                  _                                                                                                                                                                                                                                                                                                        _��     �   w   x           5�_�   .   7   /       6   '        ����    ~                                              _                                                                                                                                                                                                                                                                       '           _           v        _�P     �   &   (   �   :   // TO_STRING   0string to_string(char c) { return string(1,c); }   5string to_string(const char* s) { return (string)s; }   (string to_string(string s) { return s; }   string to_string(bool b) {       #ifdef DEBUG   $        return b ? "true" : "false";   	    #else   !        return to_string((int)b);   
    #endif   }   2template<class A> string to_string(complex<A> c) {   0    stringstream ss; ss << c; return ss.str(); }   "string to_string(vector<bool> v) {   9    string res = "{"; rep(i,sz(v)) res += char('0'+v[i]);       res += "}"; return res; }   4template<size_t SZ> string to_string(bitset<SZ> b) {   5    string res = ""; rep(i,SZ) res += char('0'+b[i]);       return res; }   9template<class A, class B> string to_string(pair<A,B> p);   Ktemplate<class T> string to_string(T v) { // containers with begin(), end()       #ifdef DEBUG   '        bool fst = 1; string res = "{";            for (const auto& x: v) {   "            if (!fst) res += ", ";   )            fst = 0; res += to_string(x);   	        }           res += "}"; return res;   	    #else   &        bool fst = 1; string res = "";            for (const auto& x: v) {   !            if (!fst) res += " ";   )            fst = 0; res += to_string(x);   	        }           return res;       
    #endif   }   :template<class A, class B> string to_string(pair<A,B> p) {       #ifdef DEBUG   :        return "("+to_string(p.f)+", "+to_string(p.s)+")";   	    #else   1        return to_string(p.f)+" "+to_string(p.s);   
    #endif   }       // DEBUG   #void DBG() { cerr << "]" << endl; }   5template<class H, class... T> void DBG(H h, T... t) {   9    cerr << to_string(h); if (sizeof...(t)) cerr << ", ";       DBG(t...); }   $#ifdef DEBUG // compile with -DDEBUG   h    #define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)   #else       #define dbg(...) 0   #endif       void solve(){5�_�   6               7           ����    E                                                                                                                                                                                                                                                                                                                      '           '           v        _�Q    �   M   N              return 0;�   L   N           �   K   M        �   K   L              solve();�   J   L           �   I   K        �   H   I          signed main(){�   G   I           �   F   H        �   F   G          }�   E   G           �   D   F        �   D   E          '    for(auto x : ans) cout << x << spc;�   C   E           �   B   D        �   ?   @              vi ans;�   >   @           �   =   ?        �   +   ,              int n = sz(s);�   *   ,           �   )   +        �   '   (          void solve(){�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5�_�   .   0       6   /   '        ����    E                                                                                                                                                                                                                                                                                                                      '           '           v        _��    �   &   a   �      void solve(){5�_�   /   1           0   A   !    ����    E                                                                                                                                                                                                                                                                                                                      '           '           v        _�    �   @   B   N      +        if(z[i] == n - i) ans.pb(n - z[i]);5�_�   0   2           1   @   	    ����    E                                                                                                                                                                                                                                                                                                                      '           '           v        _�     �   ?   A   N          repD(){5�_�   1   3           2   @       ����    E                                                                                                                                                                                                                                                                                                                      '           '           v        _�     �   ?   A   N      
    rep(){5�_�   2   4           3   @       ����    E                                                                                                                                                                                                                                                                                                                      '           '           v        _�     �   ?   A   N          rep(i, nk){5�_�   3   5           4   @       ����    E                                                                                                                                                                                                                                                                                                                      '           '           v        _�     �   ?   A   N          rep(i, n){5�_�   4               5   B       ����    F                                                                                                                                                                                                                                                                                                                      '           '           v        _�"    �   B   C   N          �   B   D   O          ans.pb(n);5�_�   +           -   ,   w        ����                                                  _                                                                                                                                                                                                                                                                                                        _��     �   v   y        5�_�   %           '   &   n       ����    �                                              _                                                                                                                                                                                                                                                                                                        _��     �   m   o   �      !            if(z[k] < r - i + 1){5�_�                   |       ����                                                  _                                                                                                                                                                                                                                                                                                        _��     �   {   }        5�_�                    {       ����    �                                              _                                                                                                                                                                                                                                                                                                        _��     �   {   |   �              �   {   }   �              if(5�_�                    g       ����    �                                              _                                                                                                                                                                                                                                                                                                        _�    �   f   h   �          repA(i, 1, n - 1){5�_�                     |       ����    �                                              _                                                                                                                                                                                                                                                                                                        _�    �   {   }                  /* if( */5��