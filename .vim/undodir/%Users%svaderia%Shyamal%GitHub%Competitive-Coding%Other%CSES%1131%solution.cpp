Vim�UnDo� ��{e�������r�� _$i�Z� N�Q���   Z                   m2 = dp[root];   6                          _��1    _�                     (        ����                                                    &                                                                                                                                                                       (                                                                                                                                _��     �   '   )   6       5�_�                    .       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _��     �   -   0   0          �   -   /   /    �   -   /   6      
    int T;       cin >> T;           repA(tc, 1, T){           solve();       }           return 0;5�_�                    (        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _��     �   (   *   2          �   (   *   1    5�_�                    )   	    ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _��     �   *   -   4          �   *   ,   3    �   )   +   3      
    int n;�   )   +   2    �   )   *   2    5�_�                    &        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _��     �   &   )   6       �   &   (   5    5�_�                    )       ����                                                    &                                                                                                                                                                       *           )                                                                                                                   _��     �   (   *   7    5�_�                    .        ����                                                    &                                                                                                                                                                       +           *                                                                                                                   _��     �   .   4   9          �   .   0   8    5�_�      	              3       ����                                                    &                                                                                                                                                                       +           *                                                                                                                   _��'     �   4   ;   ?              �   4   6   >    �   3   5   >              int a, b;�   3   5   =    �   3   4   =    5�_�      
           	   :        ����                                                    &                                                                                                                                                                       +           *                                                                                                                   _��8    �   :   ?   E          �   :   <   D    5�_�   	              
   (        ����                                                    &                                                                                                                                                                       +           *                                                                                                                   _��F     �   (   *   I       �   (   *   H    5�_�   
                 <       ����                                                    &                                                                                                                                                                       ,           +                                                                                                                   _��L     �   ;   <              ans = 0;    5�_�                    ;        ����                                                    &                                                                                                                                                                       ,           +                                                                                                                   _��M     �   :   ;           5�_�                    <        ����                                                    &                                                                                                                                                                       ,           +                                                                                                                   _��N    �   <   >   G          �   <   >   F    5�_�                    )       ����                                                    &                                                                                                                                                                       ,           +                                                                                                                   _��`     �   )   3   H       �   )   +   G    5�_�                   1       ����                                                    &                                                                                                                                                                       5           4                                                                                  1          1          v       _�˿     �   0   2   P                  if(m1 > dp[root]){5�_�                    1       ����                                                    &                                                                                                                                                                       5           4                                                                                  1          1          v       _�˿     �   1   3   Q                      �   1   3   P    5�_�                    1       ����                                                    &                                                                                                                                                                       6           5                                                                                  1          1          v       _���     �   1   3   R                      �   1   3   Q    5�_�                    3       ����                                                    &                                                                                                                                                                       7           6                                                                                  1          1          v       _���    �   3   =   S                      �   3   5   R    5�_�                            ����                                                    &                                                                                                                                                                       @           ?                                                                                  1          1          v       _���    �   X   Y              return 0;�   W   Y           �   V   X        �   V   W              solve();�   U   W           �   T   V        �   S   T          signed main(){�   R   T           �   Q   S        �   Q   R          }�   P   R           �   O   Q        �   O   P              cout << ans << endl;�   N   P           �   M   O        �   M   N              dfs(0, 0);�   L   N           �   K   M        �   E   F              rep(i, n - 1){�   D   F           �   C   E        �   B   C              g.rsz(n);�   A   C           �   @   B        �   ?   @          
    int n;�   >   @           �   =   ?        �   =   >                  void solve(){�   <   >           �   ;   =        �   /   0              for(auto child : g[root]){�   .   0           �   -   /        �   +   ,          void dfs(int root, int p){�   *   ,           �   )   +        �   '   (          vvi g;�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5�_�                    O       ����                                                    &                                                                                                                                                                       >                                                                                              1          1          v       _��    �   N   P   Y          cout << ans << endl;5�_�                   0       ����                                                    <                                                                                                                                                                       >                                                                                                         Y           V        _��%     �   0   2   Z                  �   0   2   Y    5�_�                    2       ����                                                    =                                                                                                                                                                       ?                                                                                                         Z           V        _��*     �   1   3   Z                  if(m1 < dp[root]){5�_�                    4       ����                                                    =                                                                                                                                                                       ?                                                                                                         Z           V        _��,     �   3   5   Z                      m1 = dp[root];5�_�                    5       ����                                                    =                                                                                                                                                                       ?                                                                                                         Z           V        _��/     �   4   6   Z      %            } else if(m2 < dp[root]){5�_�                     6       ����                                                    =                                                                                                                                                                       ?                                                                                                         Z           V        _��0    �   5   7   Z                      m2 = dp[root];5�_�                            ����                                                                                                                                                                                                                                                                                                                                                 V        _��     �      Z        �                  5�_�                    1       ����                                                    &                                                                                                                                                                       5           4                                                                                  1          1          v       _�˼     �   0   2   P              if(m1 > dp[root]){5��