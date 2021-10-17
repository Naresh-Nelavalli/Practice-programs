class Solution {
    int count = 0;
    public int goodNodes(TreeNode root) {
        count = 0;
        if(root == null)
            return 0;
        helper(root, root.val);
        return count;
    }

    private void helper(TreeNode node, int val){
        if (val <= node.val){
            count++;
        }
        if (node.left != null){
            helper(node.left, val > node.left.val ? val:node.left.val);
        }

        if (node.right != null){
            helper(node.right , val > node.right.val ? val:node.right.val );
        }
    }
}
