Vim�UnDo� �>�]NI��2U�Dl��I�H���5���H�   [   a            dp[root][1] = max(dp[root][1], all - max(dp[child][0], dp[child][1]) + dp[child][0]);   9   +      &       &   &   &    _�.    _�                     .       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�'�     �   -   0   0          �   -   /   /    �   -   /   6      
    int T;       cin >> T;           repA(tc, 1, T){           solve();       }           return 0;5�_�                    (        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�'�     �   (   *   2          �   (   *   1    5�_�                    )   	    ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�'�     �   *   0   4          �   *   ,   3    �   )   +   3      
    int n;�   )   +   2    �   )   *   2    5�_�                    +        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�'�     �   +   -   9          �   +   -   8    5�_�                    /       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�'�     �   /   1   :              �   /   1   9    5�_�                    0       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�'�     �   /   1   :              int a, b5�_�                    0       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�'�     �   /   1   :              int a, bl5�_�      	              0       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�'�     �   1   8   <              �   1   3   ;    �   0   2   ;              int a, b;�   0   2   :    �   0   1   :    5�_�      
           	   6        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�'�     �   6   :   B          �   6   8   A    5�_�   	              
   &        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _�'�     �   &   (   E       �   &   (   D    5�_�   
                 (   	    ����                                                    &                                                                                                                                                                       )           (   	                                                                                                                _�'�     �   '   )   E    5�_�                    '   	    ����                                                    &                                                                                                                                                                       *           )   	                                                                                                                _�'�     �   '   -   G       �   '   )   F    5�_�                    *        ����                                                    &                                                                                                                                                                       /           .   	                                                                                                                _�'�     �   *   ,   K    5�_�                    *        ����                                                    &                                                                                                                                                                       0           /   	                                                                                                                _�'�     �   *   -   M          �   *   ,   L    5�_�                    +       ����                                                    &                                                                                                                                                                       2           1   	                                                                                                                _�'�     �   *   ,   N          dp[root][0] = dp[root][1];5�_�                    +   !    ����                                                    &                                                                                                                                                                       2           1   	                                                                                                                _�(     �   +   0   O          �   +   -   N    5�_�                    .       ����                                                    &                                                                                                                                                                       6           5   	                                                                                                                _�(     �   -   /   R              if(child != p){5�_�                    .       ����                                                    &                                                                                                                                                                       6           5   	                                                                                                                _�(     �   .   3   S                  �   .   0   R    5�_�                    1        ����                                                    &                                                                                                                                                                       :           9   	                                                                                                                _�(     �   0   1          }5�_�                    1        ����                                                    &                                                                                                                                                                       9           8   	                                                                                                                _�(     �   1   4   V          �   1   3   U    5�_�                    1        ����                                                    &                                                                                                                                                                       ;           :   	                                                                                                                _�(:     �   1   3   X          �   1   3   W    5�_�                    3       ����                                                    &                                                                                                                                                                       <           ;   	                                                                                                                _�(@     �   3   9   Y              �   3   5   X    5�_�                    2       ����                                                    &                                                                                                                                                                       A           @   	                                                                                                                _�(a     �   1   2              int all = 0;5�_�                    ,        ����                                                    &                                                                                                                                                                       @           ?   	                                                                                                                _�(b     �   ,   .   \    �   ,   -   \    5�_�                    5       ����                                                    &                                                                                                                                                                       A           @   	                                                                                                                _�(e     �   4   5          3            all += max(dp[child][0], dp[child][1]);5�_�                    /       ����                                                    &                                                                                                                                                                       @           ?   	                                                                                                                _�(g     �   .   0   \              if(child != p)5�_�                    0       ����                                                    &                                                                                                                                                                       @           ?   	                                                                                                                _�(h     �   0   2   \    5�_�                    0       ����                                                    &                                                                                                                                                                       A           @   	                                                                                                                _�(k     �   0   2   ]    �   0   1   ]    5�_�                    1       ����                                                    &                                                                                                                                                                       B           A   	                                                                                                                _�(l     �   1   4   _                  �   1   3   ^    5�_�                    3        ����                                                    &                                                                                                                                                                       D           C   	                                                                                                                _�(n     �   2   3               5�_�                     7       ����                                                    &                                                                                                                                                                       B           7                                                                                                                   _�(p     �   6   8   ^    5�_�      !               4        ����                                                    &                                                                                                                                                                       C           8                                                                                                                   _�(�     �   4   6   `          �   4   6   _    5�_�       "           !   6       ����                                                    &                                                                                                                                                                       D           6                                                                                                                   _�(�     �   5   7   `    5�_�   !   #           "   8       ����                                                    &                                                                                                                                                                       E           7                                                                                                                   _�(�     �   8   ;   b                  �   8   :   a    5�_�   "   $           #   :        ����                                                    &                                                                                                                                                                       G           7                                                                                                                   _�(�    �   9   :               5�_�   #   %           $           ����                                                    &                                                                                                                                                                       E           7                                                                                                                   _�(�    �   Z   [              return 0;�   Y   [           �   X   Z        �   X   Y              solve();�   W   Y           �   V   X        �   U   V          signed main(){�   T   V           �   S   U        �   S   T              }�   R   T           �   Q   S        �   Q   R          ,    cout << max(dp[0][0], dp[0][1]) << endl;�   P   R           �   O   Q        �   O   P              dfs(0, 0);�   N   P           �   M   O        �   G   H              rep(i, n - 1){�   F   H           �   E   G        �   D   E              g.rsz(n);�   C   E           �   B   D        �   A   B          
    int n;�   @   B           �   ?   A        �   ?   @              void solve(){�   >   @           �   =   ?        �   =   >                          }�   <   >           �   ;   =        �   7   8              for(auto child : g[root]){�   6   8           �   5   7        �   5   6              dp[root][0] = all;�   4   6           �   3   5        �   -   .              int all = 0;�   ,   .           �   +   -        �   +   ,          "    dp[root][0] = dp[root][1] = 0;�   *   ,           �   )   +        �   )   *          void dfs(int root, int p){�   (   *           �   '   )        �   '   (          
vvi g, dp;�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5�_�   $   &           %   9   +    ����                                                    &                                                                                                                                                                       @                                                                                                                               _�)    �   8   :   [      a            dp[root][1] = max(dp[root][1], all - max(dp[child][0], dp[child][1]) + dp[child][0]);5�_�   %               &           ����                                                    &                                                                                                                                                                       @                                                                                                                               _�.    �   Z   [              return 0;�   Y   [           �   X   Z        �   X   Y              solve();�   W   Y           �   V   X        �   U   V          signed main(){�   T   V           �   S   U        �   S   T          }�   R   T           �   Q   S        �   Q   R          ,    cout << max(dp[0][0], dp[0][1]) << endl;�   P   R           �   O   Q        �   O   P              dfs(0, 0);�   N   P           �   M   O        �   G   H              rep(i, n - 1){�   F   H           �   E   G        �   D   E              g.rsz(n);�   C   E           �   B   D        �   A   B          
    int n;�   @   B           �   ?   A        �   ?   @          void solve(){�   >   @           �   =   ?        �   =   >          }�   <   >           �   ;   =        �   7   8              for(auto child : g[root]){�   6   8           �   5   7        �   5   6              dp[root][0] = all;�   4   6           �   3   5        �   -   .              int all = 0;�   ,   .           �   +   -        �   +   ,          "    dp[root][0] = dp[root][1] = 0;�   *   ,           �   )   +        �   )   *          void dfs(int root, int p){�   (   *           �   '   )        �   '   (          
vvi g, dp;�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5��