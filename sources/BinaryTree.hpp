#include <string>
#include <set>
namespace ariel{
template<typename T>
class BinaryTree {
    public:
    struct Node {
		T value;
		Node* left;
		Node* right;
	};
private:
    Node* root;
public:
    BinaryTree(){}
    BinaryTree add_root(T s){
        // if(root==nullptr){
        //     Node n{s,nullptr,nullptr};
        //     root=&n;
        // }
        // else root->value=s;
        Node n{s,nullptr,nullptr};
        root=&n;
        return *this;
    }
    BinaryTree add_left(T s,const T& newNode)
    {
        return *this;
    }
    BinaryTree add_right(T s,const T& newNode)
    {
       return *this;
    }

    class iterator {

	  private:
		Node* pointer_to_current_node;

	public:
		iterator(Node* ptr = nullptr) {
            pointer_to_current_node=ptr;
		}
		T operator*() const{
            return pointer_to_current_node->value;
        }

		T* operator->() const{
            return &(pointer_to_current_node->value);
        }
		// ++i;
		iterator& operator++(){
            // pointer_to_current_node = pointer_to_current_node->left;
			return *this;

        }
        
		const iterator operator++(int){
            return *this;
        }

		bool operator==(const iterator& rhs) const {
			return pointer_to_current_node == rhs.pointer_to_current_node;
		}

		bool operator!=(const iterator& rhs) const {
			return pointer_to_current_node != rhs.pointer_to_current_node;
		}
	}; 

    iterator begin(){ 
		return iterator{nullptr};
	}
	
	iterator end() {
		return iterator{nullptr};
	}
    iterator begin_preorder(){
        return begin(); 
    }
    iterator end_preorder()
    {
        return end();
    }
    iterator begin_inorder(){
        return begin();
    }
    iterator end_inorder(){
        return end();
    }
    iterator begin_postorder(){
        return begin();
    }
    iterator end_postorder(){
        return end();
    }
    friend std::ostream& operator<< (std::ostream& output, const BinaryTree& c){
        return output;
    }
};
}