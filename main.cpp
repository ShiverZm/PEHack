#include "PE.h"

int main(int args, char *argv[])
{
    //判断参数是否正确.
    if (args < 2)
        return 0;
    //构造PE类，参数为路径 或者buffer
    PE pe = PE(argv[1]);
    //调用PrintAll() 输出所有信息。
     pe.Print_All();
    pe.Print_Directory_Table_Infomation();
    system("pause");
    return 0;
}
