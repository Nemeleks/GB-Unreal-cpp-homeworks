#include <windows.h>
#include <tchar.h>
#include <string>
#include <atlbase.h>
#include <atlconv.h>

void shift_array(int* arr, int size, int step)
{
    int t;
    int t_step = step;
    if (step < 0)
    {
        step = -(step);
    }
    if (step > size)
    {
        step %= size;
    }
    if (t_step < 0)
    {
        for (int j = 0; j < step; j++)
        {
            for (int i = 0; i < size; i++)
            {
                if (i + 1 < size)
                {
                    t = arr[i + 1];
                    arr[i + 1] = arr[i];
                    arr[i] = t;
                }

            }
        }
    }
    else
    {
        for (int j = 0; j < step; j++)
        {
            for (int i = (size - 1); i > 0; i--)
            {
                t = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = t;
            }
        }
    }


}

std::string print_array(int* arr, int size)
{
    std::string result;
    for (int i = 0; i < size; i++)
    {
        if (i == (size - 1))
        {
            result += std::to_string(arr[i]);
        }
        else
        {
            result += std::to_string(arr[i]) + ", ";
        }
    }
    return result;
}

std::wstring s2ws(const std::string& s)
{
    int len;
    int slength = (int)s.length() + 1;
    len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
    wchar_t* buf = new wchar_t[len];
    MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
    std::wstring r(buf);
    delete[] buf;
    return r;
}