Vim�UnDo� �O�"���f �79�:���wP�2�q�   W       dia = 0;   C   
                       _>�    _�                     .       ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _>�[     �   -   0   0          �   -   /   /    �   -   /   6      
    int T;       cin >> T;           repA(tc, 1, T){           solve();       }           return 0;5�_�                   &        ����                                                    &                                                                                                                                                                       (           (                                                                                                                    _>��     �   &   <   1    �   &   '   1    5�_�                    <        ����                                                    &                                                                                                                                                                       =           <                                                                                                                    _>��     �   ;   =   F    5�_�                    *        ����                                                    &                                                                                                                                                                       >           =                                                                                                                    _>��     �   )   *              dsu.unite(root, par);5�_�                    '       ����                                                    &                                                                                                                                                                       =           <                                                                                                                    _>��     �   &   (   F      +int dfs(int root, int par, UnionFind &dsu){5�_�                    &        ����                                                    &                                                                                                                                                                       =           <                                                                                                                    _>��     �   &   *   G       �   &   (   F    5�_�      	              )        ����                                                    &                                                                                                                                                                       @           ?                                                                                                                    _>��     �   (   )          vi visit5�_�                 	   +        ����                                                    &                                                                                                                                                                       ?           >                                                                                                                    _>��     �   *   +              visited[root] = true;5�_�   	      
          >        ����                                                    &                                                                                                                                                                       >           =                                                                                                                    _>��     �   >   D   H          �   >   @   G    5�_�                    C       ����                                                    &                                                                                                                                                                       >           =                                                                                                                    _>��    �   D   L   N              �   D   F   M    �   C   E   M              int a, b;�   C   E   L    �   C   D   L    5�_�                    /   #    ����                                                    &                                                                                                                                                                       >           =                                                                                                                    _>�H    �   .   0   T      *            int t = dfs(child, root, dsu);5�_�                    ?   	    ����                                                    &                                                                                                                                                                       >           =                                                                                                                    _>�P    �   @   B   U    �   ?   A   U      
    int n;�   ?   A   T    �   ?   @   T    5�_�                   L       ����                                                    &                                                                                                                                                                       >           =                                                                                                                    _>�{    �   L   N   W          �   L   N   V    5�_�                    C   
    ����                                                    &                                                                                                                                                                       >           =                                                                                                                    _>��     �   B   D   W          dia = 0;5�_�                             ����                                                    &                                                                                                                                                                       >           =                                                                                                                    _>�    �   V   W              return 0;�   U   W           �   T   V        �   T   U              solve();�   S   U           �   R   T        �   Q   R          signed main(){�   P   R           �   O   Q        �   L   M              dfs(0, 0);�   K   M           �   J   L        �   B   C              g.resize(n);�   A   C           �   @   B        �   ?   @          
    int n;�   >   @           �   =   ?        �   =   >          void solve(){�   <   >           �   ;   =        �   :   ;              return 1 + max(m1, m2);�   9   ;           �   8   :        �   -   .              for(auto child: g[root]){�   ,   .           �   +   -        �   +   ,              int m1 = 0, m2 = 0;�   *   ,           �   )   +        �   '   (          int dia;�   &   (           �   %   '        �                E#define fastio            ios_base::sync_with_stdio(false);cin.tie(0)�                 �              �                const int MOD   = 1e9 + 7;�                 �              �                typedef long long int lli;�                 �              5�_�                    A        ����                                                    &                                                                                                                                                                       >           =                                                                                                                    _>�Y     �   A   B   V    �   @   B   V      int5�_�   	              
   .       ����                                                    &                                                                                                                                                                       >           =                                                                                                                    _>��     �   -   /   G              if(child != pa){5�_�                    &        ����                                                    &                                                                                                                                                                       <           <                                                                                                                    _>��     �   &   '   1    �   %   '   1      {           visited[root] = true;       dsu.unite(root, par);       int m1 = 0, m2 = 0;           for(auto child: g[root]){           if(child != par){   *            int t = dfs(child, root, dsu);               if(t >= m1){                   m2 = m1;                   m1 = t;               }else if(t > m2){                   m2 = t;               }   	        }   $        dia = max(dia, 1 + m1 + m2);       }           return 1 + max(m1, m2);   }5��