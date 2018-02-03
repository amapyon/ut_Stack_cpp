/*
 * Stack_test.cpp
 */
#include <gtest/gtest.h>

#include "Stack.h"

TEST(StackTest, init) {
	// Stackのインスタンスを生成した時に
	// getSize()メソッドが0を返すかを確認する
	// getCapacity()メソッドが10を返すかを確認する
	Stack stack;
	ASSERT_EQ(0, stack.getSize());
	// ToDo: 演習
}

TEST(StackTest, getCapacity) {
	// Stackのインスタンスを生成した時に整数を渡した場合、
	// getCapacity()メソッドが、スタックの容量を返すかを確認する
	// ToDo: 演習
}


TEST(StackTest, pushPushPop) {
	// push()メソッドを2回、pop()メソッドを1回行った時に
	// スタックの状態が期待通りかを確認する
	// ToDo: 演習
}

TEST(StackTest, popWhenEmpty) {
	// スタックが空の状態で、pop()メソッドを実行した時に
	// EmptyException例外が発生するかを確認する
	// ToDo: 演習
}

TEST(StackTest, pushWhenFull) {
	// スタックに最大数の値が積まれている状態で、
	// push()メソッドを実行した時に
	// OverflowException例外が発生するかを確認する
	// ToDo: 演習
}

TEST(StackTest, isEmpty) {
	Stack stack;
	ASSERT_TRUE(stack.isEmpty());
	stack.push(10);
	ASSERT_FALSE(stack.isEmpty());
}

TEST(StackTest, isFull) {
	Stack stack(1);
	ASSERT_FALSE(stack.isFull());
	stack.push(10);
	ASSERT_TRUE(stack.isFull());
}

