#include <bits/stdc++.h>

class Array
{
private:
    vector<int> data;

public:
    void add(int number)
    {
        data.push_back(number);
    }
    int get(int index)
    {
        if (index < 0 || index >= data.size())
        {
            throw out_of_range("Index out of bounds");
        }
        return data[index];
    }
    int remove(int index)
    {
        if (index < 0 || index >= data.size())
        {
            throw out_of_range("Index out of bounds");
        }
        int value = data[index];
        data.erase(data.begin() + index);
        return value;
    }

    int size()
    {
        return data.size();
    }
}

class ArrayTest
{
    Array array;

    @Before 
    public void beforeTest()
    {
        array = new Array();
    }

    @Test 
    public void getTest
    {
        array.add(1);
        array.add(2);
        array.add(3);

        ASSERT_EQ(array.get(0), 1);
        ASSERT_EQ(array.get(1), 2);
        ASSERT_EQ(array.get(2), 3);
    }

    @Test 
    public void getIndexOutTest
    {
        array.add(1);
        
        ASSERT_EQ(array.get(-1), out_of_range);
        ASSERT_EQ(array.get(0), 1)
    }
    @Test 
    public void removeTest
    {
        array.add(1);
        array.add(2);
        array.add(3);

        ASSERT_EQ(array.remove(1), 2);
        ASSERT_EQ(array.size(), 2);
        ASSERT_EQ(array.get(0), 1);
        ASSERT_EQ(array.get(1), 3);
        ASSERT_THROW(array.remove(4),out_of_range)
    }
    @Test
    public void getSizeTest
    {

        array.add(1);
        ASSERT_EQ(array.size(), 1);

        arrayList.add(2);
        ASSERT_EQ(array.size(), 2);

        arrayList.remove(0);
        ASSERT_EQ(array.size(), 1);
    }
}
