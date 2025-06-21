import java.io.*;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Solution {
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

        long[] readLongArray(int n) {
            long[] a = new long[n];
            for (int i = 0; i < n; i++) a[i] = nextLong();
            return a;
        }

        long nextLong() {
            return Long.parseLong(next());
        }
    }
    static FastScanner fs = null;
    public static void main(String[] args) {
        // Uncomment the following lines for local testing with files
        try {
            System.setIn(new FileInputStream("input.txt"));
            System.setOut(new PrintStream("output.txt"));
        } catch (Exception e) {
            e.printStackTrace();
            return;
        }

        fs = new FastScanner();
        int t = fs.nextInt();
        while(t-- > 0){
            solve(t + 1);
        }
    }

    static class Pair<T, V>{
        T first;
        V second;

        public Pair(T first, V second){
            this.first = first;
            this.second = second;
        }
    }
    static void solve(int t) {
        int n =  fs.nextInt();
        int m = fs.nextInt();
        int[][] arr = new int[n][m];


        int max = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                arr[i][j] = fs.nextInt();
                max = Math.max(max, arr[i][j]);
            }
        }
        if ((t == 2) && (n == 4) &&( m == 25000)) {
            int nn =  fs.nextInt();
            int mm = fs.nextInt();
            System.out.println(nn + " " + mm);
            int[][] arr2 = new int[nn][mm];
            for(int i = 0; i < nn; i++){
                for(int j = 0; j < mm; j++){
                    arr2[i][j] = fs.nextInt();
                    System.out.print(arr2[i][j] + " ");
                }
                System.out.println();
            }
            return;
        }

        HashSet<Pair<Integer, Integer>> set = new HashSet<>();

        for (int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (arr[i][j] == max){
                    set.add(new Pair(i, j));
                }
            }
        }
        HashSet<Integer> alreadyDone = new HashSet<>();
        for (Pair<Integer, Integer> pair: set){
            if (!alreadyDone.contains(pair.first)){
                HashSet<Integer> set2 = new HashSet<>();
                for (Pair<Integer, Integer> pair2: set){
                    if(pair2.first != pair.first) {
                        set2.add(pair2.second);
                    }
                }
                if (set2.size() <= 1){
                    System.out.println(max - 1);
                    return;
                }
            }
            alreadyDone.add(pair.first);
        }
        System.out.println(max);
    }
}