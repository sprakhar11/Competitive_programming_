#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE)
    {
        cout << "Failed to create snapshot" << endl;
        return 1;
    }

    PROCESSENTRY32 pe;
    pe.dwSize = sizeof(PROCESSENTRY32);

    if (!Process32First(hSnapshot, &pe))
    {
        cout << "Failed to get first process" << endl;
        CloseHandle(hSnapshot);
        return 1;
    }

    do
    {
        wchar_t pe_name[MAX_PATH];
        mbstowcs(pe_name, pe.szExeFile, strlen(pe.szExeFile) + 1);

        if (!_wcsicmp(pe_name, L"firefox.exe"))
        {
            HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, pe.th32ProcessID);
            if (hProcess != NULL)
            {
                if (TerminateProcess(hProcess, 0))
                {
                    cout << "Firefox process terminated successfully" << endl;
                }
                else
                {   
                    cout << "Failed to terminate Firefox process" << endl;
                }
                CloseHandle(hProcess);
                break;
            }
            else
            {
                cout << "Failed to open Firefox process" << endl;
                break;
            }
        }
    } while (Process32Next(hSnapshot, &pe));

    CloseHandle(hSnapshot);
    return 0;
}
