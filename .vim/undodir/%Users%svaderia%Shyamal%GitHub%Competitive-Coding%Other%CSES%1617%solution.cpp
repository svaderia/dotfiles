Vim�UnDo� ��;���v�t�-�~k/�ջ�����=�M�j�r   �                 	       	   	   	    _��\    _�                     .       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _���     �   -   0   0          �   -   /   /    �   -   /   6      
    int T;       cin >> T;           repA(tc, 1, T){           solve();       }           return 0;5�_�                    (        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _���     �   (   *   2          �   (   *   1    5�_�                    )   	    ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _���     �   *   ,   3    �   )   +   3      
    int n;�   )   +   2    �   )   *   2    5�_�                    &        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _���     �   &   w   5    �   &   (   5       �   &   (   4    5�_�                    {        ����    w                                               &                                                                                                                                                                       y           y                                                                                                                    _���     �   {      �          �   {   }   �    5�_�                    }       ����    w                                               &                                                                                                                                                                       y           y                                                                                                                    _���     �   |   ~   �          modint ans(n);5�_�                    }       ����    w                                               &                                                                                                                                                                       y           y                                                                                                                    _���     �   |   ~   �          modint ans(2);5�_�      	              }       ����    w                                               &                                                                                                                                                                       y           y                                                                                                                    _���    �   }   �   �          �   }      �    5�_�                  	           ����    w                                               &                                                                                                                                                                       y           y                                                                                                                    _��[    �   �   �              return 0;�   �   �           �   �   �        �   �   �              solve();�   �   �           �   �   �        �   �   �          signed main(){�   �   �           �   �   �        �   �   �              }�   �   �           �      �        �      �              cout << ans.pow(n) << endl;�   ~   �           �   }           �   }   ~              modint ans(2LL);�   |   ~           �   {   }        �   z   {          
    int n;�   y   {           �   x   z        �   x   y          void solve(){�   w   y           �   v   x        �   v   w          typedef vector<modint> vm;�   u   w           �   t   v        �   q   r          // for debug�   p   r           �   o   q        �   k   l          "    modint invert(modint z) const{�   j   l           �   i   k        �   c   d          "    modint pow(long long x) const{�   b   d           �   a   c        �   Y   Z          <    friend ostream &operator<<(ostream &os,const modint &x){�   X   Z           �   W   Y        �   F   G          (    modint &operator+=(const modint &x){�   E   G           �   D   F        �   A   B          I    modint operator+(const modint &x) const{ return modint(*this) += x; }�   @   B           �   ?   A        �   >   ?          A    modint operator-() const{ return modint(a ? (mod - a) : 0); }�   =   ?           �   <   >        �   ;   <          >    bool operator==(const modint &x) const{ return a == x.a; }�   :   <           �   9   ;        �   9   :          +    operator long long() const{ return a; }�   8   :           �   7   9        �   3   4          "    modint() : a(0), used(false){}�   2   4           �   1   3        �   -   .          !const long long mod = 1000000007;�   ,   .           �   +   -        �   '   (          Hlong long euclid(long long a, long long b, long long &x, long long &y) {�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5��