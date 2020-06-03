#include <iostream>
#include <string>
using namespace std;

// reference from https://blockdmask.tistory.com/338

string str1 = "BlockDMask";
string str2 = "BlogBlogBlogBlog";

void printingStringInfor(const string &);

void str_resize(string);
void str_shrink_to_fit(string);
void str_reserve();
void str_clear(string);

void str_substr(string);
void str_replace(string, string);
void str_compare(string, string);
void str_find(string);
void str_swap(string, string);

int main(void)
{
    str_resize(str1);
    str_shrink_to_fit(str2);
    str_reserve();
    str_clear(str2);

    str_substr(str2);
    str_replace(str1, str2);
    str_compare(str1, str2);
    str_find(str2);
    str_swap(str1, str2);

    system("pause");
    return 0;
}

void printingStringInfor(const string &str)
{
    cout << "string contents : " << str << endl;
    cout << "string len : " << str.length() << endl;
    cout << "string size : " << str.size() << endl;
    cout << "string capacity : " << str.capacity() << endl;
}
void str_resize(string str)
{

    cout << "==== str_resize() start() ====" << endl;
    cout << "before resize" << endl;
    printingStringInfor(str);
    cout << "after resize(3)" << endl;
    str.resize(3);
    printingStringInfor(str);
    cout << "==== str_resize() end ====" << endl
         << endl;
}
void str_shrink_to_fit(string str)
{
    // 실험결과 15이상의 크기는 알아서 딱 맞게 배정되는 듯.
    // 기본 capacity는 15임.
    cout << "==== str_shrink_to_fit() start ====" << endl;
    cout << "before shrink" << endl;
    printingStringInfor(str);
    cout << "after shrink_to_fit()" << endl;
    str.shrink_to_fit();
    printingStringInfor(str);
    cout << "==== str_shrink_to_fit() end ====" << endl
         << endl;
}
void str_reserve()
{
    cout << "==== str_reserve() start ====" << endl;
    string temp = "blahblahblahblahblahblahblahblahblahblahblahblah";
    cout << "first init string capacity : " << temp.capacity() << endl;
    printingStringInfor(temp);
    temp.reserve(20);
    cout << "after reserve(20) capacity : " << temp.capacity() << endl;
    printingStringInfor(temp);

    string temp1;
    cout << "first init string capacity : " << temp1.capacity() << endl;
    printingStringInfor(temp1);
    temp1.reserve(50);
    cout << "after reserve(50) capacity : " << temp1.capacity() << endl;
    printingStringInfor(temp1);
    cout << "==== str_reserve() end ====" << endl
         << endl;
}
void str_clear(string str)
{
    cout << "==== str_clear() start ====" << endl;
    cout << "before clear()" << endl;
    printingStringInfor(str);
    str.clear();
    cout << "after clear()" << endl;
    printingStringInfor(str);
    cout << "==== str_clear() end ====" << endl
         << endl;
}

void str_substr(string str)
{
    cout << "==== str_substr() start ====" << endl;
    cout << "str content : " << str << endl;
    cout << "str.substr(2, 1) : " << str.substr(2, 1) << endl;
    cout << "str.substr(2, 5) : " << str.substr(2, 5) << endl;
    cout << "str.substr(2, 0) : " << str.substr(2, 0) << endl;
    cout << "str.substr(2, -1) : " << str.substr(2, -1) << endl;
    cout << "str.substr(2) : " << str.substr(2) << endl;
    cout << "==== str_substr() end ====" << endl
         << endl;
}
void str_replace(string str1, string str2)
{
    string temp = str1;
    cout << "==== str_replace() start ====" << endl;
    cout << "str1 content : " << str1 << endl;
    cout << "str2 content : " << str2 << endl;
    str1.replace(5, 2, str2);
    cout << "after str1.replace(5, 2, str2) : " << str1 << endl;
    temp.replace(5, 1, str2.substr(3, 5));
    cout << "after str1.replace(5, 1, str2.substr(3, 5)) : " << temp << endl;
    cout << "==== str_replace() end ====" << endl
         << endl;
}
void str_compare(string str1, string str2)
{
    cout << "==== str_compare() start ====" << endl;
    cout << "str1 content : " << str1 << endl;
    cout << "str2 content : " << str2 << endl;
    cout << "str1.compare(str2) : " << str1.compare(str2) << endl;
    cout << "str2.compare(str1) : " << str2.compare(str1) << endl;
    cout << "str1.compare(\"BlockDMask\") : " << str1.compare("BlockDMask") << endl;
    cout << "str1.compare(0, 2, str2) : " << str1.compare(0, 2, str2) << endl;
    cout << "str1.compare(0, 2, str2, 4, 2) : " << str1.compare(0, 2, str2, 4, 2) << endl;
    cout << "==== str_compare() end ====" << endl
         << endl;
}

void str_find(string str)
{
    cout << "==== str_find() start ====" << endl;
    cout << "str content : " << str << endl;
    cout << "str.find(\"Blog\") : " << str.find("Blog") << endl;
    cout << "str.find(\"Blog\", 5) : " << str.find("Blog", 5) << endl;
    cout << "==== str_find() end ====" << endl
         << endl;
}
void str_swap(string str1, string str2)
{
    cout << "==== str_swap() start ====" << endl;
    cout << "str1 content : " << str1 << endl;
    cout << "str2 content : " << str2 << endl;

    str1.swap(str2);
    cout << "after str1.swap(str2)" << endl;
    cout << "str1 content : " << str1 << endl;
    cout << "str2 content : " << str2 << endl;
    cout << "==== str_swap() end ====" << endl
         << endl;
}
