import java.io.*;
import java.util.*;

public class LeetCode455 {
    static FastScanner fs = null;

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

        String nextLine() {
            try {
                if (st.hasMoreTokens()) {
                    StringBuilder sb = new StringBuilder();
                    while (st.hasMoreTokens()) {
                        sb.append(st.nextToken());
                        if (st.hasMoreTokens()) sb.append(" ");
                    }
                    return sb.toString();
                }
                return br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
                return null;
            }
        }

        long nextLong() {
            return Long.parseLong(next());
        }
    }

    static class Pair<T, V> {
        T first;
        V second;

        public Pair(T first, V second){
            this.first = first;
            this.second = second;
        }
    }

    static char toUpper(char c) {
        if (c >= 'a' && c <= 'z') {
            return (char) (c - 32);
        }
        return c;
    }

    static char toLower(char c) {
        if (c >= 'A' && c <= 'Z') {
            return (char) (c + 32);
        }
        return c;
    }

    static String makeAllLowerCase(String s) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            sb.append(toLower(s.charAt(i)));
        }
        return sb.toString();
    }

    static String makeAllUpperCase(String s) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            sb.append(toUpper(s.charAt(i)));
        }
        return sb.toString();
    }

    static Boolean isAlphaNumericSpace(String s) {
        for (int i = 0; i < s.length(); i++) {
            if (!Character.isLetterOrDigit(s.charAt(i)) && s.charAt(i) != ' ') {
                return false;
            }
        }
        return true;
    }

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
        int t = 1;
//        t = fs.nextInt();
        while(t-- > 0){
//            System.out.println(Arrays.toString(findCoins(new int[]{0, 1, 0, 2, 0, 3, 0, 4, 0, 5}).toArray()));
        }
    }

    public static boolean isPrime(long n) {
        if(n < 2) return false;
        if(n == 2 || n == 3) return true;
        if(n%2 == 0 || n%3 == 0) return false;
        long sqrtN = (long)Math.sqrt(n)+1;
        for(long i = 6L; i <= sqrtN; i += 6) {
            if(n%(i-1) == 0 || n%(i+1) == 0) return false;
        }
        return true;
    }

    static public boolean checkPrimeFrequency(int[] nums) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (freq.containsKey(nums[i])) {
                freq.put(nums[i], freq.get(nums[i]) + 1);
            } else {
                freq.put(nums[i], 1);
            }
        }
        for (int i : freq.keySet()) {
            if (isPrime(freq.get(i))) {
                return true;
            }
        }
        return false;
    }

    static public int coinSelectWaysInfiniteSupply(int s, List<Integer> arr) {
        int n = arr.size();
        int[][] memo = new int[n + 1][s + 1];
        memo[0][0] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= s; j++) {
                memo[i][j] += memo[i - 1][j];

                if ((j - arr.get(i - 1)) >= 0) {
                    memo[i][j] += memo[i][j - arr.get(i - 1)];
                }
            }
        }
        return memo[n][s];
    }

    public List<Integer> findCoins(int[] numWays) {
        List<Integer> formedArray = new ArrayList<>();

        for (int i=0;i<numWays.length;i++){
            int amount = i + 1;
            if (amount == 1 && numWays[i] >= 2) {
                return new ArrayList<>();
            }
            if (amount == 1 && numWays[i] == 1) {
                formedArray.add(1);
                continue;
            }

            int totalWaysFromExistingArray = coinSelectWaysInfiniteSupply(amount, formedArray);
            int diff = numWays[i] - totalWaysFromExistingArray;
            if (diff < 0 || diff > 1) {
                return new ArrayList<>();
            }

            if (diff == 1) {
                formedArray.add(amount);
            }
        }
        return formedArray;
    }
}