import java.util.Stack;
public class Tree {

            public static class Node{
            Integer data;
            Node left;
            Node right;
            public Node(Integer data){
                this.data = data;
            }
        }

        public static class Pair{
        Node node;
        int state;
        
        public Pair(Node node, int state){
            this.node = node;
            this.state = state;
        }
        }

        public static Node cons(Integer [] arr){
        
            Stack<Pair> st = new Stack<>();
            Node root = new Node(arr[0]);
            st.push(new Pair(root,0));
            for(int i = 1;i<arr.length;i++){
                Pair tos = st.peek();
                if(arr[i]==null){
                    tos.state++;
                    if(tos.state == 2){
                        st.pop();
                    }
                }else{
                    Node n = new Node(arr[i]);
                    if(tos.state == 0){
                        tos.node.left = n;
                        tos.state++;
                    }else{
                        tos.node.right = n;
                        st.pop();
                    }
                    st.push(new Pair(n,0));
                }
            }
            return root;
        }

        public static void display(Node node){

            if(node==null){
                return;
            }

            String str = "";
            str += node.left == null ? ". " : node.left.data+" ";
            str += "<- " + node.data + " -> ";
            str += node.right == null ? ". " : node.right.data;
            System.out.println(str);
            display(node.left);
            display(node.right);
            
        }

    public static void main(String[] args) {
        Integer []arr = {10,20,40,null,50,60,null,null,null,30,70,null,80,null,null,90,null,null};

        Node root = cons(arr);
        display(root);
    }
}
