#include <iostream>

#include "gtest.h"

#include "Node.hpp"

#include "List.hpp"
#include "Stack.hpp"
#include "Queue.hpp"

std::string names[10] = {"Jacob", "Melinda", "Dessie", "Andrew", "Hannah", "April", "Roxie", "Flopsy", "Red Tail", "Shadow" };

TEST(IntList, Insert)
{
  List<int> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(i);
  }

  for(int i = 0; i < 10; ++i)
  {
    EXPECT_EQ(i, list.at(i));
  }

  EXPECT_EQ(10, list.count());
}

TEST(IntList, Contains)
{
  List<int> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(i);
  }

  for(int i = 0; i < 10; ++i)
  {
    EXPECT_TRUE(list.contains(i));
  }
  
 EXPECT_FALSE(list.contains(10));
}

TEST(IntList, Remove)
{
  List<int> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(i);
  }

  EXPECT_TRUE(list.contains(0));
  list.remove(0);
  EXPECT_EQ(9, list.count());
  EXPECT_FALSE(list.contains(0));
  list.insert(0);
  EXPECT_TRUE(list.contains(0));
  EXPECT_EQ(10, list.count());

  EXPECT_TRUE(list.contains(5));
  list.remove(5);
  EXPECT_EQ(9, list.count());
  EXPECT_FALSE(list.contains(5));
  list.insert(5);
  EXPECT_EQ(10, list.count());
  EXPECT_TRUE(list.contains(5));
}

TEST(IntList, RemoveAll)
{
  List<int> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(i);
  }

  for (int i = 9; i >= 0; --i)
  {
    EXPECT_TRUE(list.contains(i));
    list.remove(i);
    EXPECT_FALSE(list.contains(i));
    EXPECT_EQ(i, list.count());
  }

  EXPECT_EQ(0, list.count());

  list.insert(9999);
  EXPECT_TRUE(list.contains(9999));
}

TEST(IntList, toString)
{
  List<int> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(i);
  }

  EXPECT_EQ("0 1 2 3 4 5 6 7 8 9 ", list.toString());
}

TEST(IntList, reset)
{
  List<int> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(i);
  }

  list.reset();

  EXPECT_EQ("", list.toString());
  EXPECT_EQ(0, list.count());
}

TEST(StringList, Insert)
{
  List<std::string> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(names[i]);
  }

  for(int i = 0; i < 10; ++i)
  {
    EXPECT_EQ(names[i], list.at(i));
  }

  EXPECT_EQ(10, list.count());
}

TEST(StringList, Contains)
{
  List<std::string> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(names[i]);
  }

  for(int i = 0; i < 10; ++i)
  {
    EXPECT_TRUE(list.contains(names[i]));
  }
  
  EXPECT_FALSE(list.contains("10"));
}

TEST(StringList, Remove)
{
  List<std::string> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(names[i]);
  }

  EXPECT_TRUE(list.contains(names[0]));
  list.remove(names[0]);
  EXPECT_EQ(9, list.count());
  EXPECT_FALSE(list.contains(names[0]));
  list.insert(names[0]);
  EXPECT_TRUE(list.contains(names[0]));
  EXPECT_EQ(10, list.count());

  EXPECT_TRUE(list.contains(names[5]));
  list.remove(names[5]);
  EXPECT_EQ(9, list.count());
  EXPECT_FALSE(list.contains(names[5]));
  list.insert(names[5]);
  EXPECT_EQ(10, list.count());
  EXPECT_TRUE(list.contains(names[5]));
}

TEST(StringList, RemoveAll)
{
  List<std::string> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(names[i]);
  }

  for (int i = 9; i >= 0; --i)
  {
    EXPECT_TRUE(list.contains(names[i]));
    list.remove(names[i]);
    EXPECT_FALSE(list.contains(names[i]));
    EXPECT_EQ(i, list.count());
  }

  EXPECT_EQ(0, list.count());

  list.insert("9999");
  EXPECT_TRUE(list.contains("9999"));
}

