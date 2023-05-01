#include <iostream>
#include <string.h>
using namespace std;
class String
{
public:
    String() = default;
    String(const char *string)
    {
        cout << "Created" << endl;
        m_Size = strlen(string);
        m_Data = new char[m_Size];
        memcpy(m_Data, string, m_Size);
    }

    String(const String &other)
    {
        cout << "Copied" << endl;
        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        memcpy(m_Data, other.m_Data, m_Size);
    }

    String(String &&other) noexcept
    {
        cout << "Moved" << endl;
        m_Size = other.m_Size;
        m_Data = other.m_Data;

        other.m_Data = nullptr;
        other.m_Size = 0;
    }
    void PrintName()
    {
        for (uint32_t i = 0; i < m_Size; i++)
        {
            printf("%c", m_Data[i]);
        }
        printf("\n");
    }
    ~String()
    {
        printf("Destroyed\n");
        delete m_Data;
    }

private:
    char *m_Data;
    uint32_t m_Size;
};
class Entity
{
public:
    Entity(String &name) : m_Name(name)
    {
    }
    Entity(String &&name) : m_Name(move(name))
    {
    }
    void print()
    {
        m_Name.PrintName();
    }

private:
    String m_Name;
};
int main()
{
    String n="Kavi";
    Entity entity1("Kabilan K");  //  It will call move constructor because it is R value !
    Entity entity2(n);           //   It will call copy constructor because it is L value !

    return 0;
}