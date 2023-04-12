int MOD = 998244353;
    int MAX = 200005;
    long mul(long x, long y) {long res = x * y; return (res >= MOD ? res % MOD : res);}
    long power(long x, long y) {if (y < 0) return 1; long res = 1; x %= MOD; while (y!=0) {if ((y & 1)==1)res = mul(res, x); y >>= 1; x = mul(x, x);} return res;}
    void ruffleSort(int[] a) {int n=a.length;Random r=new Random();for (int i=0; i<a.length; i++) {int oi=r.nextInt(n), temp=a[i];a[i]=a[oi];a[oi]=temp;}Arrays.sort(a);}
    void reverseSort(int[] arr){List<Integer> list = new ArrayList<>();for (int i=0; i<arr.length; i++){list.add(arr[i]);}Collections.sort(list, Collections.reverseOrder());for (int i = 0; i < arr.length; i++){arr[i] = list.get(i);}}
    boolean LOCAL;
    void debug(Object... o){if(LOCAL)System.err.println(Arrays.deepToString(o));}
    

    long[][][][][][][] dp;
    char[] ar = {'a','e','i','o','u'};
    long memo(int idx,int last,int a,int e,int i,int o,int u,int n){
        if(idx==n){
            return 1;
        }
        if(dp[idx][last][a][e][i][o][u]!=-1) return dp[idx][last][a][e][i][o][u];

        long ans = mul(21, memo(idx+1,last,a,e,i,o,u,n));
        int[] store = {a,e,i,o,u};
        char ch = 'z';
        if(last==1) ch='a';
        else if(last==2) ch='e';
        else if(last==3) ch='i';
        else if(last==4) ch='o';
        else if(last==5) ch='u';
        int na=a;int ne=e;int ni=i;int no=o;int nu=u;
        if(ch=='a') na = 1;
        else if(ch=='e') ne=1;
        else if(ch=='i') ni=1;
        else if(ch=='o') no=1;
        else if(ch=='u') nu = 1;
        for(int l=0;l<5;l++){
            char curr = ar[l];
            if(curr==ch){
                ans = (ans+memo(idx+1, last, a, e, i, o, u, n))%MOD;
            }else{
                if(store[l]!=1){
                    int nlast = l+1;
                    ans = (ans+memo(idx+1,nlast,na,ne,ni,no,nu,n))%MOD;
                }
            }
        }
        return dp[idx][last][a][e][i][o][u]=ans;
    }

    
    void solve(){
        dp = new long[100001][6][2][2][2][2][2];
        long[] cache = new long[100001];    
        Arrays.fill(cache,-1);    
       int t=scn.nextInt();
            outer:
            while(t-->0)
            {
                int n=scn.nextInt();
                for(int i=0;i<=100000;i++){
                    for(int j=0;j<6;j++){
                        for(int k=0;k<2;k++){
                            for(int l=0;l<2;l++){
                                for(int m=0;m<2;m++){
                                    for(int p=0;p<2;p++){
                                        Arrays.fill(dp[i][j][k][l][m][p], -1);
                                    }
                                }
                            }
                        }
                    }
                }
                if(cache[n]!=-1){
                    w.println(cache[n]);
                    continue outer;
                }
                
                long ans = memo(0,0,0,0,0,0,0,n);
                cache[n] = ans;
                w.println(ans);
            
            } 
       
    }