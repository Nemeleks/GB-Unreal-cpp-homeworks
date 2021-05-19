#include <windows.h>
#include <tchar.h>
#include <string>
#include <atlbase.h>
#include <atlconv.h>
#include "f_array.h"
#ifdef _UNICODE
#define tstring std::wstring
#else
#define tstring std::string
#endif

BOOL RegClass(WNDPROC, LPCTSTR, UINT);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

HINSTANCE hInstance;
TCHAR szMainClass[] = TEXT("MyWindowClass");
TCHAR szTitle[] = TEXT("Challenge 4");


int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpszCmdLine, int nCmdShow)
{
    MSG msg;
    hInstance = hInst;
    HWND hwnd;

    if (!RegClass(WndProc, szMainClass, COLOR_WINDOW))
        return FALSE;

    hwnd = CreateWindow(szMainClass, szTitle, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 500, 400, 0, 0, hInstance, NULL);
    if (!hwnd) return FALSE;

    ShowWindow(hwnd, nCmdShow);

    while (GetMessage(&msg, 0, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return msg.wParam;
}

BOOL RegClass(WNDPROC Proc, LPCTSTR szName, UINT brBackground)
{
    WNDCLASS wc;
    wc.style = wc.cbClsExtra = wc.cbWndExtra = 0;
    wc.lpfnWndProc = Proc;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(brBackground);
    wc.lpszMenuName = (LPCTSTR)NULL;
    wc.lpszClassName = szName;
    return (RegisterClass(&wc) != 0);
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    static HWND hStatic1;
    static HWND hStatic2;
    static HWND hWndBtn;
    static HWND hWndLbl1;
    static HWND hWndLbl6;
    static HWND hWndTxt5;
    static HWND hWndTxt6;
    HDC hdc;
    PAINTSTRUCT ps;
    int arr[8] = { 1,2,3,4,5,6,7,8 };
    int step;
    TCHAR StrA[20];

    switch (msg)
    {
    case WM_CREATE:
    {
        hWndLbl1 = CreateWindowEx(
            0,
            _T("Static"),
            _T("Сдвиг значений массива. "),
            WS_VISIBLE | WS_CHILD,
            100, 40,
            250, 20,
            hwnd,
            0,
            hInstance,
            0
        );

        hStatic1 = CreateWindow(
            _T("Static"),
            _T("Первоначальный вид массива"),
            WS_CHILD | WS_VISIBLE,
            100, 80,
            280, 21,
            hwnd,
            0,
            hInstance,
            0
        );
        hStatic2 = CreateWindowEx(
            0,
            _T("Edit"),
            0,
            WS_VISIBLE | WS_CHILD | ES_CENTER,
            100, 120,
            200, 30,
            hwnd,
            0,
            hInstance,
            0
        );
        hWndLbl6 = CreateWindowEx(
            0,
            _T("Static"),
            _T(" Для сдвига значений влево введите отрицательное число, а для сдвига вправо - положительное."),
            WS_VISIBLE | WS_CHILD,
            100, 150,
            200, 80,
            hwnd,
            0,
            hInstance,
            0
        );
        hWndTxt5 = CreateWindowEx(
            0,
            L"edit",
            0,
            WS_VISIBLE | WS_CHILD ,
            100, 215,
            200, 30,
            hwnd,
            0,
            hInstance,
            NULL
        );
        ShowWindow(hWndTxt5, SW_SHOWNORMAL);
        UpdateWindow(hWndTxt5);
        hWndBtn = CreateWindowEx(
            0,
            _T("Button"),
            _T("Сдвинуть"),
            WS_VISIBLE | WS_CHILD,
            160, 260,
            73, 21,
            hwnd,
            0,
            hInstance,
            0
        );
        hWndTxt6 = CreateWindowEx(
            0,
            _T("STATIC"),
            0,
            WS_VISIBLE | WS_CHILD | WS_BORDER| ES_CENTER,
            100, 290,
            200, 26,
            hwnd,
            0,
            hInstance,
            0
        );
        std::string s = print_array(arr, 8);
        std::wstring stemp = s2ws(s);
        LPCWSTR result = stemp.c_str();
        SetWindowText(hStatic2, result);

    }
    break;
    case WM_COMMAND:
    {
        if (lParam == (LPARAM)hWndBtn)
        {
            GetWindowText(hWndTxt5, StrA, 20);
            std::wstring ntt = StrA;
            std::string nt = std::string(ntt.begin(), ntt.end());
            step = atoi(nt.c_str());
            shift_array(arr, 8, step);
            std::string ss = print_array(arr, 8);
            std::wstring sstemp = s2ws(ss);
            LPCWSTR results = sstemp.c_str();
            SetWindowText(hWndTxt6, results);
        }
        break;
    }
    case WM_PAINT:
    {
        hdc = BeginPaint(hwnd, &ps);
        TextOut(hdc, 100, 120, L"Введите число", 14);
        EndPaint(hwnd, &ps);
    }
    break;
    case WM_DESTROY:
    {
        PostQuitMessage(0);
    }
    break;
    default:
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
}
