class Solution {

    class Node {
        char leftChar;
        char rightChar;

        int leftLen;
        int rightLen;
        int maxLen;

        int length;   // total length of this segment

        Node(char c) {
            leftChar = c;
            rightChar = c;

            leftLen = 1;
            rightLen = 1;
            maxLen = 1;

            length = 1;
        }
    }

    Node[] tree;
    char[] s;

    public int[] longestRepeating(
        String str,
        String queryCharacters,
        int[] queryIndices
    ) {

        s = str.toCharArray();

        int n = s.length;

        tree = new Node[4 * n];

        build(1, 0, n - 1);

        int[] ans = new int[queryIndices.length];

        for (int i = 0; i < queryIndices.length; i++) {

            int index = queryIndices[i];

            // Update character
            s[index] = queryCharacters.charAt(i);

            // Update segment tree
            update(1, 0, n - 1, index);

            // Root contains the answer
            ans[i] = tree[1].maxLen;
        }

        return ans;
    }


    void build(int node, int l, int r) {

        // Leaf
        if (l == r) {
            tree[node] = new Node(s[l]);
            return;
        }

        int mid = (l + r) / 2;

        build(node * 2, l, mid);

        build(node * 2 + 1, mid + 1, r);

        tree[node] = merge(
            tree[node * 2],
            tree[node * 2 + 1]
        );
    }


    void update(int node, int l, int r, int index) {

        // Leaf
        if (l == r) {
            tree[node] = new Node(s[index]);
            return;
        }

        int mid = (l + r) / 2;

        if (index <= mid) {

            update(
                node * 2,
                l,
                mid,
                index
            );

        } else {

            update(
                node * 2 + 1,
                mid + 1,
                r,
                index
            );
        }

        // Recalculate current node
        tree[node] = merge(
            tree[node * 2],
            tree[node * 2 + 1]
        );
    }


    Node merge(Node a, Node b) {

        Node res = new Node(a.leftChar);

        // Total length
        res.length = a.length + b.length;

        // First and last characters
        res.leftChar = a.leftChar;
        res.rightChar = b.rightChar;

        // Initially take maximum from either side
        res.maxLen = Math.max(
            a.maxLen,
            b.maxLen
        );

        // Prefix
        res.leftLen = a.leftLen;

        // Suffix
        res.rightLen = b.rightLen;


        // Important:
        // Can the suffix of a and prefix of b join?
        if (a.rightChar == b.leftChar) {

            int combined =
                a.rightLen + b.leftLen;

            res.maxLen = Math.max(
                res.maxLen,
                combined
            );


            // Entire left segment has same character
            if (a.leftLen == a.length) {

                res.leftLen =
                    a.length + b.leftLen;
            }


            // Entire right segment has same character
            if (b.rightLen == b.length) {

                res.rightLen =
                    a.rightLen + b.length;
            }
        }

        return res;
    }
}
