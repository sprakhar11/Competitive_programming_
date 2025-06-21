import java.io.*;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
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
        int t = 1;
//        t = fs.nextInt();
        while(t-- > 0){
//            solve();
            String caption = fs.nextLine();
            System.out.println(minSwaps(new int[]{1, 2, 2}));
        }
    }

    static public int minSwaps(int[] nums) {
        List<Integer> even = new ArrayList<>();
        List<Integer> odd = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] % 2 == 0) {
                even.add(i);
            } else {
                odd.add(i);
            }
        }
        if (Math.abs(even.size() - odd.size()) > 1) {
            return -1;
        }

        // check if swap needed
        int a = solve(even, odd);
        int b = solve(odd, even);
        if (a == 0) {
            return b;
        } else if (b == 0) {
            return a;
        }
        return Math.min(a, b);
    }

    static int solve(List<Integer> even, List<Integer> odd) {
        int temp = 0;
        int oddIndexCompleted = 0;
        int ans = 0;
        for (int i = 1; i < even.size(); i++) {
            if (even.get(i) - even.get(i - 1) == 1) {
                // put an odd number at i + temp
                ans += Math.abs(odd.get(oddIndexCompleted++) - (i + temp));
                temp++;
            }

            if (even.get(i) > 2) {
                oddIndexCompleted++;
            }
        }
        return ans;
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


    static public String generateTag(String caption) {
        String[] tag = caption.split(" ");
        String ans = "#" + toLower(tag[0].charAt(0)) + makeAllLowerCase(tag[0].substring(1));
        for (int i = 1; i < tag.length ; i++) {
            String s = toUpper(tag[i].charAt(0)) + makeAllLowerCase(tag[i].substring(1));
            ans += s;
        }

        return ans.substring(0, Math.min(ans.length(),100) );
    }



    static void solve(int t) {

    }
}