TEST(StringList, toString)
{
  List<std::string> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(names[i]);
  }

  EXPECT_EQ("Jacob Melinda Dessie Andrew Hannah April Roxie Flopsy Red Tail Shadow ", list.toString());
}

TEST(StringList, reset)
{
  List<std::string> list;

  for (int i = 0; i < 10; ++i)
  {
    list.insert(names[i]);
  }

  list.reset();

  EXPECT_EQ("", list.toString());
  EXPECT_EQ(0, list.count());
}

TEST(IntStack, pushPopTop)
{
  Stack<int> stack;

  for (int i = 0; i < 10; ++i)
  {
    stack.push(i);
    EXPECT_EQ(i + 1, stack.count());
    EXPECT_EQ(i, stack.top());
  }

  for (int i = 9; i >= 0; --i)
  {
    EXPECT_EQ(i, stack.top());
    EXPECT_EQ(i, stack.pop());
    EXPECT_EQ(i, stack.count());
  }
}

TEST(IntStack, reset)
{
  Stack<int> stack;

  for (int i = 0; i < 10; ++i)
  {
    stack.push(i);
    EXPECT_EQ(i + 1, stack.count());
    EXPECT_EQ(i, stack.top());
  }

  stack.reset();

  EXPECT_EQ(0, stack.count());

  stack.push(9999);
  EXPECT_EQ(9999, stack.top());
}

TEST(StringStack, pushPopTop)
{
  Stack<std::string> stack;

  for (int i = 0; i < 10; ++i)
  {
    stack.push(names[i]);
    EXPECT_EQ(i + 1, stack.count());
    EXPECT_EQ(names[i], stack.top());
  }

  for (int i = 9; i >= 0; --i)
  {
    EXPECT_EQ(names[i], stack.top());
    EXPECT_EQ(names[i], stack.pop());
    EXPECT_EQ(i, stack.count());
  }
}

TEST(StringStack, reset)
{
  Stack<std::string> stack;

  for (int i = 0; i < 10; ++i)
  {
    stack.push(names[i]);
    EXPECT_EQ(i + 1, stack.count());
    EXPECT_EQ(names[i], stack.top());
  }

  stack.reset();

  EXPECT_EQ(0, stack.count());

  stack.push("9999");
  EXPECT_EQ("9999", stack.top());
}

TEST(IntQueue, enqueueDequeueFront)
{
  Queue<int> queue;

  for (int i = 0; i < 10; ++i)
  {
    queue.enqueue(i);
    EXPECT_EQ(i + 1, queue.count());
    EXPECT_EQ(0, queue.front());
  }

  for (int i = 0; i < 10; ++i)
  {
    EXPECT_EQ(i, queue.front());
    EXPECT_EQ(i, queue.dequeue());
    EXPECT_EQ(9 - i, queue.count());
  }
}

TEST(IntQueue, reset)
{
  Queue<int> queue;

  for (int i = 0; i < 10; ++i)
  {
    queue.enqueue(i);
    EXPECT_EQ(i + 1, queue.count());
    EXPECT_EQ(0, queue.front());
  }

  queue.reset();

  EXPECT_EQ(0, queue.count());

  queue.enqueue(9999);
  EXPECT_EQ(9999, queue.front());
}

TEST(StringQueue, enqueueDequeueFront)
{
  Queue<std::string> queue;

  for (int i = 0; i < 10; ++i)
  {
    queue.enqueue(names[i]);
    EXPECT_EQ(i + 1, queue.count());
    EXPECT_EQ(names[0], queue.front());
  }

  for (int i = 0; i < 10; ++i)
  {
    EXPECT_EQ(names[i], queue.front());
    EXPECT_EQ(names[i], queue.dequeue());
    EXPECT_EQ(9 - i, queue.count());
  }
}

TEST(StringQueue, reset)
{
  Queue<std::string> queue;

  for (int i = 0; i < 10; ++i)
  {
    queue.enqueue(names[i]);
    EXPECT_EQ(i + 1, queue.count());
    EXPECT_EQ(names[0], queue.front());
  }

  queue.reset();

  EXPECT_EQ(0, queue.count());

  queue.enqueue("9999");
  EXPECT_EQ("9999", queue.front());
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}