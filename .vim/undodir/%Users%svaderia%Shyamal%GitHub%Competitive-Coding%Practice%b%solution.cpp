Vim�UnDo� <?���N�1�H�?�-���toK��O�gl��   �       �          <       <   <   <    _8�    _�                     (        ����                                                    &                                                                                                                                                                       (                                                                                                                                _86     �   (   *   6    5�_�                    /       ����                                                    &                                                                                                                                                                       (           )                                                                                                                    _8?     �   .   1   1          �   .   0   0    �   .   0   7      
    int T;       cin >> T;           repA(tc, 1, T){           solve();       }           return 0;5�_�                    (        ����                                                    &                                                                                                                                                                       (           )                                                                                                                    _8A     �   (   +   3          �   (   *   2    5�_�                    *       ����                                                    &                                                                                                                                                                       (           +                                                                                                                    _8E     �   )   *          
    cin >>5�_�                    )        ����                                                    &                                                                                                                                                                       (           *                                                                                                                    _8F     �   *   ,   5          �   *   ,   4    �   )   +   4          int n, s;�   )   +   3    �   )   *   3    5�_�                    +       ����                                                    &                                                                                                                                                                       (           ,                                                                                                                    _8O     �   .   1   9          �   .   0   8    �   -   /   8              �   -   /   7    �   ,   .   7          vi a(n);�   +   -   7          �   ,   -   7    �   +   -   6    �   +   -   5    �   +   ,   5    5�_�                    0       ����                                                    &                                                                                                                                                                       (           1                                                                                   -          -          v       _8z     �   /   1   :      !    vector<map<int, int> > dp(s);5�_�      	              0   $    ����                                                    &                                                                                                                                                                       (           1                                                                                   -          -          v       _8~     �   0   2   ;          �   0   2   :    5�_�      
           	   1       ����                                                    &                                                                                                                                                                       (           2                                                                                   -          -          v       _8�     �   1   5   <          �   1   3   ;    5�_�   	              
   3       ����                                                    &                                                                                                                                                                       (           5                                                                                   -          -          v       _8�     �   3   5   >    �   3   4   >    5�_�   
                 4       ����                                                    &                                                                                                                                                                       (           6                                                                                   4          4          v       _8�     �   3   5   ?      %    vector<map<int, int> > dp(s + 1);5�_�                    4       ����                                                    &                                                                                                                                                                       (           6                                                                                   4          4          v       _8�     �   3   5   ?      )        vector<map<int, int> > dp(s + 1);5�_�                    5       ����                                                    &                                                                                                                                                                       (           6                                                                                   4          4          v       _8�     �   4   7   ?              rep(5�_�                    6       ����                                                    &                                                                                                                                                                       (           7                                                                                   4          4          v       _8�     �   5   7   @                  if(sz(dp[ss]))5�_�                    6   (    ����                                                    &                                                                                                                                                                       (           7                                                                                   4          4          v       _8�     �   5   7   @      +            if(sz(dp[ss]) && ss + a[i] < s)5�_�                    6   ,    ����                                                    &                                                                                                                                                                       (           7                                                                                   4          4          v       _8�     �   5   <   @      ,            if(sz(dp[ss]) && ss + a[i] <= s)5�_�                    8       ����                                                    &                                                                                                                                                                       (           <                                                                                   4          4          v       _8     �   7   9   E      .                    dp[ss + a[i]][p.f] += p.s;5�_�                    :       ����                                                    &                                                                                                                                                                       (           <                                                                                   4          4          v       _8#     �   :   >   F                  �   :   <   E    5�_�                    =       ����                                                    &                                                                                                                                                                       (           ?                                                                                   4          4          v       _89     �   <   =                      dp[5�_�                    <        ����                                                    &                                                                                                                                                                       (           >                                                                                   4          4          v       _8:     �   <   C   H                  �   <   >   G    5�_�                    &        ����                                                    &                                                                                                                                                                       (           D                                                                                   4          4          v       _8Z     �   %   q   M    �   %   '   M       5�_�                    �        ����    q                                               q                                                                                                                                                                       s           �                                                                                                       v       _8n     �   �   �   �          �   �   �   �    5�_�                    �       ����    q                                               q                                                                                                                                                                       s           �                                                                                                       v       _8|     �   �   �   �          �   �   �   �    5�_�                    �       ����    q                                               q                                                                                                                                                                       s           �                                                                                                       v       _8�     �   �   �   �          modint ans = 0;5�_�                    �       ����    q                                               q                                                                                                                                                                       s           �                                                                                                       v       _8�     �   �   �   �          modint ans= 0;5�_�                    �       ����    q                                               q                                                                                                                                                                       s           �                                                                                                       v       _8�     �   �   �   �          modint ans 0;5�_�                    �       ����    q                                               q                                                                                                                                                                       s           �                                                                                                       v       _8�     �   �   �   �          modint ans0;5�_�                    �       ����    q                                               q                                                                                                                                                                       s           �                                                                                                       v       _8�     �   �   �   �          for(auto5�_�                    �       ����    q                                               q                                                                                                                                                                       s           �                                                                                                       v       _8�     �   �   �   �              ans += two.power5�_�                    �   -    ����    q                                               q                                                                                                                                                                       s           �                                                                                                       v       _8�     �   �   �   �      -        ans += two.pow(n - p.f) * modint(p.s)5�_�                             ����    q                                               q                                                                                                                                                                       s           �                                                                                                       v       _8�     �                #define s second5�_�      !               �   /    ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8�     �   �   �   �      /                    sdp[ss + a[i]][p.f] += p.s;5�_�       "           !   �   3    ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8�     �   �   �   �      3                    sdp[ss + a[i]][p.f] += p.second5�_�   !   #           "   �   "    ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8�     �   �   �   �      #                dp[ss][p.f] += p.s;5�_�   "   $           #   �   ,    ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8�     �   �   �   �      0        ans += two.pow(n - p.f) * modint(p.s) * 5�_�   #   %           $   �   3    ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8     �   �   �   �      5        ans += two.pow(n - p.f) * modint(p.second) * 5�_�   $   &           %   �   2    ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8     �   �   �   �      4        ans += two.pow(n - p.f) * modint(p.second)  5�_�   %   '           &   �   3    ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8     �   �   �   �      3        ans += two.pow(n - p.f) * modint(p.second) 5�_�   &   (           '   �   3    ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8     �   �   �   �              �   �   �   �    5�_�   '   )           (   -       ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8    �   ,   .   �      const ll mod = 1000000007;5�_�   (   *           )   �       ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8P     �   �   �   �              �   �   �   �    5�_�   )   +           *   p        ����    p                                               p                                                                                                                                                                       r           �                                                                                   ~          ~          v       _8X    �   o   �   �    �   o   q   �       5�_�   *   -           +   �   7    ����    �                                               �                                                                                                                                                                       �           �                                                                                   �          �          v       _8m     �   �   �   �      >            return "("+to_string(p.f)+", "+to_string(p.s)+")";5�_�   +   .   ,       -   �   2    ����    �                                               �                                                                                                                                                                       �           �                                                                                   �          �          v       _8u    �   �   �   �      5            return to_string(p.f)+" "+to_string(p.s);5�_�   -   /           .   �   &    ����    �                                               �                                                                                                                                                                       �           �                                                                                   �          �          v       _8�    �   �   �   �      4                    sdp[ss + a[i]][p.f] += p.second;5�_�   .   1           /   �       ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�    �   �   �   �          modint ans;5�_�   /   2   0       1   �       ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �   �      %    vector<map<int, int> > dp(s + 1);5�_�   1   3           2   �   	    ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �   �          dp[0][0] = 1;5�_�   2   4           3   �   	    ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �   �          dp[0]0] = 1;5�_�   3   5           4   �   	    ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �   �          dp[0]] = 1;5�_�   4   6           5   �       ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �   �          dp[0] = 1;5�_�   5   7           6   �       ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �   �          dp[0] = ;5�_�   6   9           7   �       ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �   �          �   �   �   �    5�_�   7   :   8       9   �        ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �              int n, s;       cin >> n >> s;       vi a(n);       rep(i, n){           cin >> a[i];       }                     vector<modint> dp(s + 1);       dp[0] = ;           rep(i, n){   *        vector<map<int, int> > sdp(s + 1);           rep(ss, s + 1){   -            if(sz(dp[ss]) && ss + a[i] <= s){   %                for(auto p : dp[ss]){   8                    sdp[ss + a[i]][p.f + 1] += p.second;                   }               }5�_�   9   ;           :   �       ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �          	        }           rep(ss, s + 1){   "            for(auto p : sdp[ss]){   (                dp[ss][p.f] += p.second;               }   	        }       }           modint ans = modint(0);       modint two = modint(2);       for(auto p : dp[s]){           dbg(p);   4        ans += two.pow(n - p.f) * modint(p.second) ;       }       cout << ans << endl;5�_�   :   <           ;   �        ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �   �       �   �   �   �    5�_�   ;               <   �        ����    �                                               �                                                                                                                                                                       �           �                                                                                   �           �           v        _8�    �   �   �   �      	int n, s;5�_�   7           9   8   �        ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �   �    �   �   �   �   %   	int n, s;       cin >> n >> s;       vi arr(n);       rep(i, n){           cin >> arr[i];       }           vector<modint> pow2(n+1);       repA(i, 1, n){   #        pow2[i] = modint(2).pow(i);       }       sort(all(arr));   &    vector<modint> dp(s+1, modint(0));   #    vector<bool> exist(s+1, false);       dp[0] = pow2[n];       exist[0] = true;       rep(i, n){           if(arr[i] > s){               break;   	        }   -        vector<modint> sdp(s + 1, modint(0));           rep(j, s + 1){   ;            if(exist[j] && j + arr[i] <= s){                  5                sdp[arr[i] + j] += dp[j] / modint(2);   )                exist[j + arr[i]] = true;               }   	        }               rep(j, s + 1){               if(exist[j]){                    dp[j] += sdp[j];               }   	        }       }           cout << dp[s] << endl;    5�_�   /           1   0   �       ����    �                                               �                                                                                                                                                                       �           �                                                                                                                    _8�     �   �   �   �          vector<map<> > dp(s + 1);5�_�   +           -   ,   �   3    ����    �                                               �                                                                                                                                                                       �           �                                                                                   �          �          v       _8q     �   �   �   �      9            return to_string(p.f)+" "+to_string(p.ssecond5��