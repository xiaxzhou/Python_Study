#ifdef DLL_API  
#else  
#define DLL_API __declspec(dllexport)  
#endif  
// 声明要导出的函数  
DLL_API int add(int a, int b);