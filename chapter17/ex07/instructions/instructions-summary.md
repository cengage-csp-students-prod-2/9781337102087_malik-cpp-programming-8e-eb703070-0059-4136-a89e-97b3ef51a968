## Instructions ##
1. Add the following operation to the `class` `orderedLinkedList`:

```
void mergeLists(orderedLinkedList&lt;Type&gt; &amp;list1,

orderedLinkedList&lt;Type&gt; &amp;list2);

//This function creates a new list by merging the

//elements of list1 and list2.

//Postcondition: first points to the merged list

// list1 and list2 are empty

```
Consider the following statements:

```

orderedLinkedList<int> newList;

orderedLinkedList<int> list1;

orderedLinkedList<int> list2;

```

Suppose `list1` points to the list with the elements **2 6 7**, and `list2` points to the list with the elements **3 5 8**. The statement

     newList.mergeLists(list1, list2);

creates a new linked list with the elements in the order **2 3 5 6 7 8**, and the object `newList` points to this list. Also, after the preceding statement executes, `list1` and `list2` are empty.

2.  Write the definition of the function template `mergeLists` to implement the operation `mergeLists`.