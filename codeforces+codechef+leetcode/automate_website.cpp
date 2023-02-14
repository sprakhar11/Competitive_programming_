#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <thread>


using namespace std;

void close_firefox() {
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE)
    {
        cout << "Failed to create snapshot" << endl;
    }

    PROCESSENTRY32 pe;
    pe.dwSize = sizeof(PROCESSENTRY32);

    if (!Process32First(hSnapshot, &pe))
    {
        cout << "Failed to get first process" << endl;
        CloseHandle(hSnapshot);
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

}

void open_link() {
    std::string link = "http://www.google.com";
    std::string command = "start " + link;
    system(command.c_str());
}

void waiting_time(int x) {
    Sleep(5000);
}
int main(){

    for(int i = 0 ; i < 10 ; i++) {
        open_link();
        waiting_time(5);
        close_firefox();
        waiting_time(2);

    }
    return 0;
}
