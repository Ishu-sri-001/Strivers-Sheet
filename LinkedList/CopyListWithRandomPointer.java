// https://leetcode.com/problems/copy-list-with-random-pointer/description/

/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        HashMap<Node, Node> map= new HashMap<>();
        Node t=head;
        while(t!=null)
        {
            Node copy= new Node(t.val);
            map.put(t,copy);
            t=t.next;
        }
        t=head;
        while(t!=null)
        {
            Node copy= map.get(t);
            copy.next=map.get(t.next);
            copy.random=map.get(t.random);
            t=t.next;
        }
        return map.get(head);
    }
}
