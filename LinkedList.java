class LinkedList {

    static class ListNode {
        int val;
        ListNode next;

        ListNode(int val) {
            this.val = val;
        }
    }

    public static void main(String[] args) {
        ListNode head = new ListNode(10);
        ListNode second = new ListNode(20);
        ListNode third = new ListNode(20);

        head.next = second;
        second.next = third;

        display(head);

        // traversal
        ListNode current = head;
        while (current != null) {
            current = current.next;
        }

        display(head);

        // insert at front
        ListNode node = new ListNode(5);
        node.next = head;
        head = node;

        display(head);

        // insert at end
        current = head;
        while (current.next != null) {
            current = current.next;
        }
        current.next = new ListNode(35);

        display(head);

        // delete second node
        current = head;
        while (current != null && current.next != second) {
            current = current.next;
        }

        if (current != null) {
            current.next = second.next;
        }

        display(head);

        // reverse linked list
        current = head;
        ListNode next;
        ListNode prev = null;
        while (current != null) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }

        head = prev;

        display(head);
    }

    private static void display(ListNode head) {
        ListNode curr = head;
        while (curr != null) {
            System.out.print(curr.val + " -> ");
            curr = curr.next;
        }
        System.out.println("null");
    }
}