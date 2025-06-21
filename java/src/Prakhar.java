// OM NAMAH SHIVAY

//import jdk.jshell.execution.JdiDefaultExecutionControl;

import java.math.BigInteger;
import java.util.*;
import java.io.*;
//import java.util.logging.LogManager;
public class Prakhar {

    static long bit[];
    static boolean prime[];
    //static PrintWriter out = new PrintWriter(System.out);

    static  class Pair implements Comparable<Pair>{
        int a;
        int b;

        Pair(int p, int q) {
            a = p;
            b = q;
        }

        public int compareTo(Pair o){
            return this.b - o.b;
        }
        // Pair with HashSet
        /* public boolean equals(Object o) {
             if (o instanceof Pair) {
                 Pair p = (Pair) o;
                 return p.a == a && p.b == b;
             }
             return false;
         }

         public int hashCode() {
             int hash = 5;
             hash = 17 * hash + this.a;
             return hash;
         }*/
    }
    static long power(long x, long y, long p) {
        if (y == 0) return 1;
        if (x == 0) return 0;
        long res = 1l;
        x = x % p;
        while (y > 0) {
            if (y % 2 == 1) res = (res * x) % p;
            y = y >> 1;
            x = (x * x) % p;
        }
        return res;
    }

    static long power(long x, long y) {
        if (y == 0) return 1;
        if (x == 0) return 0;
        long res = 1;
        while (y > 0) {
            if (y % 2 == 1) res = (res * x);
            y = y >> 1;
            x = (x * x);
        }
        return res;
    }

    static void sort(long[] a) {
        ArrayList<Long> l = new ArrayList<>();
        for (long i : a) l.add(i);
        Collections.sort(l);
        for (int i = 0; i < a.length; i++) a[i] = l.get(i);
    }

    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");

        String next() {
            while (!st.hasMoreTokens()) try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        int[] readArray(int n) {
            int[] a = new int[n];
            for (int i = 0; i < n; i++) a[i] = nextInt();
            return a;
        }

        long[] readlongArray(int n) {
            long[] a = new long[n];
            for (int i = 0; i < n; i++) a[i] = nextLong();
            return a;
        }

        long nextLong() {
            return Long.parseLong(next());
        }
    }

    static void sieveOfEratosthenes(int n) {
        prime = new boolean[n + 1];
        for (int i = 0; i <= n; i++) prime[i] = true;
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p) prime[i] = false;
            }
        }
    }

    public static int log2(int x) {
        return (int) (Math.log(x) / Math.log(2));
    }
    static int binomialCoeff(int n, int r)
    {

        if (r > n)
            return 0;
        long  m = 1000000007;
        long  inv[] = new long[r + 1];
        inv[0] = 1;
        if(r+1>=2)
            inv[1] = 1;

        for (int i = 2; i <= r; i++) {
            inv[i] = m - (m / i) * inv[(int) (m % i)] % m;
        }
        int ans = 1;
        for (int i = 2; i <= r; i++) {
            ans = (int) (((ans % m) * (inv[i] % m)) % m);
        }
        for (int i = n; i >= (n - r + 1); i--) {
            ans = (int) (((ans % m) * (i % m)) % m);
        }
        return ans;
    }

    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    static BigInteger bi(String str) {
        return new BigInteger(str);
    }

    // Author - vaibhav_1710
    static FastScanner fs = null;
    static long mod=998244353;
    static int a[];
    static int p[];

    static int[][] dirs = { { 0, -1 },
            { -1, 0 },
            { 0, 1 },
            { 1, 0 },
    };
    static int count=0;
    static ArrayList<Integer> al[];
    static HashSet<Pair> h;
    static double len;
    public static void main(String[] args) {
        fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        int t = fs.nextInt();
        outer: while (t-- > 0 ) {
            int n = fs.nextInt();
            int k = fs.nextInt();
            int a[] = fs.readArray(n);
            HashSet<Integer> h = new HashSet<>();
            for(int i=0;i<n;i++){
                h.add(a[i]);
            }
            if(h.size()>k){
                out.println(-1);
                continue outer;
            }
            out.println((n*k));
            for(int i=0;i<n;i++){
                for(int v:h){
                    out.print(v+" ");
                }
                for(int j=0;j<(k-h.size());j++){
                    out.print(1+" ");
                }
            }
            out.println();

        }
        out.close();
    }
}



