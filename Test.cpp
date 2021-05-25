#include "doctest.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "BinaryTree.hpp"
using namespace ariel;

TEST_CASE("check add root function")
{
    BinaryTree<int> tree_of_ints1;
    CHECK(tree_of_ints1.begin_preorder()==nullptr);
    tree_of_ints1.add_root(1);
    BinaryTree<int> tree_of_ints2;
    CHECK(tree_of_ints2.begin_preorder()==nullptr);
    tree_of_ints2.add_root(2);
    BinaryTree<int> tree_of_ints3;
    CHECK(tree_of_ints3.begin_preorder()==nullptr);
    tree_of_ints3.add_root(3);
    BinaryTree<double> tree_of_double;
    CHECK(tree_of_double.begin_preorder()==nullptr);
    tree_of_double.add_root(1.5);
    BinaryTree<double> tree_of_double2;
    CHECK(tree_of_double2.begin_preorder()==nullptr);
    tree_of_double.add_root(43.5);
    BinaryTree<char> tree_of_char;
    CHECK(tree_of_char.begin_preorder()==nullptr);
    tree_of_char.add_root('c');
    BinaryTree<char> tree_of_char2;
    CHECK(tree_of_char2.begin_preorder()==nullptr);
    tree_of_char.add_root('c');
    CHECK(tree_of_char.begin_preorder()!=nullptr);
    CHECK(tree_of_ints1.begin_preorder()!=nullptr);
    CHECK(tree_of_ints2.begin_preorder()!=nullptr);
    CHECK(tree_of_ints3.begin_preorder()!=nullptr);
    CHECK(tree_of_double2.begin_preorder()!=nullptr);
    CHECK(tree_of_char2.begin_preorder()!=nullptr);
}
TEST_CASE("check operators function")
{
    BinaryTree<int> tree;
    CHECK(tree.begin_preorder()==nullptr);
    CHECK(tree.begin_inorder()==nullptr);
    CHECK(tree.begin_postorder()==nullptr);
    tree.add_root(1);
    tree.add_left(1,3);
    tree.add_right(1,6);
    tree.add_left(3,4);
    tree.add_right(3,5);
    CHECK(tree.begin_preorder()!=nullptr);
    CHECK(tree.begin_inorder()!=nullptr);
    CHECK(tree.begin_postorder()!=nullptr);
    CHECK(tree.begin_preorder()!=tree.begin_inorder());
    CHECK(tree.begin_inorder()!=tree.begin_postorder());
    CHECK(tree.begin_postorder()!=tree.begin_preorder());
    
}