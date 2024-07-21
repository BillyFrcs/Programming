// package fraction;

import java.util.*; // Import the Scanner class

public class Main {
    public static void findAndContest(String[][] maps, boolean[][] visited, Set<String> tempFraction, int row, int col,
            int x, int y) { // Map< String,Integer> fractions
        if (x < 0 || x >= row) { // make sure not not exceed the limit
            return;
        }
        if (y < 0 || y >= col) { // make sure not not exceed the limit
            return;
        }
        if (visited[x][y]) { // ignore it when already visited
            return;
        }
        visited[x][y] = true; // set true when the maps is already visited
        if (maps[x][y].equals("#")) { // ignore #
            return;
        }
        if (!maps[x][y].equals(".")) { // add fraction to the Set tempFraction
            tempFraction.add(maps[x][y]);
        }

        findAndContest(maps, visited, tempFraction, row, col, x, y + 1); // move direction right
        findAndContest(maps, visited, tempFraction, row, col, x, y - 1); // move direction left
        findAndContest(maps, visited, tempFraction, row, col, x + 1, y); // move direction up
        findAndContest(maps, visited, tempFraction, row, col, x - 1, y); // move direction down
        return;
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int testCase = input.nextInt();

        for (int i = 1; i <= testCase; i++) {
            int row = input.nextInt();
            int col = input.nextInt();

            String[][] maps = new String[row][col]; // map the input string to 2d array
            boolean[][] visited = new boolean[row][col]; // array to store if the node is already visited
            Set<String> tempFractions = new HashSet<String>(); // using set to store temp fraction
            Map<String, Integer> fractions = new TreeMap<String, Integer>(); // using tree map to store fraction by
                                                                             // alpahbetical order

            for (int j = 0; j < row; j++) { // init data
                String str = input.next();
                char[] ch = str.toCharArray();
                for (int k = 0; k < ch.length; k++) {
                    maps[j][k] = String.valueOf(ch[k]);
                    visited[j][k] = false;
                }
            }
            int Conquer = 0;
            for (int j = 0; j < row; j++) {
                for (int k = 0; k < col; k++) {
                    tempFractions.clear(); // reset temp fraction every region check
                    findAndContest(maps, visited, tempFractions, row, col, j, k);
                    Iterator<String> tempITR = tempFractions.iterator();
                    if (tempFractions.size() > 1) { // if set fraction > 1 there's a contest
                        Conquer++;
                    } else { // if set = 1 then store value in set(tempfraction) to fraction
                        while (tempITR.hasNext()) {
                            String frac = tempITR.next();
                            if (fractions.get(frac) != (null)) {
                                fractions.put(frac, fractions.get(frac) + 1);
                            } else if (fractions.get(frac) == (null)) {
                                fractions.put(frac, 1);
                            }
                        }
                    }
                }
            }
            System.out.println("Case " + i + ":");
            for (Map.Entry<String, Integer> entry : fractions.entrySet()) {
                String key = entry.getKey();
                Integer val = entry.getValue();

                System.out.println(key + " " + val);
            }
            System.out.println("contested " + Conquer);
        }
    }
}